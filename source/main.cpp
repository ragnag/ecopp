#include <iostream>
#include "refrigerateur.h"
#include "ampoule.h"
#include "radiateur.h"
#include "television.h"
#include "four.h"
using namespace std;

int main()
{
    Four mon_four(10,1000,50,60,14.5);
    mon_four.afficher_Four ();
    mon_four.set_niveaux(10);
    mon_four.afficher_Four();
    cout << "Les niveaux sont au nombre de" << mon_four.get_niveaux() << endl;
    return 0;
}

