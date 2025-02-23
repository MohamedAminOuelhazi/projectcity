#ifndef VILLE_H
#define VILLE_H

#include "Batiment.h"
#include <vector>


class Ville
{
public:
    string nom;
    double budget;
    int population;
    int satisfaction;
    vector<Batiment*> batiments;
    int ressourcesEau;
    double ressourcesElectricité;

public:
    Ville(string,double, int);

    void ajouterBatiment(Batiment*);

    void supprimerBatiment(int);
    double calculerConsommationTotale();
    int calculerSatisfaction();

    void modifierSatisfaction(int );

    void afficherDetails();


    int getEau();
    int getElectricite();
    int getSatisfaction();
    void setElectricite();
    void setSatisfaction();

    vector<Batiment*> getBatiments() const;

};


#endif // VILLE_H
