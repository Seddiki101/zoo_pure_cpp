#include <iostream>
#include "zoo.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    lion l(1,"a",10);
    animal a(3,"jag");
    zoo z("boston");
    z.ajoutanimal(l);
    z.ajoutanimal(a);
    veterinaire v(77,"toni","scoletta");
    v.ajoutanimat(3);
    z.ajouterVet(v);
    z.AjouDateVacc(3,"june");
    z.affichzoo();


    return 0;
}
