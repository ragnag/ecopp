#pragma once
#include <iostream>
#include "ampoule.h"
#include "four.h"
#include "radiateur.h"
#include "refrigerateur.h"
#include "television.h"
#include <vector>

using namespace std;

class Maison
{
public:
    Maison();
    Maison(int nb_max_ampoule,int nb_max_four,int nb_max_radiateur, int nb_max_refrigerateur,int nb_max_television);
    void ajouter_ampoule();
    void ajouter_ampoule(Ampoule ampoule);
    void supprimer_ampoule(int id);
    void ajouter_four();
    void ajouter_four(Four four);
    void supprimer_four(int nf);
    void ajouter_radiateur();
    void ajouter_radiateur(Radiateur radiateur);
    void supprimer_radiateur(int nr);
    void ajouter_refrigerateur();
    void ajouter_refrigerateur(Refrigerateur refrigerateur);
    void supprimer_refrigerateur(int ng);
    void ajouter_television();
    void ajouter_television(Television television);
    void supprimer_television(int nt);





private:
    vector<Ampoule> list_ampoule;
    vector<Four> list_four;
    vector<Radiateur> list_radiateur;
    vector<Refrigerateur> list_refrigerateur;
    vector<Television> list_television;
    int nb_max_four;
    int nb_max_ampoule;
    int nb_max_radiateur;
    int nb_max_refrigerateur;
    int nb_max_television;



};

#include "maison.hpp"
