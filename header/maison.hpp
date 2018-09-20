#include "maison.h"

Maison::Maison()
{

}

Maison::Maison(int nb_max_ampoule, int nb_max_four, int nb_max_radiateur, int nb_max_refrigerateur, int nb_max_television)
{
    this->nb_max_ampoule = nb_max_ampoule;
    this->nb_max_four = nb_max_four;
    this->nb_max_radiateur = nb_max_radiateur;
    this->nb_max_refrigerateur = nb_max_refrigerateur;
    this->nb_max_television = nb_max_television;
}

void Maison::ajouter_ampoule()
{
    Ampoule ampoule();
    int N = this->list_ampoule.size();
    if(N < nb_max_ampoule)
    {
    this->list_ampoule.push_back(ampoule);
    }
    else
    {
        cerr << " Vous avez atteint le nombre maximal d'ampoules" << endl;
    }
}

void Maison::ajouter_ampoule(Ampoule ampoule)
{
    int N = this->list_ampoule.size();
    if(N < nb_max_ampoule)
    {
    this->list_ampoule.push_back(ampoule);
    }
    else
    {
        cerr << " Vous avez atteint le nombre maximal d'ampoules" << endl;
    }
}

void Maison::supprimer_ampoule(int id)
{
    int N = this->list_ampoule.size();
    if(id >= N)
    {
        cerr << "Erreur " << endl;
    }
    else {
        this->list_ampoule.erase(this->list_ampoule.begin() + id - 1);
    }
}

void Maison::ajouter_four()
{
    Four four();
    int Nf = this->list_four.size();
    if (Nf <  this->nb_max_four)
    {
       this->list_four.push_back(four);
    }
    else
    {
       cerr << "Vous avez atteint le nombre maximal de four" << endl;
    }



}

void Maison::ajouter_four(Four four)
{
    int Nf = this->list_four.size();
    if (Nf < this->nb_max_four)
    {
        this->list_four.push_back(four);
    }
    else
    {
        cerr << " Diminuer le nombre de four" << endl;
    }

}

void Maison::supprimer_four(int nf)
{
    int Nf = this->list_four.size();
    if(nf >= Nf)
    {
        cerr << "Erreur" << endl;
    }
    else
    {
        this->list_four.erase(this->list_four.begin() + nf - 1);
    }

}

void Maison:: ajouter_radiateur()
{
    Radiateur radiateur();
    int Nr = this->list_radiateur.size();
    if(Nr < nb_max_radiateur)
    {
        this->list_radiateur.push_back(radiateur);
    }
    else
    {
        cerr << " Vous avez atteint le nombre maximal de radiateurs" << endl;
    }

}

void Maison:: ajouter_radiateur(Radiateur radiateur)
{
    int Nr =  this->list_radiateur.size();
    if(Nr < nb_max_radiateur)
    {
        this->list_radiateur.push_back(radiateur);
    }
    else
    {
        cerr << " Vous avez atteint le nombre maximal de radiateurs" << endl;
    }

}

void Maison::supprimer_radiateur(int nr)
{
    int Nr = this->list_radiateur.size();
    if(nr >= Nr)
    {
        cerr << " Vous avez depassé le nombre maximal de radiateurs" << endl;
    }
    else
    {
       this->list_radiateur.erase(this->list_radiateur.begin() + nr - 1);
    }
}

Void Maison::ajouter_refrigerateur()
{
    Refrigerateur refrigerateur();
    int Ng = this->list_refrigerateur.size();
    if(Ng < nb_max_refrigerateur)
    {
        this->list_refrigerateur.push_back(refrigerateur);
    }
    else
    {
        cerr << " Vous avez atteint le nombre maximal de refrigerateurs" << endl;
    }

}

void Maison::ajouter_refrigerateur(Refrigerateur refrigerateur)
{
    int Ng = this->list_refrigerateur.size();
    if(Ng < nb_max_refrigerateur)
    {
        this->list_refrigerateur.push_back(refrigerateur);
    }
    else
    {
        cerr << " Vous avez atteint le nombre maximal de refrigérateurs" << endl;
    }
}

void Maison::supprimer_refrigerateur(int ng)
{
   int Ng = this->list_refrigerateur.size();
   if(ng >= Ng)
   {
       cerr << " Impossible" << endl;
   }
   else
   {
       this->list_refrigerateur.erase(this->list_refrigerateur.begin() + ng - 1);
   }
}

void Maison::ajouter_television()
{
    Television television();
    int Nt = this->list_television.size();
    if(Nt < nb_max_television)
    {
        this->list_television.push_back(television);
    }
    else
    {
        cerr << " Vous avez atteint le nombre maximal de televisions" << endl;
    }

}

void Maison::ajouter_television(Television television)
{
    int Nt = this->list_television.size();
    if(Nt < nb_max_television)
    {
        this->list_television.push_back(television);
    }
    else
    {
        cerr << " Vous avez atteint le nombre maximal de televisisons" << endl;
    }
}

void Maison::supprimer_television(int nt)
{
    int Nt = this->list_television.size();
    if (nt >= Nt)
    {
        cerr << " Impossible " << endl;
    }
    else
    {
       this->list_television.erase(this->list_television.begin() + nt - 1);
    }
}




