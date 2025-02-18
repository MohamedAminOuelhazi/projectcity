#ifndef MAISON_H
#define MAISON_H


#include "Batiment.h"

class Maison: public Batiment
{
    int capaciteHabitants;
    int habitantsActuels ;


public:
    Maison(int,string,string,double,double,int,int,int);
    void ajouterHabitants(int nb);
    void retirerHabitants( int nb);

    void afficherDetails();

    void getNom();
    int gethabitantsActuels();

};



#endif // MAISON_H
