#include "refrigerateur.h"
#include <iostream>

using namespace std;

Refrigerateur::Refrigerateur()
{

}


Refrigerateur::Refrigerateur(int dur, double vol , double cons, double puiss)
{
    this->consommation = cons;
    this->duree = dur;
    this->puissance = puiss;
    this->volume=vol;
}

void Refrigerateur::afficher_Refrigerateur()
{
    cout << "Mon refrigerateur a une consommation de " <<
            this->consommation << " , une duree de  " << this->duree << " , une puissance de " << this->puissance << " et un volume de " << this->volume << endl;
}

double Refrigerateur::get_consommation()
{
    return this->consommation;
}

int Refrigerateur::get_duree()
{
    return this->duree;
}

double Refrigerateur::get_puissance()
{
    return this->puissance;
}
double Refrigerateur::get_volume()
{
    return this->volume;
}
void Refrigerateur::set_consommation(double nouvelle_consommation)
{
    this->consommation = nouvelle_consommation;
}

void Refrigerateur::set_duree(int nouvelle_duree)
{
    this->duree = nouvelle_duree;
}

void Refrigerateur::set_puissance(double nouvelle_puissance)
{
    this->puissance = nouvelle_puissance;
}

void Refrigerateur::set_volume(double nouveau_volume)
{
    this->volume = nouveau_volume ;
}


