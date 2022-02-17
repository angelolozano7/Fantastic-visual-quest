#include "Mallas.h"

void Mallas::DibujarMallas(float posX, float posY, float posZ) {
    //escena general
    glPushMatrix();

        glTranslatef(posX, posY, posZ);
        // dibuja un cilindro 
        glPushMatrix();
            glBegin(GL_TRIANGLES); // comienzo a dibujarlo por vertices
            glVertex3f(-0.5, 0, 0);
            glVertex3f(0.5, 0, 0);
            glVertex3f(0, 0.5, 0);
            glEnd();
        glPopMatrix();
    
    glPopMatrix();
}
