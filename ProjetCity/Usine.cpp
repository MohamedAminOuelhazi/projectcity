#include "Usine.h"

// définition du constructeur
Usine::Usine(int id, string n, string t, double CE, double CEL, int e, double pr , double po):Batiment(id,n,t,CE,CEL,e)
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
