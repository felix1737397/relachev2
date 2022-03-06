#pragma once
#include "Acteur.h"
class Ennemi :
    public Acteur
{
public:
    Ennemi(std::string);
    int getCoefDefense() const;
    int setCoefDefense();
    int getPtAttaque() const;
    int setPtAttaque();

private:
    int coefDefense;
    int m_ptsDommage;
};

