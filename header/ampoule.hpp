#include "ampoule.h"
#include <iostream>

using namespace std;


Ampoule::Ampoule()
{

}

Ampoule::Ampoule(double cons, double dur, double puiss)
{
    this->consommation = cons;
    this->duree = dur;
    this->puissance = puiss;

}

void Ampoule::afficher_ampoule()
{
    cout << "Mon ampoule a une consommation de " <<
            this->consommation << " , une duree de  " << this->duree << " et une puissance de " << this->puissance << endl;
}

double Ampoule::get_consommation()
{
    return this->consommation;
}

double Ampoule::get_duree()
{
    return this->duree;
}

double Ampoule::get_puissance()
{
    return this->puissance;
}


void Ampoule::set_consommation(double nouvelle_consommation)
{
    this->consommation = nouvelle_consommation;
}

void Ampoule::set_duree(double nouvelle_duree)
{
    this->duree = nouvelle_duree;
}

void Ampoule::set_puissance(double nouvelle_puissance)
{
    this->puissance = nouvelle_puissance;
}
