#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;
#include <vector>


class animal
{
int mat;//matricule
string espece;
vector <string> dates ;// date de vacc

public:
    //animal(int m,string s){mat=m;espece=s;}
     animal(int m,string s);
    int getmat()const{return mat;}
    bool Ajoutdate(string);
    void affichanimal();


};



class lion:public animal
{
int qte; //meat quantity
public:
    lion(int,string,int);
};



#endif // ANIMAL_H_INCLUDED
