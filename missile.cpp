#include <GL/glut.h>

// =====================
// Bezier variables
// =====================
float t = 0.0f;

float x0 = 0.0f, y0 = 0.0f;
float x1 = 300.0f, y1 = 250.0f;
float x2 = 700.0f, y2 = -200.0f;

float x = 0.0f, y = 0.0f;

// =====================
// Scaling variables
// =====================
float maxScale = 1.5f;
float minScale = 0.3f;
float scale = 1.0f;

// Approx center of your shape
float cx = 168.0f;
float cy = 272.0f;

// =====================
// Draw Missile
// =====================
void drawMissile() {
    glPushMatrix();

    // Move along curve
    glTranslatef(x, y, 0);

    // Scale around center
    glTranslatef(cx, cy, 0);
    glScalef(scale, scale, 1.0f);
    glTranslatef(-cx, -cy, 0);

    glColor3f(0.2f, 0.2f, 0.2f);

    glBegin(GL_POLYGON);
    glVertex3f(165.67, 270.28, 0.0f);
    glVertex3f(165.81, 267.63, 0.0f);
    glVertex3f(171.82, 271.58, 0.0f);
    glVertex3f(174.33, 270.02, 0.0f);
    glVertex3f(173.34, 275.56, 0.0f);
    glVertex3f(164.68, 275.82, 0.0f);
    glVertex3f(166.84, 274.26, 0.0f);
    glVertex3f(161.17, 270.31, 0.0f);
    glVertex3f(165.67, 270.28, 0.0f);
    glEnd();

    glPopMatrix();
}

// =====================
// Update Animation
// =====================
void updateMissile(int value) {
    t += 0.01f;

    // RESET when finished (THIS is the key)
    if (t > 1.0f) {
        t = 0.0f;   // restart animation
    }

    // Bezier motion
    x = (1 - t)*(1 - t)*x0 + 2*(1 - t)*t*x1 + t*t*x2;
    y = (1 - t)*(1 - t)*y0 + 2*(1 - t)*t*y1 + t*t*y2;

    // Scaling
    scale = maxScale - t * (maxScale - minScale);

    glutPostRedisplay();
    glutTimerFunc(16, updateMissile, 0);
}

// =====================
// Launch Setup
// =====================
void launchMissile(float sx, float sy, float cx_, float cy_, float ex, float ey) {
    t = 0.0f;

    x0 = sx; y0 = sy;
    x1 = cx_; y1 = cy_;
    x2 = ex; ey = ey;
    y2 = ey;
}
