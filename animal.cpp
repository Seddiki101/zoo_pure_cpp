#include "animal.h"

 animal::animal(int m,string s)
 {mat=m;espece=s;}

lion::lion(int m,string s,int q):animal(m,"lion")
{
qte=q;
}

bool animal::Ajoutdate(string s)
{
    //recherche
    for(int i=0; i<dates.size(); i++)
    {
        if(dates[i]==s) return false ;//existe deja
    }
    dates.push_back(s);
    return true;
}

void animal::affichanimal()
{
    cout <<"matricule " << mat << endl;
    cout <<"espece " << espece << endl;
    cout <<"vacc: " <<  endl;
    for(int i=0; i<dates.size(); i++)
    {
        cout << dates[i] << endl;
    }

}
