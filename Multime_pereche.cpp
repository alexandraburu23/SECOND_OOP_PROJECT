#include "Multime_pereche.h"

Multime_pereche::Multime_pereche()
{
    n=0;
    // p=new std::vector<Pereche>;
    std::cout<<"Constructor multime \n";
}

Multime_pereche::Multime_pereche(int n1, std::vector<Pereche*> p1)
{
    n=n1;
    // p=new std::vector<Pereche>;
    for(int i=0; i<p1.size(); ++i)
        p.push_back(p1[i]);

    std::cout<<"Constructor parametrizat multime \n";
}
Multime_pereche::~Multime_pereche()
{

    for(int i=p.size()-1; i>=0; --i)
        delete p[i];
    n=0;
    //delete p;
    std::cout<<"Destructor multime \n";
}

Multime_pereche::Multime_pereche(const Multime_pereche& other)
{
    this->n=other.n;
    for(int i=0; i<this->n; ++i)
    {
        Pereche* temp=new Pereche(*(other.p)[i]);
        (this->p).push_back(temp);
    }
    std::cout<<"Constructor de copiere multime\n";
}

void Multime_pereche::operator=(const Multime_pereche& other)
{
    this->n=other.n;
    for(int i=0; i<this->n; ++i)
    {
        Pereche* temp=new Pereche(*(other.p)[i]);
        (this->p).push_back(temp);
    }

}
std::istream& operator>> (std::istream& fin, Multime_pereche& obj)
{
    fin>>obj.n;
    for(int i=0; i<obj.n; ++i)
    {
        Pereche*temp = new Pereche;
        fin>>*temp;
        (obj.p).push_back(temp);
    }
    return fin;

}
std::ostream& operator<< (std::ostream& fout, const Multime_pereche& obj)
{
    for(int i=0; i<obj.n; ++i)
        fout<<*(obj.p)[i]<<" ";
    fout<<'\n';
    return fout;
}
