#include "vet.h"

veterinaire veterinaire :: operator+=(const veterinaire &m)
{
    for(int i=0;i<m.tabm.size();i++) {tabm.push_back(m.tabm[i]);}
  return *this;
}


void veterinaire::affichervet()
{
cout <<"vet id " << id << endl;
    cout <<"nom " << nom << endl;
    cout <<"prenom " << prenom << endl;
    cout <<"matricules: " <<  endl;

    cout <<"test size" << tabm.size() <<  endl;

    for(int i=0; i<tabm.size(); i++)
    {
        cout << tabm[i] << endl;
    }
cout << "\n" ;
}

int veterinaire::searchAnimal(int m)
{
for(int i=0;i<tabm.size();i++)
{
 if(tabm[i]==m) return i ;
}
return -1;
}




bool veterinaire::ajoutanimat(int idd)
{
if (searchAnimal(idd)==-1)
{
    tabm.push_back(idd);
    return true;
}
return false;
}
