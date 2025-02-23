#ifndef SIMULATION_H
#define SIMULATION_H


#include "Evenement.cpp"
#include "Ville.h"


class Simulation {
private:
    int cycleActuel;
    Ville& ville;
    vector<string> evenements; // Liste des événements possibles

public:

    Simulation(Ville& v); // Constructeur avec référence à Ville

    virtual ~Simulation();

    void demarrerCycle();
    void terminerCycle();
    void declencherEvenement();


    void initialiserEvenements(); // Initialiser les événements
    void gererRessources();       // Gérer les ressources à chaque cycle
    void verifierSatisfaction();

};


#endif // SIMULATION_H
