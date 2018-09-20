#pragma once
#include <iostream>


class Four
{
public:
    Four();
    Four(double volume, double consommation, double puissance, int niveaux, double temperature);
    double get_volume();
    void set_volume(double nouveau_volume);
    double get_consommation();
    void set_consommation(double nouvelle_consommation);
    double get_puissance();
    void set_puissance(double nouvelle_puissance);
    int get_niveaux();
    void set_niveaux(int nouveaux_niveaux);
    double get_temperature();
    void set_temperature (double nouvelle_temperature);
    void afficher_Four();

private:
    double volume;
    double consommation;
    double puissance;
    int niveaux;
    double temperature;


};

#include "four.hpp"
