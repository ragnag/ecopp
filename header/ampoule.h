#pragma once

class Ampoule
{
public:
    Ampoule();
    Ampoule(double duree, double consommation, double puissance);
    double get_duree();
    void set_duree(double nouvelle_duree);
    double get_consommation();
    void set_consommation(double nouvelle_consommation);
    double get_puissance();
    void set_puissance(double nouvelle_puissance);
    void afficher_ampoule();

private:
    double duree;
    double consommation;
    double puissance;



};



#include "ampoule.hpp"
