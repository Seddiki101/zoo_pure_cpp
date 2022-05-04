#ifndef VET_H_INCLUDED
#define VET_H_INCLUDED

#include <string.h>
#include <iostream>
using namespace std;
#include <vector>


#include "animal.h"

class veterinaire
{
int id;
string nom;
string prenom;
vector <int> tabm;//tab des matricules des animals


public:
veterinaire(int i,string n,string p) {id=i;nom=n;prenom=p;}
int get_Size(){return tabm.size();}
int getID()const{return id;}
vector <int> getabm() const{return tabm;}
veterinaire operator+=(const veterinaire &m);
void affichervet();
bool searchAnimal(int);
bool ajoutanimat(int);
};

#endif // VET_H_INCLUDED
