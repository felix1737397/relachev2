#pragma once
#include "Joueur.h"
#include "Endurance.h"
class Guerrier :
    public Joueur
{
    public:
        Guerrier(std::string);
        void actionUne();
        void actionDeux();
        void actionTrois();
        void recevoirDegats();
        void evoluer();
        void attaquer(int,Acteur&);

    private:
      Endurance m_ressource;

};

