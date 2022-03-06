#pragma once
#include "Joueur.h"
#include "Mana.h"
class Magicien :
    public Joueur
{
public:
    Magicien(std::string);
    void actionUne();
    void actionDeux();
    void actionTrois();
    void recevoirDegats();
    void evoluer();
    void attaquer(int, Acteur&);

private:
    Mana m_ressource;

};

