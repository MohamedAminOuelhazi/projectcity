#include "Parc.h"


// définition du constructeur
Parc::Parc(int id,string n,string t,double CE, double CEL, int e, double s , double eff):Batiment(id,n,t,CE,CEL,e)
{
    surface = s;
    effetBienEtre = eff;
}


double Parc::ameliorerBienEtre() const {
    return effetBienEtre; // Retourne l'effet de bien-être du parc
}
