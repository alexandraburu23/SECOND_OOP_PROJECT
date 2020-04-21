#include "Pereche.h"
#include "Multime_pereche.h"
#include "Stiva_pereche.h"
#include "Coada_pereche.h"
#include <exception>
#include<vector>
#include<fstream>
std::ifstream fin("date.in");
std::ofstream fout("date.out");
void citire_afisare_ncozi(int n,Coada_pereche v[])
{

    for(int i=0; i<n; i++)
    {
        fin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        fout<<"Coada "<<i<<" este:"<<v[i];
    }

}
void citire_afisare_nstive(int n, Stiva_pereche v[])
{

    for(int i=0; i<n; i++)
    {
        fin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
       fout<<"Stiva "<<i<<" este:"<<v[i];
    }

}

int main()
{
    /*Pereche p;
    std::cout << "Hello world!" << std::endl;
    std::cin>>p;
    std::cout<<p;
    */
    // Coada_pereche p1;
    // std::cin>>p1;
    //  std::cout<<p1;
    // std::cout<<std::endl;
    //p2=p1;

    Stiva_pereche s[3];
    Coada_pereche p[3];
    citire_afisare_ncozi(3,p);
    fout<<'\n';
    citire_afisare_nstive(3,s);
    Coada_pereche p1;
    fin>>p1;
    Coada_pereche p2(p1);
    p2=p1;
    fout<<'\n';
    fout<<"Coada 1 :"<<p1<<"Coada 2 :"<<p2;

    Pereche temp(23,57);
    p1.push(temp);
    fout<<"Coada in care am facut push este: "<<p1;
    std::vector<Pereche*> t[3];
     try
     {
         for(int i=0; i<3; ++i)
         {
             Pereche* temp2=new Pereche(p1.pop());
             fout<<"Pop"<<i+1<<" "<<*temp2<<'\n';
             t->push_back(temp2);
         }
     }
     catch(std::exception& e)
     {
         fout << e.what() << "\n";
         std::cout << e.what() << "\n";
     }

   // Stiva_pereche s;

    s[0].push(temp);
    s[1].push(temp);

    fout<<std::endl;
    fout<<std::endl;

    fout<<"Stiva in care am facut push este: "<<s[0];
    fout<<"Stiva in care am facut push este: "<<s[1];
    try{
    fout<<"Din stiva "<<s[0]<<" scoatem "<< s[0].pop()<<'\n';
    fout<<"Din stiva "<<s[0]<<" scoatem "<<s[0].pop()<<'\n';
    fout<<"Din stiva "<<s[1]<<" scoatem "<<s[1].pop()<<'\n';
    fout<<"Din stiva "<<s[2]<<" scoatem "<<s[2].pop()<<'\n';
    fout<<"Din stiva "<<s[2]<<" scoatem "<<s[2].pop()<<'\n';
    }
    catch(std::exception& e)
     {
         fout << e.what() << "\n";
         std::cout << e.what() << "\n";
     }
    return 0;
}
