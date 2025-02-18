#ifndef BATIMENT_H
#define BATIMENT_H
#include <iostream>
#include <string>
using namespace std;


class Batiment{

protected:
    int id;
    string nom;
    string type;
    int consommationEau;
    double consommationElectricite;
    int effetSatisfaction;

public:
    Batiment(int,string ,string ,int , double , int );

    void afficherDetails();

    void calculerImpactRessources(int&, double& );

    //get id de batiment
    int getId()const;

    string getnom();
    string gettype();

    //get effetSatisfaction de batiment
    int getEffetSatisfaction()const;
    int getconsommationEau()const;
    int getconsommationElectricite()const;

    virtual ~Batiment() {}
};


#endif // BATIMENT_H
