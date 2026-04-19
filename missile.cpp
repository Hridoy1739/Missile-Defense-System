#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// =====================
// STRUCTS
// =====================
struct Missile {
    float t;
    float sx, sy;
    float cx, cy;
    float ex, ey;
    float x, y;
    bool active;
    bool isInterceptor;
};

struct Explosion {
    float x, y;
    float radius;
    bool active;
};

// =====================
Missile missiles[20];
Explosion explosions[10];
int missileCount = 0;

// =====================
// TIMER FOR AUTO SPAWN
// =====================
float spawnTimer = 0;
float nextSpawnTime = 120; // ~2 sec

// =====================
float distance(float x1,float y1,float x2,float y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

// =====================
// RANDOM TIME (2–4 sec)
// =====================
float getRandomTime(){
    return (rand()%120) + 120; // 120–240 frames
}

// =====================
// CREATE MISSILE
// =====================
void createMissile(float sx,float sy,float cx,float cy,float ex,float ey,bool interceptor){

    if(missileCount >= 18) missileCount = 0;

    missiles[missileCount].t = 0;
    missiles[missileCount].sx = sx;
    missiles[missileCount].sy = sy;
    missiles[missileCount].cx = cx;
    missiles[missileCount].cy = cy;
    missiles[missileCount].ex = ex;
    missiles[missileCount].ey = ey;
    missiles[missileCount].active = true;
    missiles[missileCount].isInterceptor = interceptor;

    missileCount++;
}




// =====================
// EXPLOSION
// =====================
void createExplosion(float x,float y){
    for(int i=0;i<10;i++){
        if(!explosions[i].active){
            explosions[i].x = x;
            explosions[i].y = y;
            explosions[i].radius = 2;
            explosions[i].active = true;
            break;
        }
    }
}

// =====================
// INIT SYSTEM
// =====================
void initMissileSystem(){
    srand(time(0));
}

// =====================
// UPDATE SYSTEM
// =====================
void updateSystem(int value){

    // =====================
    // AUTO SPAWN MISSILES
    // =====================
// =====================
// AUTO SPAWN MISSILES
// =====================
spawnTimer++;

if(spawnTimer >= nextSpawnTime){

    spawnTimer = 0;
    nextSpawnTime = getRandomTime();

    // RANDOM TARGET (RIGHT SIDE BUILDINGS)
    float targetX = 750 + rand()%200;
    float targetY = 260 + rand()%120;

    // RANDOM LEFT LAUNCHER
    int side = rand()%2;

    float sx, sy, cx, cy;

    if(side == 0){
        sx = 165; sy = 270;
        cx = 400; cy = 500;
    } else {
        sx = 250; sy = 120;
        cx = 450; cy = 450;
    }

    // CREATE ATTACK MISSILE
    createMissile(sx, sy, cx, cy, targetX, targetY, false);

    // =====================
    // INTERCEPTOR LOGIC
    // =====================

    int defenseChance = rand()%100;

    if(defenseChance < 60){  // 60% chance to defend

        // add randomness so it MISSES sometimes
        float offsetX = (rand()%80) - 40;
        float offsetY = (rand()%80) - 40;

        createMissile(
            700, 250,          // right launcher
            500, 400,
            targetX + offsetX, // NOT perfect target
            targetY + offsetY,
            true
        );
    }
}

    // =====================
    // UPDATE MISSILES
    // =====================
    for(int i=0;i<missileCount;i++){

        if(!missiles[i].active) continue;

        missiles[i].t += 0.01f;

        if(missiles[i].t > 1){
            missiles[i].active = false;
            continue;
        }

        float t = missiles[i].t;

        missiles[i].x =
        (1-t)*(1-t)*missiles[i].sx +
        2*(1-t)*t*missiles[i].cx +
        t*t*missiles[i].ex;

        missiles[i].y =
        (1-t)*(1-t)*missiles[i].sy +
        2*(1-t)*t*missiles[i].cy +
        t*t*missiles[i].ey;
    }

    // =====================
    // COLLISION DETECTION
    // =====================
    for(int i=0;i<missileCount;i++){
        for(int j=0;j<missileCount;j++){

            if(i==j) continue;

            if(!missiles[i].active || !missiles[j].active) continue;

            if(missiles[i].isInterceptor && !missiles[j].isInterceptor){

                if(distance(missiles[i].x,missiles[i].y,
                            missiles[j].x,missiles[j].y) < 20){

                    missiles[i].active = false;
                    missiles[j].active = false;

                    createExplosion(missiles[i].x, missiles[i].y);
                }
            }
        }
    }

    // =====================
    // UPDATE EXPLOSIONS
    // =====================
    for(int i=0;i<10;i++){
        if(!explosions[i].active) continue;

        explosions[i].radius += 1.5f;

        if(explosions[i].radius > 30)
            explosions[i].active = false;
    }

    glutPostRedisplay();
    glutTimerFunc(16, updateSystem, 0);
}

// =====================
// DRAW MISSILES
// =====================
void drawAllMissiles(){

    for(int i=0;i<missileCount;i++){

        if(!missiles[i].active) continue;

        glPushMatrix();
        glTranslatef(missiles[i].x, missiles[i].y, 0);

        if(missiles[i].isInterceptor)
            glColor3f(0,1,0);
        else
            glColor3f(1,0,0);

        glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(6,2);
        glVertex2f(12,0);
        glVertex2f(6,-2);
        glEnd();

        glPopMatrix();
    }
}

// =====================
// DRAW EXPLOSIONS
// =====================
void drawExplosions(){

    for(int i=0;i<10;i++){

        if(!explosions[i].active) continue;

        glColor3f(1,0.5,0);

        glBegin(GL_POLYGON);
        for(int j=0;j<360;j++){
            float ang = j*3.1416/180;

            glVertex2f(
                explosions[i].x + cos(ang)*explosions[i].radius,
                explosions[i].y + sin(ang)*explosions[i].radius
            );
        }
        glEnd();
    }
}
