#ifndef MAISON_H
#define MAISON_H


#include "Batiment.h"

class Maison: public Batiment
{
    int capaciteHabitants;
    int habitantsActuels ;


public:
    Maison(string,string,double,double,int,int,int);
    void ajouterHabitants(int nb);
    void retirerHabitants( int nb);

    void afficherDetails();

    void getNom();
    int gethabitantsActuels();
    int getcapaciteHabitants();

    void setHabitantsActuels(int);
    void setCapaciteHabitants(int);

    virtual string chaine();
};



#endif // MAISON_H
