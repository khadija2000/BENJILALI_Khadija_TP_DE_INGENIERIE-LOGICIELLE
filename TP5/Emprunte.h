#ifndef Emprunte_h
#define Emprunte_h

#include <vector>

#include "date.h"

class adh�rents;
class Livres;

class Emprunte {

 public:

    virtual void pronologie_dateretour();

 public:
    date date_emprunt;
    date date_retour;

 public:

    /**
     * @element-type adh�rents
     */
    std::vector< adh�rents* > myadh�rents;

    Livres *myLivres;
};

#endif // Emprunte_h
