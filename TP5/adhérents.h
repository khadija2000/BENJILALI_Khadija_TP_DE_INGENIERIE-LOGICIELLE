#ifndef adh�rents_h
#define adh�rents_h

#include "string.h"

class Emprunte;
class bobliotheque;

class adh�rents {

 public:

    virtual void emprunt_Livre();

    virtual void restituer_Livre();

 public:
    string prenom;
    string nom;

 public:

    /**
     * @element-type Emprunte
     */
    Emprunte *myEmprunte;

    bobliotheque *mybobliotheque;
};

#endif // adh�rents_h
