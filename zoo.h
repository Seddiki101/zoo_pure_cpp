#ifndef ZOO_H_INCLUDED
#define ZOO_H_INCLUDED

#include "vet.h"
#include "animal.h"

class zoo
{
string adress;
vector<veterinaire> tabv;
vector<animal> taba;

public:
zoo(string a){adress=a;};
int nbAnimalCharge();

int rechercherVet(int);
bool ajouterVet (veterinaire);

int rechercherAnimal(int);
bool ajoutanimal (animal );
bool ajoutanimal (lion );
bool AjouDateVacc (int,string);
void affichzoo();
bool affectation(int,int);

};

#endif // ZOO_H_INCLUDED
