/*#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

// extern variables from missile.cpp
extern int score;
extern int missed;

extern struct Missile {
    float t;
    float sx, sy;
    float cx, cy;
    float ex, ey;
    float x, y;
    bool active;
    bool isInterceptor;
} missiles[30];

extern int missileCount;


// =====================
// TEXT DRAW
// =====================
void drawText(float x, float y, const char* str){
    glRasterPos2f(x, y);
    while(*str){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *str);
        str++;
    }
}

// =====================
// SCORE (BOTTOM CENTER)
// =====================
void drawScore(){

    char text[50];
    sprintf(text, "Score: %d  Missed: %d", score, missed);

    glColor3f(1,1,1);
    drawText(400, 20, text);
}

// =====================
// RADAR (BOTTOM RIGHT)
// =====================
void drawRadar(){

    float cx = 900;
    float cy = 80;
    float r = 60;

    // radar circle
    glColor3f(0,1,0);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<360;i++){
        float ang = i*3.1416/180;
        glVertex2f(cx + cos(ang)*r, cy + sin(ang)*r);
    }
    glEnd();

    // missile dots
    for(int i=0;i<missileCount;i++){

        if(!missiles[i].active) continue;

        float rx = cx + (missiles[i].x/1000.0f)*r*2 - r;
        float ry = cy + (missiles[i].y/500.0f)*r*2 - r;

        if(missiles[i].isInterceptor)
            glColor3f(0,1,0);
        else
            glColor3f(1,0,0);

        glPointSize(4);
        glBegin(GL_POINTS);
        glVertex2f(rx, ry);
        glEnd();
    }
}
*/
