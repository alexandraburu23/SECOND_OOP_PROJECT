#ifndef STIVA_PERECHE_H
#define STIVA_PERECHE_H
#pragma once
#include "Multime_pereche.h"
#include "Coada_pereche.h"
#include "Empty.h"
class Stiva_pereche : public Multime_pereche
{

    friend std::istream& operator>> (std::istream&, Stiva_pereche&);
    friend std::ostream& operator<< (std::ostream&, const Stiva_pereche&);
    public:
        Stiva_pereche();
        Stiva_pereche(int, std::vector<Pereche*>);
        virtual ~Stiva_pereche();
        Stiva_pereche(const Stiva_pereche& other);
        void operator=(const Stiva_pereche& other);
        void push(Pereche);
        Pereche pop();


};

#endif // STIVA_PERECHE_H
