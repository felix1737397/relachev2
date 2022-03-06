#include "Guerrier.h"
#include "Ennemi.h"

Guerrier::Guerrier(std::string nom) : Joueur{nom}
{
}

void Guerrier::actionUne()
{
}

void Guerrier::actionDeux()
{
}

void Guerrier::actionTrois()
{
}

void Guerrier::recevoirDegats()
{
}

void Guerrier::evoluer()
{
	m_evoluer = true;
}

void Guerrier::attaquer(int action, Acteur& acteur)
{

}
