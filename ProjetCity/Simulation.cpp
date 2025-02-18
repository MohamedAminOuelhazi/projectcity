#include "Simulation.h"


void Simulation::demarrerCycle() {
    cout << "Début du cycle " << cycleActuel << endl;

    // Déclencher un événement aléatoire à chaque cycle
    int evenementIndex = rand() % evenements.size();
    evenements[evenementIndex]->declencher(ville);

}

void Simulation::terminerCycle() {
    cout << "Fin du cycle " << cycleActuel << ".\n";
    ville.calculerConsommationTotale();
    ville.calculerSatisfaction();
}


