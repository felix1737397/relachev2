#include "Equipement.h"
#include <string>
#include <list>
#include <random>



Equipement::Equipement(std::string nom)
{
    m_nom = nom; 
    m_qualite = setQualite(); 
    m_prix = setPrix(); 
    /*m_classPermise = std::list<string>; */
    m_tauxDrop = 20; 
}

bool Equipement::Destruction()
{
    return false;
}

std::string Equipement::setQualite()
{
    std::random_device rd;
    std::mt19937 rn(rd());
    std::uniform_int_distribution<> rng(1, 4);

    int qualite = rng(rn);

    
    if (qualite == 1) {
        return "Commun";
    }
    if (qualite == 2) {
        return "Rare";
    }
    if (qualite == 3) {
        return "Epique";
    }
    if (qualite == 4) {
        return "Legendaire";
    }
   
}

float Equipement::setPrix()
{
    if (m_qualite == "Commun") {
        return 100.0f;
    }
    if (m_qualite == "Rare") {
        return 300.0f;
    }
    if (m_qualite == "Epique") {
        return 500.0f;
    }
    if (m_qualite == "Legendaire") {
        return 1000.0f;
    }
}
