#include <GL/gl.h>
#include <stdio.h>
#include <math.h>

drawMissileHolder(){

    //----------------Car 1----------------//
glBegin(GL_POLYGON);// Missile
glColor3f(0.12f, 0.18f, 0.08f);
glVertex3f(60.31, 244.78, 0);
glVertex3f(65.05, 246.55, 0);
glVertex3f(66.13, 245.66, 0);
glVertex3f(147.70, 277.45, 0);
glVertex3f(155.98, 277.44, 0);
glVertex3f(153.46, 272.56, 0);
glVertex3f(70.21, 239.83, 0);
glVertex3f(72.31, 239.38, 0);
glVertex3f(155.26, 271.01, 0);
glVertex3f(163.56, 270.77, 0);
glVertex3f(160.38, 265.23, 0);
glVertex3f(77.09, 233.38, 0);
glVertex3f(80.90, 233.16, 0);
glVertex3f(161.48, 263.90, 0);
glVertex3f(170.11, 263.88, 0);
glVertex3f(167.62, 258.56, 0);
glVertex3f(102.96, 233.57, 0);
glVertex3f(80.55, 233.16, 0);
glVertex3f(77.09, 233.38, 0);
glVertex3f(73.72, 231.83, 0);
glVertex3f(59.95, 244.94, 0);
glEnd();
glBegin(GL_POLYGON);//Body
glColor3f(0.5f, 0.5f, 0.0f);
glVertex3f(79.46, 232.77, 0);
glVertex3f(126.11, 232.71, 0);
glVertex3f(126.27, 234.28, 0);
glVertex3f(130.74, 237.42, 0);
glVertex3f(140.02, 237.40, 0);
glVertex3f(132.83, 243.86, 0);
glVertex3f(135.46, 244.96, 0);
glVertex3f(144.66, 237.40, 0);
glVertex3f(160.78, 237.38, 0);
glVertex3f(160.70, 238.95, 0);
glVertex3f(172.42, 238.93, 0);
glVertex3f(172.59, 235.79, 0);
glVertex3f(175.03, 235.79, 0);
glVertex3f(177.64, 232.80, 0);
glVertex3f(182.28, 232.79, 0);
glVertex3f(182.77, 228.23, 0);
glVertex3f(178.13, 228.24, 0);
glVertex3f(178.21, 226.67, 0);
glVertex3f(185.46, 223.67, 0);
glVertex3f(183.36, 221.94, 0);
glVertex3f(182.11, 222.42, 0);
glVertex3f(178.79, 220.53, 0);
glVertex3f(74.99, 220.52, 0);
glVertex3f(70.02, 226.65, 0);
glVertex3f(69.86, 229.64, 0);
glVertex3f(76.77, 232.77, 0);
glVertex3f(79.46, 232.77, 0);

glEnd();


//----------------Car 2 (Translated and 1.5x Scaled)----------------//
glPushMatrix();
glTranslatef(10.0f, -280.0f, 0.0f);
glScalef(1.5f, 1.5f, 1.0f);
// =====CAR1 CODE=====
glBegin(GL_POLYGON);// Missile
glColor3f(0.12f, 0.18f, 0.08f);
glVertex3f(60.31, 244.78, 0);
glVertex3f(65.05, 246.55, 0);
glVertex3f(66.13, 245.66, 0);
glVertex3f(147.70, 277.45, 0);
glVertex3f(155.98, 277.44, 0);
glVertex3f(153.46, 272.56, 0);
glVertex3f(70.21, 239.83, 0);
glVertex3f(72.31, 239.38, 0);
glVertex3f(155.26, 271.01, 0);
glVertex3f(163.56, 270.77, 0);
glVertex3f(160.38, 265.23, 0);
glVertex3f(77.09, 233.38, 0);
glVertex3f(80.90, 233.16, 0);
glVertex3f(161.48, 263.90, 0);
glVertex3f(170.11, 263.88, 0);
glVertex3f(167.62, 258.56, 0);
glVertex3f(102.96, 233.57, 0);
glVertex3f(80.55, 233.16, 0);
glVertex3f(77.09, 233.38, 0);
glVertex3f(73.72, 231.83, 0);
glVertex3f(59.95, 244.94, 0);
glEnd();

glBegin(GL_POLYGON);//Body
glColor3f(0.5f, 0.5f, 0.0f);
glVertex3f(79.46, 232.77, 0);
glVertex3f(126.11, 232.71, 0);
glVertex3f(126.27, 234.28, 0);
glVertex3f(130.74, 237.42, 0);
glVertex3f(140.02, 237.40, 0);
glVertex3f(132.83, 243.86, 0);
glVertex3f(135.46, 244.96, 0);
glVertex3f(144.66, 237.40, 0);
glVertex3f(160.78, 237.38, 0);
glVertex3f(160.70, 238.95, 0);
glVertex3f(172.42, 238.93, 0);
glVertex3f(172.59, 235.79, 0);
glVertex3f(175.03, 235.79, 0);
glVertex3f(177.64, 232.80, 0);
glVertex3f(182.28, 232.79, 0);
glVertex3f(182.77, 228.23, 0);
glVertex3f(178.13, 228.24, 0);
glVertex3f(178.21, 226.67, 0);
glVertex3f(185.46, 223.67, 0);
glVertex3f(183.36, 221.94, 0);
glVertex3f(182.11, 222.42, 0);
glVertex3f(178.79, 220.53, 0);
glVertex3f(74.99, 220.52, 0);
glVertex3f(70.02, 226.65, 0);
glVertex3f(69.86, 229.64, 0);
glVertex3f(76.77, 232.77, 0);
glVertex3f(79.46, 232.77, 0);
glEnd();
glPopMatrix();
}

void drawCircle(float CX, float CY, float R)
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    for (float i = 0.0; i < 360.00; i++) {
        float angle = i * 3.14159 / 180;
        glVertex2f(CX + R * cos(angle), CY + R * sin(angle));
    }
    glEnd();
}
void drawMiniCircle(float CX, float CY, float R)
{
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    for (float i = 0.0; i < 360.00; i++) {
        float angle = i * 3.14159 / 180;
        glVertex2f(CX + R * cos(angle), CY + R * sin(angle));
    }
    glEnd();
}

