#include "Joueur.h"

Joueur::Joueur(std::string nom) : Acteur{ nom }
{
	m_evoluer = false;
}

std::map<int, int> Joueur::getTableExperience()
{
	return std::map<int, int>();
}

bool Joueur::getEvoluer()
{
	return m_evoluer;
}

void Joueur::afficherInventaire()
{
}

void Joueur::equiperArmure()
{
}

void Joueur::recevoirDegats()
{
}

void Joueur::attaquer()
{

}
