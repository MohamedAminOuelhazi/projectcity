#include "Maison.h"//


// définition du constructeur
Maison::Maison(string n, string t, double CE, double CEL, int e, int c , int ha):Batiment(n,t,CE,CEL,e)
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

int Maison::getcapaciteHabitants(){
    return capaciteHabitants;
}


void Maison::setHabitantsActuels(int n){
    habitantsActuels=n;
}

void Maison::setCapaciteHabitants(int n){
    capaciteHabitants=n;
}

string Maison::chaine(){
    string s ;



    s += "le nom est " + Batiment::getnom() +"\n";
    s += " le type est "  + Batiment::gettype() +"\n";
    s += " la consommation de l'eau est "  + to_string(Batiment::getconsommationEau()) +"unité par cycle \n";
    s += " la consommation de l'électricité est "  + to_string(Batiment::getconsommationElectricite()) +"unité par cycle \n";
    s += " l'effet de satisfaction des habitants est "  + to_string(Batiment::getEffetSatisfaction()) +"\n";

    s += " Capacité :"  + to_string(capaciteHabitants) +"\n";
    s += " Habitants actuels :"  + to_string(habitantsActuels) +"\n";


    return s;

}

