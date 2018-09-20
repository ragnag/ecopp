#pragma once

class Refrigerateur
{
public:
    Refrigerateur();
    Refrigerateur(int duree , double volume, double consommation, double puissance);
    int get_duree();
    void set_duree(int nouvelle_duree);
    double get_volume();
    void set_volume(double nouveau_volume);
    double get_puissance();
    void set_puissance(double nouvelle_puissance);
    double get_consommation();
    void set_consommation(double nouvelle_consommation);
    void afficher_Refrigerateur();


private:
    int duree;
    double volume;
    double consommation;
    double puissance;

};


#include "refrigerateur.hpp"
