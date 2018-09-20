#pragma once
#include <iostream>

class Television
{
public:
    Television();
    Television(double volume, double pouce, double consommation, double puissance);
    double get_volume();
    void set_volume(double nouveau_volume);
    double get_pouce();
    void set_pouce(double nouveau_pouce);
    double get_consommation();
    void set_consommation(double nouvelle_consommation);
    double get_puissance();
    void set_puissance(double nouvelle_puissance);
    void afficher_Television();

private:
    double volume;
    double pouce;
    double consommation;
    double puissance;
};

#include "television.hpp"
