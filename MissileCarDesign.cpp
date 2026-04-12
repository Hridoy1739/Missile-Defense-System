#include <GL/gl.h>

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


//---------------------car2-----------------//
glBegin(GL_POLYGON);
glColor3f(0.12f, 0.18f, 0.08f);//missile
glVertex3f(138.75, 125.99, 0);
glVertex3f(144.63, 126.84, 0);
glVertex3f(146.47, 126.36, 0);
glVertex3f(246.51, 145.42, 0);
glVertex3f(256.38, 145.32, 0);
glVertex3f(253.44, 142.30, 0);
glVertex3f(151.65, 122.87, 0);
glVertex3f(154.68, 122.49, 0);
glVertex3f(255.33, 141.45, 0);
glVertex3f(265.50, 141.35, 0);
glVertex3f(262.00, 137.95, 0);
glVertex3f(159.30, 118.71, 0);
glVertex3f(164.38, 118.71, 0);
glVertex3f(262.98, 137.20, 0);
glVertex3f(273.44, 137.19, 0);
glVertex3f(271.11, 134.08, 0);
glVertex3f(193.64, 118.87, 0);
glVertex3f(159.30, 118.71, 0);
glVertex3f(156.08, 118.05, 0);
glVertex3f(138.75, 125.99, 0);

glEnd();

glBegin(GL_POLYGON);// Body
glColor3f(0.5f, 0.5f, 0.0f);//
glVertex3f(159.89, 118.71, 0);
glVertex3f(220.25, 118.75, 0);
glVertex3f(220.15, 119.69, 0);
glVertex3f(225.62, 121.48, 0);
glVertex3f(236.98, 121.47, 0);
glVertex3f(228.17, 125.34, 0);
glVertex3f(231.39, 125.91, 0);
glVertex3f(242.36, 121.46, 0);
glVertex3f(262.38, 121.45, 0);
glVertex3f(262.28, 122.39, 0);
glVertex3f(276.62, 122.38, 0);
glVertex3f(277.13, 120.49, 0);
glVertex3f(279.82, 120.49, 0);
glVertex3f(283.02, 118.69, 0);
glVertex3f(288.68, 118.78, 0);
glVertex3f(289.30, 115.95, 0);
glVertex3f(283.33, 115.95, 0);
glVertex3f(283.73, 115.01, 0);
glVertex3f(292.60, 113.21, 0);
glVertex3f(290.02, 112.27, 0);
glVertex3f(281.14, 114.16, 0);
glVertex3f(288.20, 112.55, 0);
glVertex3f(284.44, 111.42, 0);
glVertex3f(157.15, 111.26, 0);
glVertex3f(151.06, 114.94, 0);
glVertex3f(151.14, 116.83, 0);
glVertex3f(159.89, 118.71, 0);

glEnd();

//-----------------Interceptor---------//
glBegin(GL_POLYGON);
glColor3f(0.55f, 0.55f, 0.6f);
glVertex3f(718.74, 265.17, 0);
glVertex3f(718.67, 277.39, 0);
glVertex3f(734.12, 277.22, 0);
glVertex3f(726.01, 282.92, 0);
glVertex3f(728.43, 282.90, 0);
glVertex3f(736.72, 277.20, 0);
glVertex3f(748.26, 277.07, 0);
glVertex3f(749.81, 265.17, 0);
glVertex3f(718.55, 265.33, 0);

glEnd();
}
