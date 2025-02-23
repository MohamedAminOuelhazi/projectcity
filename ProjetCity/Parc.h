#ifndef PARC_H
#define PARC_H

#include "Batiment.h"

class Parc: public Batiment
{
public:
    double surface;
    double effetBienEtre;

    Parc(string,string,double,double,int,double,double);
    double ameliorerBienEtre() const;


    virtual string chaine();

};

#endif // PARC_H
