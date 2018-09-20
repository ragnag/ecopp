#pragma once
#include <iostream>

using namespace std;


class Radiateur
{
public:
    Radiateur();
    Radiateur(double volume, double duree, double consommation, double puissance);
    double get_volume();
    void set_volume(double nouveau_volume);
    double get_duree();
    void set_duree(double nouvelle_duree);
    double get_consommation();
    void set_consommation(double nouvelle_consommation);
    double get_puissance();
    void set_puissance(double nouvelle_puissance);
    void afficher_Radiateur();

private:
    double volume;
    double duree;
    double consommation;
    double puissance;


};

# include "radiateur.hpp"
