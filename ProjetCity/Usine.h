#ifndef USINE_H
#define USINE_H

#include "Batiment.h"

class Usine: public Batiment
{
public:
    double productionRessources;
    double pollution;

    Usine(string,string,double,double,int,double,double);


    double produireRessources() const;
    double calculerPollution() const;


    virtual string chaine();


};



#endif // USINE_H
