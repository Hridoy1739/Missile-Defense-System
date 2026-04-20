#include <GL/glut.h>


drawRightSideBuildings(){

    //---------------Sky at Night--------------------//
    glBegin(GL_POLYGON);
    glColor3f(0.01f, 0.01f, 0.15f);
    glVertex3f(0, 285, 0);
    glVertex3f(0, 500, 0);
    glVertex3f(1000, 500, 0);
    glVertex3f(1000, 285, 0);
    glEnd();

    //--------------------water---------------------//
    glBegin(GL_POLYGON);
    glColor3f(0.01f, 0.02f, 0.08f);
    glVertex3f(0,0, 0);
    glVertex3f(1000, 0, 0);
    glVertex3f(1000, 285, 0);
    glVertex3f(0, 285, 0);
    glEnd();

    //-------------------River Edge----------------//

 /*   glBegin(GL_POLYGON);
glColor3f(0.1f, 0.01f, 0.3f);
glVertex3f(255.27, 287.16, 0.0f);
glVertex3f(271.63, 280.20, 0.0f);
glVertex3f(292.56, 274.99, 0.0f);
glVertex3f(324.89, 275.04, 0.0f);
glVertex3f(309.21, 257.53, 0.0f);
glVertex3f(346.06, 261.09, 0.0f);
glVertex3f(346.50, 245.36, 0.0f);
glVertex3f(319.03, 236.57, 0.0f);
glVertex3f(293.77, 231.28, 0.0f);
glVertex3f(307.77, 226.06, 0.0f);
glVertex3f(273.33, 219.01, 0.0f);
glVertex3f(289.69, 212.04, 0.0f);
glVertex3f(225.61, 190.95, 0.0f);
glVertex3f(253.61, 180.51, 0.0f);
glVertex3f(242.35, 170.00, 0.0f);
glVertex3f(323.13, 171.89, 0.0f);
glVertex3f(323.71, 150.92, 0.0f);
glVertex3f(351.33, 154.46, 0.0f);
glVertex3f(340.17, 140.45, 0.0f);
glVertex3f(377.02, 144.02, 0.0f);
glVertex3f(381.98, 131.79, 0.0f);
glVertex3f(428.12, 133.62, 0.0f);
glVertex3f(414.99, 107.37, 0.0f);
glVertex3f(443.19, 89.94, 0.0f);
glVertex3f(413.75, 68.91, 0.0f);
glVertex3f(439.59, 53.22, 0.0f);
glVertex3f(414.67, 35.69, 0.0f);
glVertex3f(417.51, 16.46, 0.0f);
glVertex3f(465.91, 20.05, 0.0f);
glVertex3f(413.76, -15.01, 0.0f);
glVertex3f(999.95, 0.00, 0.0f);
glVertex3f(981.30, 173.04, 0.0f);
glVertex3f(948.34, 195.71, 0.0f);
glVertex3f(920.38, 204.41, 0.0f);
glVertex3f(894.93, 206.11, 0.0f);
glVertex3f(876.02, 221.81, 0.0f);
glVertex3f(841.43, 220.00, 0.0f);
glVertex3f(824.97, 230.46, 0.0f);
glVertex3f(797.50, 221.67, 0.0f);
glVertex3f(790.33, 230.40, 0.0f);
glVertex3f(758.20, 223.35, 0.0f);
glVertex3f(750.83, 239.07, 0.0f);
glVertex3f(730.14, 235.54, 0.0f);
glVertex3f(729.66, 253.02, 0.0f);
glVertex3f(694.92, 256.46, 0.0f);
glVertex3f(667.26, 254.66, 0.0f);
glVertex3f(641.37, 272.10, 0.0f);
glVertex3f(625.40, 265.08, 0.0f);
glVertex3f(620.39, 279.06, 0.0f);
glVertex3f(604.42, 272.04, 0.0f);
glVertex3f(578.82, 278.98, 0.0f);
glVertex3f(599.46, 284.26, 0.0f);
glVertex3f(643.20, 289.59, 0.0f);
glVertex3f(456.09, 291.01, 0.0f);
glVertex3f(252.72, 295.90, 0.0f);
glVertex3f(19.38, 298.99, 0.0f);
glVertex3f(19.67, 288.50, 0.0f);
glVertex3f(252.96, 287.16, 0.0f);

glEnd();*/

//-------------------Right Side Ground----------------------//
glBegin(GL_POLYGON);
glColor3f(0.10f, 0.08f, 0.06f);
glVertex3f(663.55, 286.13, 0.0f);
glVertex3f(651.65, 282.86, 0.0f);
glVertex3f(643.28, 283.10, 0.0f);
glVertex3f(627.83, 277.04, 0.0f);
glVertex3f(614.67, 279.59, 0.0f);
glVertex3f(598.34, 272.84, 0.0f);
glVertex3f(619.11, 267.17, 0.0f);
glVertex3f(635.65, 270.30, 0.0f);
glVertex3f(640.47, 267.27, 0.0f);
glVertex3f(665.01, 260.77, 0.0f);
glVertex3f(683.24, 250.83, 0.0f);
glVertex3f(705.70, 248.01, 0.0f);
glVertex3f(727.28, 244.49, 0.0f);
glVertex3f(734.94, 240.65, 0.0f);
glVertex3f(739.55, 241.24, 0.0f);
glVertex3f(744.58, 234.58, 0.0f);
glVertex3f(744.79, 230.96, 0.0f);
glVertex3f(750.46, 229.34, 0.0f);
glVertex3f(761.59, 229.74, 0.0f);
glVertex3f(767.84, 217.99, 0.0f);
glVertex3f(796.49, 220.77, 0.0f);
glVertex3f(807.06, 214.68, 0.0f);
glVertex3f(827.41, 216.25, 0.0f);
glVertex3f(848.27, 209.13, 0.0f);
glVertex3f(876.95, 211.19, 0.0f);
glVertex3f(905.80, 194.44, 0.0f);
glVertex3f(928.31, 190.89, 0.0f);
glVertex3f(952.12, 180.79, 0.0f);
glVertex3f(966.67, 170.24, 0.0f);
glVertex3f(978.42, 159.77, 0.0f);
glVertex3f(987.90, 156.60, 0.0f);
glVertex3f(1000.00, 156.25, 0.0f);
glVertex3f(1000, 285, 0.0f);
glVertex3f(663.55, 286.13, 0.0f);

glEnd();

//----------Left Solid Soil------------//
glBegin(GL_POLYGON);
glColor3f(0.10f, 0.08f, 0.06f);
glVertex3f(2.93, 0.48, 0.0f);
glVertex3f(461.16, 1.60, 0.0f);
glVertex3f(500.69, 8.30, 0.0f);
glVertex3f(452.71, 12.12, 0.0f);
glVertex3f(385.60, 13.61, 0.0f);
glVertex3f(379.94, 26.16, 0.0f);
glVertex3f(415.70, 41.23, 0.0f);
glVertex3f(380.48, 51.61, 0.0f);
glVertex3f(427.52, 73.26, 0.0f);
glVertex3f(388.42, 93.05, 0.0f);
glVertex3f(398.40, 113.17, 0.0f);
glVertex3f(325.13, 116.83, 0.0f);
glVertex3f(303.33, 127.02, 0.0f);
glVertex3f(246.45, 130.44, 0.0f);
glVertex3f(245.65, 138.76, 0.0f);
glVertex3f(215.75, 140.24, 0.0f);
glVertex3f(211.18, 156.93, 0.0f);
glVertex3f(167.81, 159.12, 0.0f);
glVertex3f(113.03, 156.28, 0.0f);
glVertex3f(53.07, 160.79, 0.0f);
glVertex3f(63.85, 172.58, 0.0f);
glVertex3f(16.76, 182.61, 0.0f);
glVertex3f(126.83, 198.67, 0.0f);
glVertex3f(114.31, 205.09, 0.0f);
glVertex3f(170.44, 209.47, 0.0f);
glVertex3f(166.81, 216.27, 0.0f);
glVertex3f(209.93, 216.69, 0.0f);
glVertex3f(199.99, 227.22, 0.0f);
glVertex3f(224.48, 220.11, 0.0f);
glVertex3f(259.55, 226.87, 0.0f);
glVertex3f(242.46, 234.40, 0.0f);
glVertex3f(259.64, 241.42, 0.0f);
glVertex3f(213.15, 245.21, 0.0f);
glVertex3f(173.26, 257.74, 0.0f);
glVertex3f(157.91, 262.64, 0.0f);
glVertex3f(138.99, 258.24, 0.0f);
glVertex3f(129.05, 268.77, 0.0f);
glVertex3f(97.91, 267.67, 0.0f);
glVertex3f(68.70, 277.44, 0.0f);
glVertex3f(-0.10, 281.04, 0.0f);
glVertex3f(4.42, 0.46, 0.0f);

glEnd();



            //---------Left Top Hills---------------------//
    glBegin(GL_POLYGON);
    glColor3f(0.18f, 0.18f, 0.22f);
    glVertex3f(0, 285, 0);
    glVertex3f(0, 318, 0);
    glVertex3f(27.5, 340.4, 0);
    glVertex3f(56.25, 326, 0);
    glVertex3f(71.25, 347, 0);
    glVertex3f(80, 343.8, 0);
    glVertex3f(112.5, 385, 0);
    glVertex3f(150, 351, 0);
    glVertex3f(160, 360, 0);
    glVertex3f(187.5, 337.6, 0);
    glVertex3f(200.5, 343.8, 0);
    glVertex3f(213.5, 334, 0);
    glVertex3f(221.25, 341.2, 0);
    glVertex3f(243.7, 327, 0);
    glVertex3f(255, 334, 0);
    glVertex3f(281.5, 314.4, 0);
    glVertex3f(290, 318, 0);
    glVertex3f(307.5, 308.7, 0);
    glVertex3f(315, 310.8, 0);
    glVertex3f(337.5, 294.3, 0);
    glVertex3f(343.5, 300, 0);
    glVertex3f(375, 285, 0);
    glEnd();

    //-----------------Middle Side Hills----------///
    glBegin(GL_POLYGON);
    glVertex3f(595, 285, 0);
    glVertex3f(604.34, 290, 0);
    glVertex3f(611.62, 286, 0);
    glVertex3f(625.92, 292, 0);
    glVertex3f(633.43, 288, 0);
    glVertex3f(645.73, 296, 0);
    glVertex3f(657.60, 291, 0);
    glVertex3f(672.52, 302, 0);
    glVertex3f(687.68, 296, 0);
    glVertex3f(707.55, 308, 0);
    glVertex3f(721.85, 298, 0);
    glVertex3f(738.18, 308, 0);
    glVertex3f(752.63, 302, 0);
    glVertex3f(778.9, 320, 0);
    glVertex3f(778.9, 285, 0);
    glVertex3f(595, 285, 0);
    glEnd();
    //-------------Right Top Hills---------------------//
    glBegin(GL_POLYGON);
    glColor3f(0.18f, 0.18f, 0.22f);
    glVertex3f(862.6, 332.5, 0);
    glVertex3f(921.5, 365, 0);
    glVertex3f(952.5, 340, 0);
    glVertex3f(968.75, 352.5, 0);
    glVertex3f(984.37, 340, 0);
    glVertex3f(1000, 345, 0);
    glVertex3f(1000, 302.5, 0);
    glVertex3f(921.5, 302.5, 0);
    glVertex3f(918.4, 315, 0);
    glVertex3f(906, 307.5, 0);
    glVertex3f(906, 315, 0);
    glVertex3f(898.25, 320, 0);
    glVertex3f(890.5, 315, 0);
    glVertex3f(881.2, 315, 0);
    glVertex3f(881.2, 302.5, 0);
    glVertex3f(875, 302, 0);
    glVertex3f(875, 333.7, 0);
    glVertex3f(862.6, 332.5, 0);
    glEnd();

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

void midPointCircle(int xc, int yc, int r) {
    int x = 0, y = r;
    int d = 1 - r;

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);

    while (x <= y) {

        // draw horizontal spans
        glVertex2i(xc - x, yc + y);
        glVertex2i(xc + x, yc + y);

        glVertex2i(xc - x, yc - y);
        glVertex2i(xc + x, yc - y);

        glVertex2i(xc - y, yc + x);
        glVertex2i(xc + y, yc + x);

        glVertex2i(xc - y, yc - x);
        glVertex2i(xc + y, yc - x);

        if (d < 0)
            d = d + 2 * x + 3;
        else {
            d = d + 2 * (x - y) + 5;
            y--;
        }
        x++;
    }

    glEnd();
}

