#pragma once
#include <string>
class Ressource
{
public:

	Ressource();
	std::string getNom() const;
	virtual void regeneration() = 0; 
	int getPtRessource(); 
	void setMaxPtRessource(int); 

protected:

	std::string m_nom; 
	int m_ptRessource; 
	int m_maxPtRessource; 
};

