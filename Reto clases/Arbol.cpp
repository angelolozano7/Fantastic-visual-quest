#include "Arbol.h"

void Arbol::DibujarArbol(float posX, float posY, float posZ) {
    //escena general
    glPushMatrix();

        glTranslatef(posX, posY, posZ);
        // dibuja un cilindro 
        glPushMatrix();
            glRotatef(90, 1, 0, 0);
            glutSolidCylinder(0.5, 1, 30, 30); 
        glPopMatrix();
        //dibuja una esfera
        glPushMatrix();
            glTranslatef(-0.2, 0.27, 0); // sirve para transladar el puntero de dibuja
            glutSolidSphere(0.5, 30, 30); 
        glPopMatrix();
        //dibuja una esfera
        glPushMatrix();
            glTranslatef(0.2, 0.27, 0); // sirve para transladar el puntero de dibuja
            glutSolidSphere(0.5, 30, 30);
        glPopMatrix();
    glPopMatrix();
}