#ifndef EVENEMENT_H
#define EVENEMENT_H

#include "Parc.h"
#include "Usine.h"
#include "Ville.h"

class Evenement {
public:
    virtual void declencher(Ville& ville) = 0;
};

#endif // EVENEMENT_H
