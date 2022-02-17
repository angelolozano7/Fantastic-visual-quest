#include "Casa.h"

void Casa::DibujarCasa(float posX, float posY, float posZ) {
    glPushMatrix();
        glTranslatef(posX, posY, posZ);
        glPushMatrix();
            glutSolidCube(0.5); // dibuja un cubo
        glPopMatrix();
        glPushMatrix();
            glTranslatef(0, 0.27, 0); // sirve para transladar el puntero de dibuja
            glBegin(GL_TRIANGLES); // comienzo a dibujarlo por vertices
            glVertex3f(-0.5, 0, 0);
            glVertex3f(0.5, 0, 0);
            glVertex3f(0, 0.5, 0);
            glEnd();
        glPopMatrix();
    glPopMatrix();
}

