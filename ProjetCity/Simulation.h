#ifndef SIMULATION_H
#define SIMULATION_H


#include "Evenement.h"
#include "Ville.h"


class Simulation {
private:
    int cycleActuel;
    Ville& ville;
    vector<Evenement*> evenements;

public:

    Simulation(Ville& ville) : ville(ville), cycleActuel(0) {

        // Ajouter des événements par défaut au démarrage de la simulation
        evenements.push_back(new PanneCourant());
        evenements.push_back(new GreveJardiniers());
        evenements.push_back(new TempeteNeige());
        evenements.push_back(new PanneCourant());
        evenements.push_back(new EmbouteillageTransport());

        cout << "Simulation initialisée avec " << evenements.size() << " événements par défaut." << endl;
    }

    void demarrerCycle();
    void terminerCycle();
    void declencherEvenement(const string& evenement);

};


#endif // SIMULATION_H
