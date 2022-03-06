#include "Ressource.h"


Ressource::Ressource() {
} 



std::string Ressource::getNom() const
{
	return m_nom;

}

void Ressource::regeneration()
{
}

int Ressource::getPtRessource()
{
	return m_ptRessource;
}

void Ressource::setMaxPtRessource(int valeurMax)
{
	m_maxPtRessource = valeurMax; 
}
