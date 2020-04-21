#ifndef PERECHE_H
#define PERECHE_H
#include <iostream>
class Pereche
{
    int x,y;
    friend std::istream& operator>> (std::istream&, Pereche&);
    friend std::ostream& operator<< (std::ostream&, const Pereche&);
    public:
        Pereche();
        Pereche(int,int);
        virtual ~Pereche();
        Pereche(const Pereche& other);
        void operator=(const Pereche& other);

};

#endif // PERECHE_H
