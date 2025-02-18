#include "Maison.h"//


// définition du constructeur
Maison::Maison(int id, string n, string t, double CE, double CEL, int e, int c , int ha):Batiment(id,n,t,CE,CEL,e)
{
    capaciteHabitants = c;
    habitantsActuels = ha;
}


// définition de la méthode ajouterHabitants
void Maison::ajouterHabitants(int nb)
{

    if (habitantsActuels + nb <= capaciteHabitants) {

        habitantsActuels = habitantsActuels + nb;
        cout << nb << " habitants ajoutés. Habitants actuels : " << habitantsActuels << endl;
    } else {
        cout << "Impossible d'ajouter " << nb << " habitants : capacité dépassée !" << endl;
    }
}


// définition de la méthode retirerHabitants
void Maison::retirerHabitants(int nb)
{

    if (( habitantsActuels - nb ) >= 0) {
        habitantsActuels = habitantsActuels - nb;
        cout << nb << " habitants retirés. Habitants actuels : " << habitantsActuels << endl;
    } else {
        cout << "Impossible de retirer " << nb << " habitants : nombre insuffisant d'habitants !" << endl;
    }
}



void Maison::afficherDetails()  {
    Batiment::afficherDetails();
    std::cout << "Capacité: " << capaciteHabitants << ", Habitants actuels: " << habitantsActuels << std::endl;

}

void Maison::getNom(){
    getNom();
}


int Maison::gethabitantsActuels(){
    return habitantsActuels;
}
