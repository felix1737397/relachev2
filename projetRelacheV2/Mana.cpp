#include "Mana.h"



Mana::Mana() {
	m_nom = "Endurance";
	m_maxPtRessource = 15;
	m_ptRessource = m_maxPtRessource;
}


void Mana::regeneration()
{
	if (m_ptRessource + 3 <= m_maxPtRessource)
		m_ptRessource += 3;
}
