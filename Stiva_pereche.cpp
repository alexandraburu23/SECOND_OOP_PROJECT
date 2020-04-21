#include "Stiva_pereche.h"

Stiva_pereche::Stiva_pereche() : Multime_pereche()
{

    std::cout<<"Constructor stiva\n";
}
Stiva_pereche::Stiva_pereche(int n1, std::vector<Pereche*> p1) : Multime_pereche(n1,p1)
{
    std::cout<<"Constructor parametrizat stiva\n";
}
Stiva_pereche::~Stiva_pereche()
{
   std::cout<<"Destructor stiva\n";
}

Stiva_pereche::Stiva_pereche(const Stiva_pereche& other): Multime_pereche(other)
{
    std::cout<<"Constructor de copiere stiva\n";
}

void Stiva_pereche::operator=(const Stiva_pereche& obj)
{

   Multime_pereche::operator=(obj);
}
std::istream& operator>> (std::istream& fin, Stiva_pereche& obj)
{
fin>>(Multime_pereche&)obj;
return fin;
}
std::ostream& operator<< (std::ostream& fout, const Stiva_pereche& obj)
{
    fout<<(Multime_pereche&)obj;
    return fout;
}
/*void Stiva_pereche::push(Pereche t)
{
    this->n+=1;
    Pereche *temp = new Pereche(t);
    (this->p).push_back(temp);

}
Pereche Stiva_pereche::pop()
{
    if(this->n>0)
    {Pereche* temp=(this->p).back();
    (this->p).pop_back();
    this->n-=1;
    return *temp;}
     else
    {
        throw(Empty());
    }
}*/
void Stiva_pereche::push(Pereche t)
{
    Coada_pereche q1(this->n,this->p);
    q1.push(t);
    this->n+=1;
    for(int i=p.size()-1; i>=0; --i)
        this->p.pop_back();
    //std::cout<<q1;
    for(int i=0;i<this->n;++i)
    {Pereche* temp=new Pereche(q1.pop());
    this->p.push_back(temp);
    }
    //std::cout<<*this;

}
Pereche Stiva_pereche::pop()
{
     Coada_pereche q1(this->n,this->p),q2;
     if(this->n>0)
     {
       int nr=this->n;
       while (nr != 1)
        {
            q2.push(q1.pop());
            nr--;
        }
       Pereche temp=q1.pop();

       this->n-=1;
       for(int i=p.size()-1; i>=0; --i)
            this->p.pop_back();

        for(int i=0;i<this->n;++i)
        {Pereche* temp=new Pereche(q2.pop());
        this->p.push_back(temp);
        }
        return temp;

     }
     else
        throw(Empty());

}
