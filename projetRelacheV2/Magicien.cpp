#include "Magicien.h"
Magicien::Magicien(std::string nom) : Joueur{ nom }
{
}

void Magicien::actionUne()
{
}

void Magicien::actionDeux()
{
}

void Magicien::actionTrois()
{
}

void Magicien::recevoirDegats()
{
}

void Magicien::evoluer()
{
	m_evoluer = true;
}

void Magicien::attaquer(int, Acteur&)
{
}
