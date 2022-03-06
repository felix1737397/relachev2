#include "Adrenaline.h"

Adrenaline::Adrenaline() {
	m_nom = "Endurance";
	m_maxPtRessource = 15;
	m_ptRessource = m_maxPtRessource;
}


void Adrenaline::regeneration()
{
	if (m_ptRessource + 2 <= m_maxPtRessource)
		m_ptRessource += 2;
}
