#ifndef BATIMENT_H
#define BATIMENT_H
#include <iostream>
#include <string>
using namespace std;


class Batiment{

protected:
    int id=0;
    string nom;
    string type;
    int consommationEau;
    double consommationElectricite;
    int effetSatisfaction;

public:
    Batiment(string ,string ,int , double , int );

    void afficherDetails();

    string virtual chaine()=0;

    void calculerImpactRessources(int&, double& );

    //get id de batiment
    int getId()const;

    string getnom();
    string gettype();

    //get effetSatisfaction de batiment
    int getEffetSatisfaction()const;
    int getconsommationEau()const;
    int getconsommationElectricite()const;


    void setnom(string);
    void setEffetSatisfaction(int );
    void setconsommationEau(int );
    void setconsommationElectricite(double );

    virtual ~Batiment() {}
};


#endif // BATIMENT_H
