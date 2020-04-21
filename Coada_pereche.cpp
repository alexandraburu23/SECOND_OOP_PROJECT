#include "Coada_pereche.h"

Coada_pereche::Coada_pereche(): Multime_pereche()
{
    std::cout<<"Constructor coada\n";
}
Coada_pereche::Coada_pereche(int n1, std::vector<Pereche*> p1) : Multime_pereche(n1,p1)
{
    std::cout<<"Constructor parametrizat coada\n";
}

Coada_pereche::~Coada_pereche()
{
    std::cout<<"Destructor coada\n";
}

Coada_pereche::Coada_pereche(const Coada_pereche& other): Multime_pereche(other)
{
    std::cout<<"Constructor de copiere coada\n";
}

void Coada_pereche::operator=(const Coada_pereche& obj)
{
       Multime_pereche::operator=(obj);
}
std::istream& operator>> (std::istream& fin, Coada_pereche& obj)
{
fin>>(Multime_pereche&)obj;
return fin;
}
std::ostream& operator<< (std::ostream& fout, const Coada_pereche& obj)
{
    fout<<(Multime_pereche&)obj;
    return fout;
}
void Coada_pereche::push(Pereche t)
{

    Pereche *temp = new Pereche(t);
    this->n+=1;
    (this->p).push_back(temp);
    //std::cout<<*this;

}
Pereche Coada_pereche::pop()
{
    if(this->n>0)
    {
    Pereche *temp =(this->p)[0];
    (this->p).erase((this->p).begin());
    this->n-=1;
    return *temp;
    }
    else
    {
        throw(Empty());
    }
}
