#ifndef bobliotheque_h
#define bobliotheque_h

#include <vector>


class adh�rents;
class document;

class bobliotheque {

 public:

    virtual void inscrit_adherent();

    virtual void desincrit_adherent();

    virtual void ajouter_document();

 public:

    /**
     * @element-type adh�rents
     */
    std::vector< adh�rents* > myadh�rents;

    document *mydocument;
};

#endif // bobliotheque_h
