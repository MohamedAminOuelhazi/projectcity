#include "Ville.h"

Ville::Ville(string nom,double budget, int population){
    this->nom=nom;
    this->budget=budget;
    this->population=population;
    this->satisfaction=0;
    this->ressourcesEau=10000 ;
    this->ressourcesElectricité=5000;
};

void Ville::ajouterBatiment(Batiment* b){

    // Ajouter le bâtiment à la liste des bâtiments
    batiments.push_back(b);

    // Afficher un message pour confirmer l'ajout
    std::cout << "Le bâtiment a ete ajoute a la ville " << nom << "." << endl;

};

void Ville::supprimerBatiment(int id){

    bool trouve = false;

    // Rechercher le bâtiment avec l'ID donné
    for (auto it = batiments.begin(); it != batiments.end(); ++it) {
        if ((*it)->getId() == id) {


            // Supprimer le bâtiment de la liste
            delete *it; // Libérer la mémoire
            batiments.erase(it); // Supprimer du vecteur
            trouve = true;

            cout << "Le bâtiment avec l'ID " << id << " a été supprimé de la ville " << nom << "." << endl;
            break;
        }
    }

    if (!trouve) {
        cout << "Aucun bâtiment avec l'ID " << id << " n'a été trouvé dans la ville " << nom << "." << endl;
    }
};


double Ville::calculerConsommationTotale(){
    int consommationEauTotale = 0;
    double consommationElectriciteTotale = 0;

    for (auto& batiment : batiments) {
        batiment->calculerImpactRessources(ressourcesEau, ressourcesElectricité);
        consommationEauTotale += batiment->getconsommationEau();
        consommationElectriciteTotale += batiment->getconsommationElectricite();
    }

    cout << "Consommation Totale - Eau: " << consommationEauTotale << " | Electricité: " << consommationElectriciteTotale << endl;

}


int Ville::calculerSatisfaction() {
    int satisfactionTotale = 0;

    for (const auto& batiment : batiments) {
        satisfactionTotale += batiment->getEffetSatisfaction(); // Effet de chaque bâtiment
    }

    satisfaction = satisfactionTotale; // Met à jour la satisfaction globale de la ville
    return satisfaction;
}

void Ville::modifierSatisfaction(int impact) {
    satisfaction += impact;
    if (satisfaction > 100) satisfaction = 100;
    if (satisfaction < 0) satisfaction = 0;
    cout << "Satisfaction mise à jour: " << satisfaction << "%" << endl;
}

void Ville::afficherDetails()  {
    std::cout << "Nom: " << nom << ", Budget: " << budget << ", Population: " << population
              << ", Eau: " << ressourcesEau << ", Électricité: " << ressourcesElectricité
              << ", Satisfaction: " << satisfaction << std::endl;
}


int Ville::getEau()  {
    return ressourcesEau;
}

int Ville::getElectricite()  {
    return ressourcesElectricité;
}

int Ville::getSatisfaction()  {
    return satisfaction;
}

vector<Batiment*> Ville::getBatiments() const {
    return batiments; // Retourne une copie de la liste des bâtiments
}
