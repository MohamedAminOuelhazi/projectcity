#ifndef USINE_H
#define USINE_H

#include "Batiment.h"

class Usine: public Batiment
{
public:
    double productionRessources;
    double pollution;

    Usine(int,string,string,double,double,int,double,double);


    double produireRessources() const;
    double calculerPollution() const;
};



#endif // USINE_H
