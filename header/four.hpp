#include "four.h"

Four::Four()
{

}
Four::Four(double vol, double cons, double puiss, int level, double temp)
{
    this->volume = vol;
    this->consommation = cons;
    this->puissance = puiss;
    this->niveaux = level;
    this->temperature = temp;
}

void Four::afficher_Four()
{
    cout << "Mon four a une consommation de " <<
            this->consommation << " , un volume de  " << this->volume << " une puissance de " << this->puissance << " plusieurs niveaux " << this->niveaux << " plusieurs temperatures " <<this->temperature<< endl;
}

double Four::get_consommation()
{
    return this->consommation;
}

int Four::get_niveaux()
{
    return this->niveaux;
}

double Four::get_puissance()
{
    return this->puissance;
}

double Four:: get_volume()
{
    return this->volume;
}

double Four:: get_temperature()
{
    return this->temperature;
}
void Four::set_consommation(double nouvelle_consommation)
{
    this->consommation = nouvelle_consommation;
}

void Four::set_niveaux(int nouveaux_niveaux)
{
    this->niveaux = nouveaux_niveaux;
}

void Four::set_puissance(double nouvelle_puissance)
{
    this->puissance = nouvelle_puissance;
}

void Four::set_volume(double nouveau_volume)
{
    this->volume = nouveau_volume;
}

void Four::set_temperature(double nouvelle_temperature)
{
    this->temperature = nouvelle_temperature;
}
