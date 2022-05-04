#include "zoo.h"

int zoo::rechercherVet(int idd)
{
for(int i=0;i<tabv.size();i++)
{
 if(tabv[i].getID()==idd) return i ;
}
return -1;
}


bool zoo::ajouterVet (veterinaire p)
{
if (rechercherVet(p.getID())==-1)
{
    tabv.push_back(p);
    return true;
}
return false;
}



int zoo::rechercherAnimal(int idd)
{
for(int i=0;i<taba.size();i++)
{
 if(taba[i].getmat()==idd) return i ;
}
return -1;
}


bool zoo::ajoutanimal (animal a)
{
if (rechercherVet(a.getmat())==-1)
{
    taba.push_back(a);
    return true;
}
return false;
}

bool zoo::ajoutanimal (lion a)
{
if (rechercherVet(a.getmat())==-1)
{
    taba.push_back(a);
    return true;
}
return false;
}


bool zoo::AjouDateVacc (int idd,string d)
{
int res=rechercherVet(idd);
if (res!= -1)
{
taba[res].Ajoutdate(d);
    return true;
}
return false;
}


void zoo::affichzoo()
{
    cout <<"adress " << adress << endl;

 cout <<"vets "  << endl;
for(int i=0; i<tabv.size(); i++)
    {
        tabv[i].affichervet();
    }

 cout <<"animals " << endl;
for(int i=0; i<taba.size(); i++)
    {
       taba[i].affichanimal();
    }

}


bool zoo::affectation(int matt,int idd)   //affecter mlatricule au id
{

int i=rechercherVet(idd);
// vet exists
if(i!=-1)
{
    //animal mat exists
    if(rechercherAnimal(matt)!= -1)
    {
        //if mat is not in vet directory
       if(tabv[i].searchAnimal(idd)!=-1)
       {
            tabv[i].ajoutanimat(idd);
            return true;
       }
    }
}
return false;
}



