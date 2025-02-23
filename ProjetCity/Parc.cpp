#include "Parc.h"


// définition du constructeur
Parc::Parc(string n,string t,double CE, double CEL, int e, double s , double eff):Batiment(n,t,CE,CEL,e)
{
    surface = s;
    effetBienEtre = eff;
}


double Parc::ameliorerBienEtre() const {
    return effetBienEtre; // Retourne l'effet de bien-être du parc
}


string Parc::chaine(){
    string s ;



    s += "le nom est " + Batiment::getnom() +"\n";
    s += " le type est "  + Batiment::gettype() +"\n";
    s += " la consommation de l'eau est "  + to_string(Batiment::getconsommationEau()) +" unité par cycle; \n";
    s += " la consommation de l'électricité est "  + to_string(Batiment::getconsommationElectricite()) +" unité par cycle. \n";
    s += " l'effet de satisfaction des habitants est "  + to_string(Batiment::getEffetSatisfaction());

    s += " surface :"  + to_string(surface) +"\n";
    s += " effetBienEtre:"  + to_string(effetBienEtre) +"\n";


    return s;

}
