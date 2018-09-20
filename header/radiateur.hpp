#include "radiateur.h"

Radiateur::Radiateur()
{

}
Radiateur::Radiateur(double vol, double dur, double cons, double puiss)
{
    this->consommation = cons;
    this->duree = dur;
    this->puissance = puiss;
    this->volume = vol;

}

void Radiateur::afficher_Radiateur()
{
    cout << "Mon Radiateur a une consommation de " <<
            this->consommation << " , une duree de  " << this->duree << " , une puissance de " << this->puissance << " et un volume de " << this->volume << endl;
}

double Radiateur::get_consommation()
{
    return this->consommation;
}

double Radiateur::get_duree()
{
    return this->duree;
}

double Radiateur::get_puissance()
{
    return this->puissance;
}

double Radiateur::get_volume()
{
    return this->volume;
}

void Radiateur::set_consommation(double nouvelle_consommation)
{
    this->consommation = nouvelle_consommation;
}

void Radiateur::set_duree(double nouvelle_duree)
{
    this->duree = nouvelle_duree;
}

void Radiateur::set_puissance(double nouvelle_puissance)
{
    this->puissance = nouvelle_puissance;
}

void Radiateur::set_volume(double nouveau_volume)
{
    this->volume = nouveau_volume;
}
