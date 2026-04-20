#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>





int score = 0;
int missed = 0;

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
Missile missiles[30];
Explosion explosions[15];
int missileCount = 0;

// =====================
// SPAWN TIMER
// =====================
float spawnTimer = 0;
float nextSpawnTime = 120;

// =====================
float distance(float x1,float y1,float x2,float y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

// =====================
float getRandomTime(){
    return (rand()%120) + 120; // 2–4 sec
}

// =====================
// CREATE MISSILE
// =====================
void createMissile(float sx,float sy,float cx,float cy,float ex,float ey,bool interceptor){

    if(missileCount >= 28) missileCount = 0;

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
    for(int i=0;i<15;i++){
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
// FIRE INTERCEPTOR (KEY)
// =====================
void fireInterceptor(){

    float sx = 700;
    float sy = 250;

    float angle = 140.0f; // adjust aim here

    float rad = angle * 3.1416 / 180.0f;
    float dist = 800;

    float ex = sx + cos(rad)*dist;
    float ey = sy + sin(rad)*dist;

    float cx = (sx + ex)/2;
    float cy = (sy + ey)/2 + 150;// for fixing the Bezier Curve Control point

    createMissile(sx, sy, cx, cy, ex, ey, true);
    // SOUND ADD
   PlaySound(TEXT("launch"), NULL, SND_FILENAME | SND_ASYNC);
}

// =====================
// INIT
// =====================
void initMissileSystem(){
    srand(time(0));//random run
}

// =====================
// UPDATE SYSTEM
// =====================
void updateSystem(int value){

    // =====================
    // AUTO ENEMY SPAWN
    // =====================
    spawnTimer++;

    if(spawnTimer >= nextSpawnTime){

        spawnTimer = 0;
        nextSpawnTime = getRandomTime();

        float targetX = 750 + rand()%200;
        float targetY = 260 + rand()%120;

        int side = rand()%2;// choosing enemy missile car

        if(side == 0){
            createMissile(165,270,400,500,targetX,targetY,false);
        }
        else{
            createMissile(250,120,450,450,targetX,targetY,false);
        }
        // -------SOUND ADD (enemy launch)
        PlaySound(TEXT("launch"), NULL, SND_FILENAME | SND_ASYNC);
    }

    // =====================
    // UPDATE MISSILES
    // =====================
    for(int i=0;i<missileCount;i++){

        if(!missiles[i].active) continue;

        missiles[i].t += 0.004f;

        if(missiles[i].t > 1){
            missiles[i].active = false;

            // ----explosion if enemy hits building
            if(!missiles[i].isInterceptor){
                createExplosion(missiles[i].ex, missiles[i].ey);
            }

            continue;
        }

        float t = missiles[i].t;
        //Quadratic Bezier Curve formula//
        missiles[i].x = (1-t)*(1-t)*missiles[i].sx + 2*(1-t)*t*missiles[i].cx + t*t*missiles[i].ex;
        missiles[i].y = (1-t)*(1-t)*missiles[i].sy + 2*(1-t)*t*missiles[i].cy + t*t*missiles[i].ey;
    }

    // =====================
    // COLLISION
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
                    // SOUND PLAY ON EXPLOSION//
    PlaySound(TEXT("explosion"), NULL, SND_FILENAME | SND_ASYNC);
                }
            }
        }
    }

    // =====================
    // UPDATE EXPLOSIONS
    // =====================
    for(int i=0;i<15;i++){
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

    for(int i=0;i<15;i++){

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
