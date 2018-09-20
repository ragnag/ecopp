#include "television.h"

Television::Television()
{

}

Television::Television(double vol, double pou, double cons, double puiss)
{
 this->volume = vol;
 this->pouce = pou;
 this->consommation = cons;
 this->puissance = puiss;


}
void Television::afficher_Television()
{
    cout << "Ma TV a une consommation de " <<
            this->consommation << " , un pouce de  " << this->pouce << " , une puissance de " << this->puissance << " et un volume de " << this->volume << endl;
}

double Television::get_consommation()
{
    return this->consommation;
}

double Television::get_pouce()
{
    return this->pouce;
}

double Television::get_puissance()
{
    return this->puissance;
}
double Television::get_volume()
{
    return this->volume;
}
void Television::set_consommation(double nouvelle_consommation)
{
    this->consommation = nouvelle_consommation;
}

void Television::set_pouce(double nouveau_pouce)
{
    this->pouce = nouveau_pouce;
}

void Television::set_puissance(double nouvelle_puissance)
{
    this->puissance = nouvelle_puissance;
}

void Television::set_volume(double nouveau_volume)
{
    this->volume = nouveau_volume ;
}



