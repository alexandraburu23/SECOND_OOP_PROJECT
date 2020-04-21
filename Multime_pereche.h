#ifndef MULTIME_PERECHE_H
#define MULTIME_PERECHE_H
#include "Pereche.h"
#include <vector>
class Multime_pereche
{

    friend std::istream& operator>> (std::istream&, Multime_pereche&);
    friend std::ostream& operator<< (std::ostream&, const Multime_pereche&);
protected:
    int n;
    std::vector<Pereche*> p;
    public:
        Multime_pereche();
        Multime_pereche(int,std::vector<Pereche*>);
        virtual ~Multime_pereche();
        Multime_pereche(const Multime_pereche& other);
        void operator=(const Multime_pereche& other);
        virtual void push(Pereche)=0;
        virtual Pereche pop()=0;
};

#endif // MULTIME_PERECHE_H
