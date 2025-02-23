#include "Usine.h"

// définition du constructeur
Usine::Usine(string n, string t, double CE, double CEL, int e, double pr , double po):Batiment(n,t,CE,CEL,e)
{
    productionRessources = pr;
    pollution = po;
}

// Méthode pour produire des ressources
double Usine::produireRessources() const {
    return productionRessources; // Retourne la quantité de ressources produites
}

// Méthode pour calculer la pollution générée
double Usine::calculerPollution() const {
    return pollution; // Retourne la pollution générée par cycle
}


string Usine::chaine(){
    string s ;



    s += "le nom est " + Batiment::getnom() +"\n";
    s += " le type est "  + Batiment::gettype() +"\n";
    s += " la consommation de l'eau est "  + to_string(Batiment::getconsommationEau()) +" unité par cycle \n";
    s += " la consommation de l'électricité est "  + to_string(Batiment::getconsommationElectricite()) +" unité par cycle \n";
    s += " l'effet de satisfaction des habitants est "  + to_string(Batiment::getEffetSatisfaction())+"\n";

    s += " productionRessources :"  + to_string(productionRessources) +"\n";
    s += " pollution:"  + to_string(pollution) +"\n";


    return s;

}
