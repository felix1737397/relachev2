#pragma once
#include "string"
#include <list>
#include "Joueur.h"


class Equipement
{
public:

	Equipement(std::string);
	bool Destruction(); 

private:
	std::string setQualite();
	float setPrix(); 

protected:

	std::string m_nom;
	std::string m_qualite; 
	float m_prix; 
	/*std::list<Joueur&> m_classPermise; */
	int m_tauxDrop;
};

