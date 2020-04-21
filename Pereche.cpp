#include "Pereche.h"

Pereche::Pereche()
{
    x=y=0;
    std::cout<<"Constructor pereche \n";
}
Pereche::Pereche(int x1,int y1)
{
    x=x1;
    y=y1;
    std::cout<<"Constructor parametrizat pereche \n";
}

Pereche::~Pereche()
{
    x=y=0;
    std::cout<<"Destructor pereche \n";
}

Pereche::Pereche(const Pereche& other)
{
    this->x=other.x;
    this->y=other.y;
    std::cout<<"Constructor de copiere pereche \n";

}

void Pereche::operator=(const Pereche& other)
{
    this->x=other.x;
    this->y=other.y;
}
std::istream& operator>> (std::istream& fin, Pereche& obj)
{
    fin>>obj.x>>obj.y;
    return fin;
}
std::ostream& operator<< (std::ostream& fout, const Pereche& obj)
{
    fout<<"("<<obj.x<<","<<obj.y<<")";
    return fout;
}
