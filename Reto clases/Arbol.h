#pragma once
#include "ObjetoNatural.h"
class Arbol :
    public ObjetoNatural
{
public:
	Arbol() {};

	void DibujarArbol(float posX, float posY, float posZ);

	~Arbol() {};
};

