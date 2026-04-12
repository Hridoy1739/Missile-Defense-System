#include <GL/glut.h>
drawRightSideBuildings(){

    //--------- Building 1----------------//
    glBegin(GL_POLYGON);
    glColor3f(0.45f, 0.45f, 0.48f);//left face of building
    glVertex3f(778.9, 342.5, 0);
    glVertex3f(782, 340, 0);
    glVertex3f(782, 265, 0);
    glVertex3f(778.9, 270, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.72f, 0.72f, 0.75f);// top Face
    glVertex3f(778.9, 342.5, 0);
    glVertex3f(782, 340, 0);
    glVertex3f(813, 340, 0);
    glVertex3f(782, 342.5, 0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.60f, 0.60f, 0.63f); //Front Face
    glVertex3f(782, 265, 0);
    glVertex3f(782, 340, 0);
    glVertex3f(813, 340, 0);
    glVertex3f(813, 265, 0);
    glEnd();
    // Windows (yellowish)
    glColor3f(1.0f, 1.0f, 0.4f);
    // Row 1
    glRectf(786, 330, 792, 322);
    glRectf(798, 330, 804, 322);
    // Row 2
    glRectf(786, 315, 792, 307);
    glRectf(798, 315, 804, 307);
    // Row 3
    glRectf(786, 300, 792, 292);
    glRectf(798, 300, 804, 292);
    // Row 4
    glRectf(786, 285, 792, 277);
    glRectf(798, 285, 804, 277);


        //--------- Building 2----------------//

    //left face of building
    glBegin(GL_POLYGON);
    glColor3f(0.42f, 0.42f, 0.45f);
    glVertex3f(813, 265, 0);
    glVertex3f(813, 352.5, 0);
    glVertex3f(828.5, 347.5, 0);
    glVertex3f(828.5, 265, 0);
    glEnd();
    // Window color
    glColor3f(1.0f, 1.0f, 0.4f);
    // Row 1 (top)
    glRectf(816, 340, 820, 332);
    glRectf(822, 338, 826, 330);
    // Row 2
    glRectf(816, 320, 820, 312);
    glRectf(822, 318, 826, 310);
    // Row 3
    glRectf(816, 300, 820, 292);
    glRectf(822, 298, 826, 290);
    // Row 4 (bottom)
    glRectf(816, 280, 820, 272);
    glRectf(822, 278, 826, 270);
    //Top Face
    glBegin(GL_POLYGON);
    glColor3f(0.70f, 0.70f, 0.73f);
    glVertex3f(813, 352.5, 0);
    glVertex3f(828.5, 347.5, 0);
    glVertex3f(844, 352.5, 0);
    glVertex3f(828.5, 358.75, 0);
    glEnd();
    //Right Face
    glBegin(GL_POLYGON);
    glColor3f(0.32f, 0.32f, 0.35f);
    glVertex3f(828.5, 265, 0);
    glVertex3f(828.5, 347.5, 0);
    glVertex3f(844, 352.5, 0);
    glVertex3f(844, 265, 0);
    glEnd();
    // Window color
    glColor3f(1.0f, 1.0f, 0.4f);
    // Row 1 (top)
    glRectf(831, 338, 835, 330);
    glRectf(837, 340, 841, 332);
    // Row 2
    glRectf(831, 318, 835, 310);
    glRectf(837, 320, 841, 312);
    // Row 3
    glRectf(831, 298, 835, 290);
    glRectf(837, 300, 841, 292);
    // Row 4 (bottom)
    glRectf(831, 278, 835, 270);
    glRectf(837, 280, 841, 272);

//---------------3rd Building----------------//
    glBegin(GL_POLYGON);
    glColor3f(0.38f, 0.38f, 0.42f);
    glVertex3f(844, 265, 0);
    glVertex3f(844, 333.7, 0);
    glVertex3f(875, 333.7, 0);
    glVertex3f(875, 265, 0);
    glEnd();
    // Window color
    glColor3f(1.0f, 1.0f, 0.4f);
    // Row 1 (top) - biggest to smallest left → right
    glRectf(848, 325, 853, 317);   // width 5
    glRectf(858, 325, 862, 317);   // width 4
    glRectf(867, 325, 870, 317);   // width 3
    // Row 2
    glRectf(848, 305, 853, 297);
    glRectf(858, 305, 862, 297);
    glRectf(867, 305, 870, 297);
    // Row 3
    glRectf(848, 285, 853, 277);
    glRectf(858, 285, 862, 277);
    glRectf(867, 285, 870, 277);

    //---------------4th Building----------------//
    glBegin(GL_POLYGON);
    glColor3f(0.28f, 0.28f, 0.30f);
    glVertex3f(875, 265, 0);
    glVertex3f(875, 302, 0);
    glVertex3f(881.2, 302.5, 0);
    glVertex3f(881.2, 315, 0);
    glVertex3f(890.5, 315, 0);
    glVertex3f(890.5, 265, 0);
    glEnd();
    glColor3f(1.0f, 1.0f, 0.4f);
    glPointSize(1.5f);
    glBegin(GL_POINTS);
    // row 1 (top)
    glVertex3f(882, 300, 0);
    glVertex3f(886, 300, 0);
    // row 2
    glVertex3f(878, 285, 0);
    glVertex3f(882, 285, 0);
    glVertex3f(886, 285, 0);
    // row 3 (fixed at 270)
    glVertex3f(878, 270, 0);
    glVertex3f(882, 270, 0);
    glVertex3f(886, 270, 0);
    glEnd();

    //---------------5th Building----------------//
    glBegin(GL_POLYGON);
    glColor3f(0.22f, 0.22f, 0.24f);
    glVertex3f(890.5, 265, 0);
    glVertex3f(890.5, 315, 0);
    glVertex3f(898.25, 320, 0);
    glVertex3f(906, 315, 0);
    glVertex3f(906, 265, 0);
    glEnd();
    // window dots
    glColor3f(1.0f, 1.0f, 0.4f);
    glPointSize(1.5f);
    glBegin(GL_POINTS);
    // row 1
    glVertex3f(894, 305, 0);
    glVertex3f(898, 305, 0);
    glVertex3f(902, 305, 0);
    // row 2
    glVertex3f(894, 290, 0);
    glVertex3f(898, 290, 0);
    glVertex3f(902, 290, 0);
    // row 3
    glVertex3f(894, 275, 0);
    glVertex3f(898, 275, 0);
    glVertex3f(902, 275, 0);
    glEnd();


//---------------6th Building----------------//
    glBegin(GL_POLYGON);
    glColor3f(0.18f, 0.18f, 0.20f);
    glVertex3f(906, 265, 0);
    glVertex3f(906, 307.5, 0);
    glVertex3f(918.4, 315, 0);
    glVertex3f(921.5, 265, 0);
    glEnd();
    // very small window dots (smaller than previous)
    glColor3f(0.9f, 0.9f, 0.3f);
    glPointSize(1.0f);
    glBegin(GL_POINTS);
    // row 1
    glVertex3f(909, 300, 0);
    glVertex3f(912, 300, 0);
    glVertex3f(915, 300, 0);
    // row 2
    glVertex3f(909, 288, 0);
    glVertex3f(912, 288, 0);
    glVertex3f(915, 288, 0);
    // row 3
    glVertex3f(909, 276, 0);
    glVertex3f(912, 276, 0);
    glVertex3f(915, 276, 0);
    glEnd();

    //---------------7th Building----------------//
    glBegin(GL_POLYGON);
    glColor3f(0.14f, 0.16f, 0.16f);
    glVertex3f(921.5, 265, 0);
    glVertex3f(918.4, 295, 0);
    glVertex3f(930.8, 295, 0);
    glVertex3f(930.8, 265, 0);
    glEnd();
    // ultra small window dots
    glColor3f(0.8f, 0.8f, 0.25f);
    glPointSize(1.0f);
    glBegin(GL_POINTS);
    // row 1
    glVertex3f(923, 288, 0);
    glVertex3f(926, 288, 0);
    glVertex3f(929, 288, 0);
    // row 2
    glVertex3f(923, 278, 0);
    glVertex3f(926, 278, 0);
    glVertex3f(929, 278, 0);
    glEnd();
    // row 3
    glVertex3f(923, 270, 0);
    glVertex3f(926, 270, 0);
    glVertex3f(929, 270, 0);

//---------------8th Building----------------//
    glBegin(GL_POLYGON);
    glColor3f(0.10f, 0.10f, 0.14f);
    glVertex3f(930.8, 265, 0);
    glVertex3f(930.8, 277.5, 0);
    glVertex3f(946.3, 277.5, 0);
    glVertex3f(946.3, 265, 0);
    glEnd();
    // tiniest window dots
    glColor3f(0.7f, 0.7f, 0.2f);
    glPointSize(1.0f);
    glBegin(GL_POINTS);
    // row 1
    glVertex3f(933, 273, 0);
    glVertex3f(936, 273, 0);
    glVertex3f(939, 273, 0);
    glVertex3f(942, 273, 0);
    // row 2
    glVertex3f(933, 269, 0);
    glVertex3f(936, 269, 0);
    glVertex3f(939, 269, 0);
    glVertex3f(942, 269, 0);
    glEnd();

//---------------9th Building----------------//
    glBegin(GL_POLYGON);
    glColor3f(0.18f, 0.18f, 0.22f);
    glVertex3f(946.3, 265, 0);
    glVertex3f(946.3, 270, 0);
    glVertex3f(968.75, 270, 0);
    glVertex3f(968.75, 265, 0);
    glEnd();
    // tiniest window line
    glColor3f(0.9f, 0.85f, 0.3f);
    glPointSize(1.0f);
    glBegin(GL_POINTS);
    // single line windows
    glVertex3f(950, 268, 0);
    glVertex3f(954, 268, 0);
    glVertex3f(958, 268, 0);
    glVertex3f(962, 268, 0);
    glVertex3f(966, 268, 0);
    glEnd();

}

