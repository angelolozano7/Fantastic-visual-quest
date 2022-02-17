#include "Tetera.h"

void Tetera::DibujarTetera(float posX, float posY, float posZ) {
    //escena general
    glPushMatrix();
        glTranslatef(posX, posY, posZ);
        // dibuja un cilindro 
        glPushMatrix();
            glutSolidTeapot(0.5);
        glPopMatrix();
    glPopMatrix();
}