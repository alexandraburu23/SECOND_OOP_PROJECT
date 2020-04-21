#ifndef COADA_PERECHE_H
#define COADA_PERECHE_H
#pragma once
#include "Multime_pereche.h"
#include "Empty.h"
class Coada_pereche: Multime_pereche
{
    friend std::istream& operator>> (std::istream&, Coada_pereche&);
    friend std::ostream& operator<< (std::ostream&, const Coada_pereche&);
    public:
        Coada_pereche();
        Coada_pereche(int,std::vector<Pereche*>);
        virtual ~Coada_pereche();
        Coada_pereche(const Coada_pereche& other);
        void operator=(const Coada_pereche& other);
        void push(Pereche t);
        Pereche pop();

};

#endif // COADA_PERECHE_H
