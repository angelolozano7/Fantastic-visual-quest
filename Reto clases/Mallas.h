#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class Mallas
{
public:
	Mallas() {};

	void DibujarMallas(float posX, float posY, float posZ);

	~Mallas() {};
};

