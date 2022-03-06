#pragma once
#include <iostream>
class Acteur
{
public:
	Acteur(std::string);
	virtual void recevoirDegats() = 0;
	virtual void attaquer() = 0;
	std::string getNom() const;
	int getNiveau() const;
	void setNiveau();
	int getExperience() const;
	void setExperience(int);
	int getVie() const;
	void setVie(int);
	// Inventaire getInventaire();
	void setInventaire(/*Equipement*/);
	int getCoefAttaque() const;
	void setCoefAttaque(int);

protected:
	std::string m_nom;
	int m_niveau;
	int m_ptExp;
	int m_ptVieMax;
	int m_ptVie;
	int m_coefAttaque;
	// Inventaire m_inventaire;

};

