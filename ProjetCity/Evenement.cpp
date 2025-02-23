#include "Evenement.h"
#include "Ville.h"
#define EVENEMENT_H



class PigeonsGeants : public Evenement {
public:
    void declencher(Ville& ville) override {
        cout << "Une nuée de pigeons géants envahit la ville!" << endl;
        ville.modifierSatisfaction(-15);
        cout << "Le service de nettoyage doit être activé!" << endl;
    }
};

class PanneCourant : public Evenement {
public:
    void declencher(Ville& villee) override {
        cout << "Une panne de courant fait grimper la consommation d’énergie de 50%!" << endl;
        villee.ressourcesElectricité *= 1.5;
        villee.calculerConsommationTotale();
    }
};

class GreveJardiniers : public Evenement {
public:
    void declencher(Ville& ville) override {
        cout << "Les jardiniers sont en grève, l'entretien des parcs est suspendu!" << endl;
        ville.modifierSatisfaction(-20);
        for (auto& batiment : ville.batiments) {
            if (auto parc = dynamic_cast<Parc*>(batiment)) {
                cout << "L'effet des parcs est réduit de moitié!" << endl;
                parc->effetBienEtre /= 2;
            }
        }
    }
};

class EmbouteillageTransport : public Evenement {
public:
    void declencher(Ville& ville) override {
        cout << "Embouteillage géant, tous les transports publics sont bloqués!" << endl;
        ville.modifierSatisfaction(-25);
        cout << "Les habitants doivent maintenant marcher pour se déplacer!" << endl;
    }
};

class TempeteNeige : public Evenement {
public:
    void declencher(Ville& ville) override {
        cout << "Une tempête de neige bloque les routes et la production des usines!" << endl;
        ville.modifierSatisfaction(-20);
        for (auto& batiment : ville.batiments) {
            if (auto usine = dynamic_cast<Usine*>(batiment)) {
                cout << "La production des usines est arrêtée pendant la tempête!" << endl;
                usine->productionRessources = 0;
            }
        }
    }
};
