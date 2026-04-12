#include <GL/gl.h>
#include <GL/glut.h>
#include "Objects.cpp"
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 1.0, 1.0);
drawRightSideBuildings();
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
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
