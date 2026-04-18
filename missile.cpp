#include <GL/glut.h>
#include <math.h>
// =====================
// Bezier variables
// =====================
float t = 0.0f;

// Start (matched with shape position for smooth start)
float xStart = 165.0f, yStart = 270.0f;

// Control (adjusted for better curve)
float xCP = 400.0f, yCP = 500.0f;

// End (your target)
float xEnd = 782.0f, yEnd = 340.0f;

float x = 0.0f, y = 0.0f;

// =====================
// Scaling variables
// =====================
float maxScale = 1.5f;
float minScale = 0.3f;
float scale = 1.0f;

// Shape center
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

    glColor3f(1.0f, 0.0f, 0.0f);

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
    t += 0.006f; // smoother & slightly faster

    if (t > 1.0f) {
        t = 0.0f;
    }

    // Bezier motion
    x = (1 - t)*(1 - t)*xStart + 2*(1 - t)*t*xCP + t*t*xEnd;
    y = (1 - t)*(1 - t)*yStart + 2*(1 - t)*t*yCP + t*t*yEnd;

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

    xStart = sx; yStart = sy;
    xCP = cx_; yCP = cy_;
    xEnd = ex;
    yEnd = ey;
}
