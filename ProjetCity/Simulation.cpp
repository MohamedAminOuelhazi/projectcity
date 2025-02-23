#include "Simulation.h"
#include <QDebug>
#include <QRandomGenerator>

/*void Simulation::demarrerCycle() {
    cout << "Début du cycle " << cycleActuel << endl;

    // Déclencher un événement aléatoire à chaque cycle
    int evenementIndex = rand() % evenements.size();
    evenements[evenementIndex]->declencher(ville);

}*/

Simulation::Simulation(Ville& v) : ville(v), cycleActuel(0) {
    // Initialiser le générateur aléatoire
    srand(static_cast<unsigned>(time(0)));
    initialiserEvenements();
}

Simulation::~Simulation() {
    // Implémentation vide du destructeur (pas de nettoyage nécessaire pour ville, car c'est une référence)
}

void Simulation::initialiserEvenements() {
    evenements = {
        "Une nuée de pigeons géants envahit votre ville !",
        "Une panne de courant fait grimper la consommation d’énergie de 50 %.",
        "Les jardiniers de la ville sont en grève !",
        "Une panne géante de transports publics se produit !",
        "Une tempête de neige imprévue bloque les routes !"
    };
}

void Simulation::demarrerCycle() {
    if (cycleActuel == 0) {
        qDebug() << "Démarrage de la simulation au cycle 1.";
        cycleActuel = 1;
    } else {
        cycleActuel++;
        qDebug() << "Avancement au cycle #" << cycleActuel;
    }

    // Gérer les ressources et la satisfaction à chaque cycle
    gererRessources();
    verifierSatisfaction();

    // Déclencher un événement aléatoire (par exemple, 20% de chance)
    if (QRandomGenerator::global()->bounded(100) < 20) {
        declencherEvenement();
    }


}


void Simulation::gererRessources() {
    // Calculer la consommation totale des bâtiments
    double consommationTotaleEau = 0;
    double consommationTotaleElectricite = 0;

    for (Batiment* b : ville.getBatiments()) {
        int eau;
        double electricite;
        b->calculerImpactRessources(eau, electricite);
        consommationTotaleEau += eau;
        consommationTotaleElectricite += electricite;
    }

    // Vérifier si les ressources sont suffisantes
    if (ville.getEau()< consommationTotaleEau || ville.getElectricite()< consommationTotaleElectricite) {
        qDebug() << "Attention : Ressources insuffisantes !";
        ville.modifierSatisfaction(-10); // Baisse de satisfaction en cas de pénurie
    }

    // Consommer les ressources
    ville.ressourcesEau = (ville.ressourcesEau- static_cast<int>(consommationTotaleEau));
    ville.ressourcesElectricité=(ville.getElectricite() - consommationTotaleElectricite);

    // Simuler une production de base (usines produisent)
    for (Batiment* b : ville.getBatiments()) {
        if (b->gettype() == "Usine") {
            ville.ressourcesEau = (ville.ressourcesEau + 50); // Production d'eau
            ville.ressourcesElectricité=(ville.getElectricite() + 10.0); // Production d'électricité
        }
    }
}

void Simulation::verifierSatisfaction() {
    int nouvelleSatisfaction = ville.calculerSatisfaction();
    ville.satisfaction = nouvelleSatisfaction;
}



/*void Simulation::terminerCycle() {
    cout << "Fin du cycle " << cycleActuel << ".\n";
    ville.calculerConsommationTotale();
    ville.calculerSatisfaction();
}*/



void Simulation::terminerCycle() {
    if (cycleActuel > 0) {
        qDebug() << "Fin de la simulation au cycle #" << cycleActuel;
        cycleActuel = 0;
    } else {
        qDebug() << "Aucun cycle en cours à terminer.";
    }
}

void Simulation::declencherEvenement() {
    if (evenements.empty()) {
        qDebug() << "Aucun événement disponible.";
        return;
    }

    // Sélectionner un événement aléatoire
    int index = QRandomGenerator::global()->bounded(evenements.size());
    string evenement = evenements[index];
    QString description = QString::fromStdString(evenement);

    // Appliquer les effets de l'événement
    if (evenement == "Une nuée de pigeons géants envahit votre ville !") {
        qDebug() << "Event : Une nuée de pigeons géants envahit votre ville !";
        ville.modifierSatisfaction(-15); // Baisse de satisfaction
        ville.ressourcesEau = ville.getEau() - 20; // Augmentation des déchets (baisse des ressources eau)
    } else if (evenement == "Une panne de courant fait grimper la consommation d’énergie de 50 %.") {
        for (Batiment* b : ville.getBatiments()) {
            qDebug() << "Event : Une panne de courant fait grimper la consommation d’énergie de 50 %.";
            b->setconsommationElectricite(b->getconsommationElectricite()* 1.5);
        }
    } else if (evenement == "Les jardiniers de la ville sont en grève !") {
        qDebug() << "Event : Les jardiniers de la ville sont en grève !.";
        ville.modifierSatisfaction(-20); // Baisse de satisfaction
        // Réduire l’effet des parcs (diviser par 2 leur effet satisfaction)
        for (Batiment* b : ville.getBatiments()) {
            if (b->gettype() == "Parc") {
                b->setEffetSatisfaction(b->getEffetSatisfaction() / 2);
            }
        }
    } else if (evenement == "Une panne géante de transports publics se produit !") {
        qDebug() << "Event : Une panne géante de transports publics se produit !";
        ville.modifierSatisfaction(-30); // Forte baisse de satisfaction
    } else if (evenement == "Une tempête de neige imprévue bloque les routes !") {
        qDebug() << "Event : Une tempête de neige imprévue bloque les routes !";
        ville.modifierSatisfaction(-20); // Baisse de satisfaction
        // Interrompre la production des usines
        for (Batiment* b : ville.getBatiments()) {
            if (b->gettype() == "Usine") {
                b->setconsommationEau(0); // Pas de production d'eau
                b->setconsommationElectricite(0); // Pas de production d'électricité
            }
        }
    }

}
