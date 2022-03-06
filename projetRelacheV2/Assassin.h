#pragma once
#include "Joueur.h"
class Assassin :
    public Joueur
{
public:
    Assassin(std::string);
    void actionUne();
    void actionDeux();
    void actionTrois();
    void recevoirDegats();
    void evoluer();
    void attaquer(int, Acteur&);

private:
    //   Adrenaline m_ressource;

};
