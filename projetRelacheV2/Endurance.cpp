#include "Endurance.h"



Endurance::Endurance() {
	m_nom = "Endurance"; 
	m_maxPtRessource = 15;
	m_ptRessource = m_maxPtRessource;
}


void Endurance::regeneration()
{
	if (m_ptRessource + 1 <= m_maxPtRessource) 
		m_ptRessource += 1;
}
