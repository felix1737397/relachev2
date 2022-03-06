#include "Acteur.h"

Acteur::Acteur(std::string nom) : m_nom{ nom }
{
	m_niveau = 1;
	m_ptExp = 0;
	m_ptVie = 50;
	m_ptVieMax = 200;
	m_coefAttaque = 1;

};

std::string Acteur::getNom() const 
{
	return m_nom;
}

int Acteur::getNiveau() const
{
	return m_niveau;
}

void Acteur::setNiveau()
{
	m_niveau++;
}

int Acteur::getExperience() const
{
	return m_ptExp;
}

void Acteur::setExperience(int ptExp)
{
	m_ptExp += ptExp;
}

int Acteur::getVie() const
{
	return m_ptVie;
}

void Acteur::setVie(int ptVie)
{
	if (m_ptVie + ptVie < m_ptVieMax) {
		m_ptVie += ptVie;
	}
	else {
		m_ptVie = m_ptVieMax;
	}
}

int Acteur::getCoefAttaque() const
{
	return m_coefAttaque;
}

void Acteur::setCoefAttaque(int coefAtt)
{
	m_coefAttaque = coefAtt;
}
