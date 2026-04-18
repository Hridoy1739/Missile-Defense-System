#include <GL/gl.h>
#include <GL/glut.h>
#include "Objects.cpp"
#include "MissileCarDesign.cpp"
#include "missile.cpp"
#include <math.h>
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 1.0, 1.0);
drawRightSideBuildings();
drawMissileHolder();
drawMissile();
drawCircle(92.34, 213.58, 8);
drawCircle(108.34, 213.58, 8);
drawCircle(124.34, 213.58, 8);
drawCircle(140.34, 213.58, 8);
drawCircle(156.34, 213.58, 8);
drawMiniCircle(92.34, 213.58, 4);
drawMiniCircle(108.34, 213.58, 4);
drawMiniCircle(124.34, 213.58, 4);
drawMiniCircle(140.34, 213.58, 4);
drawMiniCircle(156.34, 213.58, 4);


glPushMatrix();
glTranslatef(10.0f, -280.0f, 0.0f);
glScalef(1.5f, 1.5f, 1.0f);
drawCircle(92.34, 213.58, 8);
drawCircle(108.34, 213.58, 8);
drawCircle(124.34, 213.58, 8);
drawCircle(140.34, 213.58, 8);
drawCircle(156.34, 213.58, 8);
drawMiniCircle(92.34, 213.58, 4);
drawMiniCircle(108.34, 213.58, 4);
drawMiniCircle(124.34, 213.58, 4);
drawMiniCircle(140.34, 213.58, 4);
drawMiniCircle(156.34, 213.58, 4);
glPopMatrix();

glutSwapBuffers();
}
void init(void)
{
   glClearColor(0.00, 0.00, 0.00, 0.00);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0, 1000, 0, 500, 100, -100);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB );
    glutInitWindowSize(1000, 500);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Missile Defense System");
    init();
     launchMissile(
        0, 0,        // start
        150, 100,    // control (height)
        600, 65    // end
    );
    glutDisplayFunc(display);
    glutTimerFunc(0, updateMissile, 0);
    glutMainLoop();
    return 0;
}
