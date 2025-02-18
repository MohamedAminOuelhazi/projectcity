#ifndef PARC_H
#define PARC_H

#include "Batiment.h"

class Parc: public Batiment
{
public:
    double surface;
    double effetBienEtre;

    Parc(int,string,string,double,double,int,double,double);
    double ameliorerBienEtre() const;
};

#endif // PARC_H
