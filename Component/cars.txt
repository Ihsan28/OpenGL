
#include<windows.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>


using namespace std;
//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}


void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(80.0, (double)w / (double)h, 1.0, 200.0);
}
float a = 0.1;
float b = 0.1;
float c = 0.1;
float d = 0.1;
float e = 0.1;
float f = 0.1;
float g = 0.1;
float h = 0.1;
float i = 0.1;
float j = 0.1;

float a1 = 0.1;
float b1 = 0.1;
float c1 = 0.1;
float d1 = 0.1;
float e1 = 0.1;
float f1 = 0.1;
float g1 = 0.1;
float h1 = 0.1;
float i1 = 0.1;

float x = 0.1;
float t = 0.1;

float s1 = 0.1;
float s2 = 0.1;
float s3 = 0.1;
float r1 = 0.1;

int light = 1;      //1 for green-light, 0 for red-light
int day = 1;






float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;

//Draws the 3D scene
void drawScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glTranslatef(-6.5, -01.0, -5.0); //Move forward 5 uni4ts
	glPushMatrix(); //Save the current state of transformations












	//divider

	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);
	glVertex3f(0.8, -0.60, 0.0);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);

	glEnd();
	glPopMatrix();

	//end of divider
	glPushMatrix();
	glTranslatef(0.40, 0.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);

	//standard format
	glBegin(GL_POLYGON);
	glVertex3f(0.8, -0.60, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0);


	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.80, 0.0, 0.0);
	glColor3f(01.0, 01.0, 1);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(01.20, 0.0, 0.0);
	glColor3f(1.0, 1.0, 1.);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();



	glPushMatrix();
	glTranslatef(01.60, 0.0, 0.0);
	glColor3f(01.0, 01.0, 1.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(02.0, 0.0, 0.0);
	glColor3f(01.0, 01.0, 1.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(02.40, 0.0, 0.0);
	glColor3f(01.0, 01.0, 1.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(02.80, 0.0, 0.0);
	glColor3f(01.0, 01.0, 1.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(03.20, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(03.60, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(04.0, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(04.40, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(04.80, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(05.20, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(05.60, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(06.0, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(06.40, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(06.80, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(07.20, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(07.60, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(08.0, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(08.40, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(08.80, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(09.20, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(09.60, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(10.40, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(10.80, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(11.20, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(11.60, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(12.0, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(12.40, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(12.80, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(13.20, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(13.60, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(14.0, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();



	glPushMatrix();
	glTranslatef(-0.4, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.8, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-1.2, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-1.6, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-2.0, 0.0, 0.0);
	glColor3f(01.0, 01.0, 01.0);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.4, 0.0, 0.0);
	glColor3f(0.40, 0.30, 0.150);

	glBegin(GL_POLYGON);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.2, -0.0, 0.0);
	glVertex3f(1.0, -0.60, 0.0);
	glVertex3f(0.8, -0.60, 0.0);
	glEnd();
	glPopMatrix();

	//end of divider




	//car pink

	if (e >= 0) {
		e = e + .0195;
	}
	if (e>30.50) {
		e = 0;
	}


	//Make Wheel
	glPushMatrix();
	glTranslatef(-4.9 + e, 0.4, 0.0); //Move to the center of the triangle
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.1, 0.1, 0.1);
	glutSolidSphere(.120, 40, 25);  //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
	glPopMatrix();



	glPushMatrix(); //Save the current state of transformations
	glTranslatef(-4.2 + e, 0.4, 0.0); //Move to the center of the triangle
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.1, 0.1, 0.1);
	glutSolidSphere(.120, 40, 5);  //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
	glPopMatrix();




	// Car1 Body

	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glColor3f(01.0, 0.0, 01.0);
	glBegin(GL_POLYGON);
	glVertex3f(-3.2 + e, 0.15, 0.0);
	glVertex3f(-2.9 + e, 0.15, 0.0);
	glVertex3f(-2.9 + e, 0.45, 0.0);
	glVertex3f(-3.25 + e, 0.32, 0.0);
	glVertex3f(-3.25 + e, 0.20, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.80, 0.0, 0.80);
	glVertex3f(-2.16 + e, 0.48, 0.0);
	glVertex3f(-2.26 + e, 0.40, 0.0);
	glVertex3f(-1.74 + e, 0.26, 0.0);
	glVertex3f(-1.74 + e, 0.33, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glColor3f(01.0, 0.0, 01.0);
	glBegin(GL_POLYGON);
	glVertex3f(-2.26 + e, 0.15, 0.0);
	glVertex3f(-1.75 + e, 0.15, 0.0);
	glVertex3f(-1.7 + e, 0.20, 0.0);
	glVertex3f(-1.70 + e, 0.26, 0.0);
	glVertex3f(-1.74 + e, 0.26, 0.0);
	glVertex3f(-1.74 + e, 0.33, 0.0);
	glVertex3f(-2.16 + e, 0.48, 0.0);
	glVertex3f(-2.26 + e, 0.40, 0.0);
	glEnd();
	glPopMatrix();


	//Glass


	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-2.26 + e, 0.41, 0.0);
	glVertex3f(-2.165 + e, 0.485, 0.0);
	glVertex3f(-2.295 + e, 0.69, 0.0);
	glVertex3f(-2.35 + e, 0.67, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-2.27 + e, 0.41, 0.0);
	glVertex3f(-2.36 + e, 0.66, 0.0);
	glVertex3f(-2.55 + e, 0.66, 0.0);
	glVertex3f(-2.56 + e, 0.41, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-2.57 + e, 0.41, 0.0);
	glVertex3f(-2.58 + e, 0.66, 0.0);
	glVertex3f(-2.75 + e, 0.66, 0.0);
	glVertex3f(-2.88 + e, 0.41, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glColor3f(0.80, 0.0, 0.80);
	glBegin(GL_POLYGON);
	glVertex3f(-2.75 + e, 0.66, 0.0);
	glVertex3f(-2.36 + e, 0.66, 0.0);
	glVertex3f(-2.285 + e, 0.70, 0.0);;
	glVertex3f(-2.75 + e, 0.70, 0.0);
	glEnd();
	glPopMatrix();

	//make door

	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-2.54 + e, 0.41, 0.0);
	glVertex3f(-2.56 + e, 0.41, 0.0);
	glVertex3f(-2.40 + e, 0.15, 0.0);
	glVertex3f(-2.42 + e, 0.15, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-2.85 + e, 0.41, 0.0);
	glVertex3f(-2.87 + e, 0.41, 0.0);
	glVertex3f(-2.70 + e, 0.15, 0.0);
	glVertex3f(-2.72 + e, 0.15, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-02.0, 0.30, 0.0);
	glColor3f(01.0, 0.0, 01.0);
	glBegin(GL_POLYGON);
	glVertex3f(-2.9 + e, 0.15, 0.0);
	glVertex3f(-2.26 + e, 0.15, 0.0);
	glVertex3f(-2.26 + e, 0.40, 0.0);
	glVertex3f(-2.16 + e, 0.48, 0.0);
	glVertex3f(-2.3 + e, 0.70, 0.0);
	glVertex3f(-2.75 + e, 0.70, 0.0);
	glVertex3f(-2.9 + e, 0.45, 0.0);
	glEnd();
	glPopMatrix();





	//Make 2nd black Car


	//glColor3f(0.0, 01.0, 01.0);
	if (b >= 0) {
		b = b + .033;
	}
	if (b>20.50) {
		b = 0;
	}


	//Make Wheel
	glPushMatrix();
	glTranslatef(-2.35 + b, 0.45, 0.0); //Move to the center of the triangle
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(01.0, 01.0, 01.0);
	glutSolidSphere(.10, 40, 25);  //(GLdouble innerRadius,GLdouble outerRadius,GLint nsides, GLint rings);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.80 + b, 0.45, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(01.0, 01.0, 01.0);
	glutSolidSphere(.10, 40, 5);
	glPopMatrix();



	//Make body

	glPushMatrix();
	glTranslatef(0.40, 0.32, 0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.10, 0.10, 0.10);
	glVertex3f(-2.16 + b, 0.48, 0.0);
	glVertex3f(-2.26 + b, 0.40, 0.0);
	glVertex3f(-1.83 + b, 0.32, 0.0);
	glVertex3f(-1.84 + b, 0.40, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.40, 0.32, 0.0);
	glColor3f(0.10, 0.10, 0.10);
	glBegin(GL_POLYGON);
	glVertex3f(-2.26 + b, 0.15, 0.0);
	glVertex3f(-1.85 + b, 0.15, 0.0);
	glVertex3f(-1.8 + b, 0.20, 0.0);
	glVertex3f(-1.80 + b, 0.32, 0.0);
	glVertex3f(-1.82 + b, 0.32, 0.0);
	glVertex3f(-1.84 + b, 0.40, 0.0);
	glVertex3f(-2.16 + b, 0.48, 0.0);
	glVertex3f(-2.26 + b, 0.415, 0.0);
	glEnd();
	glPopMatrix();

	// glass of 2nd car

	glPushMatrix();
	glTranslatef(0.40, 0.32, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-2.26 + b, 0.43, 0.0);
	glVertex3f(-2.165 + b, 0.485, 0.0);
	glVertex3f(-2.265 + b, 0.67, 0.0);
	glVertex3f(-2.32 + b, 0.64, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.40, 0.32, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-2.27 + b, 0.43, 0.0);
	glVertex3f(-2.33 + b, 0.64, 0.0);
	glVertex3f(-2.50 + b, 0.64, 0.0);
	glVertex3f(-2.50 + b, 0.43, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.40, 0.32, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-2.51 + b, 0.43, 0.0);
	glVertex3f(-2.51 + b, 0.64, 0.0);
	glVertex3f(-2.70 + b, 0.64, 0.0);
	glVertex3f(-2.70 + b, 0.43, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.40, 0.32, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-2.71 + b, 0.43, 0.0);
	glVertex3f(-2.71 + b, 0.64, 0.0);
	glVertex3f(-2.83 + b, 0.64, 0.0);
	glVertex3f(-2.91 + b, 0.45, 0.0);
	glVertex3f(-2.91 + b, 0.43, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.40, 0.32, 0.0);
	glColor3f(0.10, 0.10, 0.10);
	glBegin(GL_POLYGON);
	glVertex3f(-2.26 + b, 0.15, 0.0);
	glVertex3f(-2.26 + b, 0.40, 0.0);
	glVertex3f(-2.16 + b, 0.48, 0.0);
	glVertex3f(-2.26 + b, 0.68, 0.0);
	glVertex3f(-2.84 + b, 0.68, 0.0);
	glVertex3f(-2.94 + b, 0.45, 0.0);
	glVertex3f(-2.94 + b, 0.20, 0.0);
	glVertex3f(-2.96 + b, 0.20, 0.0);
	glVertex3f(-2.96 + b, 0.18, 0.0);
	glVertex3f(-2.88 + b, 0.15, 0.0);
	glEnd();
	glPopMatrix();




	// MAke 3rd  blue Car

	if (c >= 0) {
		c = c + .029;
	}
	if (c>29.50) {
		c = 0;
	}


	//Make Wheel

	glPushMatrix();
	glTranslatef(-5.7 + c, 0.55, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.10, 0.10, 0.10);
	glutSolidSphere(.10, 40, 25);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-4.85 + c, 0.55, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.10, 0.10, 0.10);
	glutSolidSphere(.10, 40, 5);
	glPopMatrix();


	//Make glass of 3rd Car

	glPushMatrix();
	glTranslatef(-03.0, 0.40, 0.0);
	glColor3f(0.40, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-1.77 + c, 0.46, 0.0);
	glVertex3f(-1.87 + c, 0.63, 0.0);
	glVertex3f(-2.04 + c, 0.63, 0.0);
	glVertex3f(-2.04 + c, 0.46, 0.0);
	glEnd();
	glPopMatrix();

	//Make Body

	glPushMatrix();
	glTranslatef(-03.0, 0.40, 0.0);
	glColor3f(0.10, 0.30, 01.10);
	glBegin(GL_POLYGON);
	glVertex3f(-2.05 + c, 0.15, 0.0);
	glVertex3f(-1.65 + c, 0.15, 0.0);
	glVertex3f(-1.6 + c, 0.20, 0.0);
	glVertex3f(-1.60 + c, 0.28, 0.0);
	glVertex3f(-1.62 + c, 0.28, 0.0);
	glVertex3f(-1.64 + c, 0.40, 0.0);
	glVertex3f(-1.76 + c, 0.48, 0.0);
	glVertex3f(-1.86 + c, 0.64, 0.0);
	glVertex3f(-2.05 + c, 0.64, 0.0);



	glPushMatrix();
	glTranslatef(-03.0, 0.40, 0.0);
	glColor3f(0.0, 0.0, 01.0);
	glBegin(GL_POLYGON);
	glVertex3f(-2.05 + c, 0.15, 0.0);
	glVertex3f(-2.8 + c, 0.15, 0.0);
	glVertex3f(-2.8 + c, 0.35, 0.0);
	glVertex3f(-2.06 + c, 0.35, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-03.0, 0.40, 0.0);
	glColor3f(0.0, 0.0, 01.0);
	glBegin(GL_POLYGON);
	glVertex3f(-2.8 + c, 0.45, 0.0);
	glVertex3f(-2.8 + c, 0.14, 0.0);
	glVertex3f(-2.83 + c, 0.14, 0.0);
	glVertex3f(-2.83 + c, 0.16, 0.0);
	glVertex3f(-2.85 + c, 0.16, 0.0);
	glVertex3f(-2.85 + c, 0.18, 0.0);
	glVertex3f(-2.83 + c, 0.18, 0.0);
	glVertex3f(-2.83 + c, 0.45, 0.0);
	glEnd();
	glPopMatrix();




	// MAke 4th white Car

	if (d >= 0) {
		d = d + .029;
	}
	if (d>19.50) {
		d = 0;
	}


	//Make Wheel

	glPushMatrix();
	glTranslatef(-2.98 + d, 0.55, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.10, 0.10, 0.10);
	glutSolidSphere(.10, 40, 25);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-2.3 + d, 0.55, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.10, 0.10, 0.10);
	glutSolidSphere(.10, 40, 5);
	glPopMatrix();

	//Make glass of 4th Car

	glPushMatrix();
	glTranslatef(-0.40, 0.35, 0.0);
	glColor3f(0.40, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-1.77 + d, 0.46, 0.0);
	glVertex3f(-1.87 + d, 0.63, 0.0);
	glVertex3f(-2.04 + d, 0.63, 0.0);
	glVertex3f(-2.04 + d, 0.46, 0.0);
	glEnd();
	glPopMatrix();


	//Make Body

	glPushMatrix();
	glTranslatef(-0.40, 0.350, 0.0);
	glColor3f(0.70, 0.70, 0.70);
	glBegin(GL_POLYGON);
	glVertex3f(-2.05 + d, 0.15, 0.0);
	glVertex3f(-1.65 + d, 0.15, 0.0);
	glVertex3f(-1.6 + d, 0.20, 0.0);
	glVertex3f(-1.60 + d, 0.28, 0.0);
	glVertex3f(-1.62 + d, 0.28, 0.0);
	glVertex3f(-1.64 + d, 0.40, 0.0);
	glVertex3f(-1.76 + d, 0.48, 0.0);
	glVertex3f(-1.86 + d, 0.64, 0.0);
	glVertex3f(-2.05 + d, 0.64, 0.0);
	// glEnd();
	// glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.40, 0.35, 0.0);
	glColor3f(0.90, 0.90, 0.90);
	glBegin(GL_POLYGON);
	glVertex3f(-2.05 + d, 0.74, 0.0);
	glVertex3f(-2.75 + d, 0.74, 0.0);
	glVertex3f(-2.75 + d, 0.14, 0.0);
	glVertex3f(-2.05 + d, 0.14, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.40, 0.35, 0.0);
	glColor3f(0.140, 0.140, 0.140);
	glBegin(GL_POLYGON);
	glVertex3f(-2.77 + d, 0.19, 0.0);
	glVertex3f(-2.75 + d, 0.19, 0.0);
	glVertex3f(-2.75 + d, 0.18, 0.0);
	glVertex3f(-2.77 + d, 0.18, 0.0);
	glEnd();
	glPopMatrix();


	//Make Road

	glPushMatrix();
	glTranslatef(-0.7, -0.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);
	glVertex3f(-12.8, 0.0, 0.0);
	glVertex3f(20.5, 0.0, 0.0);
	glVertex3f(20.5, 0.80, 0.0);
	glVertex3f(-12.8, 0.80, 0.0);
	glEnd();
	glPopMatrix();
	//new

	//...........................................green foothpath


	glPushMatrix();
	glTranslatef(-0.7, -0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);

	glBegin(GL_POLYGON);
	glVertex3f(20.5, 1.0, 0.0);
	glVertex3f(20.5, 1.4, 0.0);
	glVertex3f(-12.8, 1.4, 0.0);
	glVertex3f(-12.8, 1.0, 0.0);
	glEnd();
	glPopMatrix();

	//Make 1st Footpath-standard

	glPushMatrix();
	glTranslatef(-0.7, -0.0, 0.0);
	glColor3f(0.25, 0.25, 0.25);

	glBegin(GL_POLYGON);
	glVertex3f(20.5, 0.80, 0.0);
	glVertex3f(20.5, 01.0, 0.0);
	glVertex3f(-12.8, 01.0, 0.0);
	glVertex3f(-12.8, 0.80, 0.0);
	glEnd();
	glPopMatrix();


	//............................................................


	//...................................................header tree starts from here

	/// Make Trees ///

	glPushMatrix();
	glTranslatef(05.5, 01.0, 0.0);
	glColor3f(0.4, 0.21, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.35, 0.0, 0.0);
	glVertex3f(-0.25, 0.0, 0.0);
	glVertex3f(-0.25, 0.48, 0.0);
	glVertex3f(-0.35, 0.480, 0.0);
	glEnd();
	glPopMatrix();


	///tree 1 ///


	glPushMatrix();
	glTranslatef(05.5, 01.0, 0.0);
	glColor3f(0.4, 0.21, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.35, 0.0, 0.0);
	glVertex3f(-0.25, 0.0, 0.0);
	glVertex3f(-0.25, 0.48, 0.0);
	glVertex3f(-0.35, 0.480, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(05.380, 1.380, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.15;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(05.550, 1.380, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.15;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(05.40, 1.60, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(05.520, 1.60, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(05.480, 1.750, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();



	/// 2 ///



	glPushMatrix();
	glTranslatef(08.0, 01.0, 0.0);
	glColor3f(0.4, 0.21, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.35, 0.0, 0.0);
	glVertex3f(-0.25, 0.0, 0.0);
	glVertex3f(-0.25, 0.48, 0.0);
	glVertex3f(-0.35, 0.480, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(07.380, 1.380, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.15;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(07.550, 1.380, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.15;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(07.40, 1.60, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(07.520, 1.60, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(07.480, 1.750, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();



	/// 3///


	glPushMatrix();
	glTranslatef(010.50, 01.0, 0.0);
	glColor3f(0.4, 0.21, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.35, 0.0, 0.0);
	glVertex3f(-0.25, 0.0, 0.0);
	glVertex3f(-0.25, 0.48, 0.0);
	glVertex3f(-0.35, 0.480, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(09.380, 1.380, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.15;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(09.550, 1.380, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.15;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(09.40, 1.60, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(09.520, 1.60, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(09.480, 1.750, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	/// 6 ///


	glPushMatrix();
	glTranslatef(013.0, 01.0, 0.0);
	glColor3f(0.4, 0.21, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.35, 0.0, 0.0);
	glVertex3f(-0.25, 0.0, 0.0);
	glVertex3f(-0.25, 0.48, 0.0);
	glVertex3f(-0.35, 0.480, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(011.380, 1.380, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.15;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(011.550, 1.380, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.15;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(011.40, 1.60, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(011.520, 1.60, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(011.480, 1.750, 1.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 50;
	float r = 0.12;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	//......................................................header tree ends here




	// ...............................................................1st red building - remake 3rd phase

	glPushMatrix();
	glTranslatef(4.40, 1.49, 0.0);
	glColor3ub(255, 229, 204);
	glBegin(GL_POLYGON);
	glVertex3f(3.5, 2.0, 0.0); //1
	glVertex3f(3.5, 03.0, 0.0); //2
	glVertex3f(1.5, 03.0, 0.0); //3
	glVertex3f(1.5, 2.0, 0.0); //4
	glEnd();
	glPopMatrix();

	//.....................................................................................................

	//..................................................................4th phase - choturvuj


	glPushMatrix();
	glTranslatef(1.88, .5, 0.0);
	glColor3ub(255, 229, 204);
	glBegin(GL_POLYGON);
	glVertex3f(5.5, 2.6, 0.0); //1
	glVertex3f(5.5, 03.0, 0.0); //2
	glVertex3f(4.5, 03.0, 0.0); //3
	glVertex3f(4.5, 2.6, 0.0); //4
	glEnd();
	glPopMatrix();
	//................................................................................................

	//..................................................................5th phase - oval5

	glPushMatrix();
	//glTranslatef(6,0,0);
	glTranslatef(6.9, 3.1, 0.0);
	glColor3f(0., .4, 0.);
	glBegin(GL_POLYGON);

	for (int i = 0; i<100; i++)
	{
		glPushAttrib(GL_CURRENT_BIT);
		glColor3f(0.,0.4,0.);
		glLineWidth(2.0);

		// Draw center
		glBegin(GL_POINTS);
		glVertex2d(0, 0);
		glEnd();

		glBegin(GL_POLYGON);

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(0.0f, 960, 600, 0.0f, 0.0f, 1.0f);

		// This should generate a circle
		for (GLfloat i = 0; i < 360; i++)
		{
			float x = cos(i*M_PI / 180.f) * 2.0; // keep the axes radius same
			float y = sin(i*M_PI / 180.f) * 0.1;
			glVertex2f(x, y);
		}


		glPopAttrib();
	}

	//.............................................................................



	//..........................protected start
	glPushMatrix();
	glTranslatef(1.88, -4.0, 0.0);
	glColor3f(0., .9, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, 0.0); //1
	glVertex3f(0.0, 0.0, 0.0); //2
	glVertex3f(0.0, 0.0, 0.0); //3
	glVertex3f(0.0, 0.0, 0.0); //4
	glEnd();
	glPopMatrix();
	//..........................protected
	//.......................,,,,,,,,,,,,,,,,..6th coturvuj

	glPushMatrix();
	glTranslatef(01.0, -0.0, 0.0);
	glColor3ub(255, 229, 204);
	glBegin(GL_POLYGON);
	glVertex3f(7.9, 01.0, 0.0);//1
	glVertex3f(7.9, 03.1, 0.0);//2
	glVertex3f(3.87, 03.1, 0.0);//3
	glVertex3f(3.87, 01.0, 0.0);//4


	glEnd();
	glPopMatrix();





	//golla2
	glPushMatrix();
	glTranslatef(10, 2.2, 0.0);
	//glRotatef(_angle, 0.0, 0.0, 1.0);
	glColor3ub(255, 229, 204);
	glutSolidSphere(.80, 60, 25);
	glPopMatrix();
	 //mini golla2
	glPushMatrix();
	glTranslatef(10 , 1.7, .5);
	//glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.0, 0.0, 0.0);
	glutSolidSphere(.190, 53, 27);
	glPopMatrix();



	//.......................... 6-1



	glPushMatrix();
	glTranslatef(1.5, 0.9, 0.0);
	glColor3ub(255, 229, 204);
	glBegin(GL_POLYGON);
	glVertex3f(3.87, 1.0, 0.0);//1
	glVertex3f(3.87, 1.5, 0.0);//2
	glVertex3f(2.0, 1.5, 0.0);//3
	glVertex3f(2.0, 1.0, 0.0);//4
	glEnd();
	glPopMatrix();

	//golla 1
	glPushMatrix();
	glTranslatef(3.5, 2.2, 0.0);
	//glRotatef(_angle, 0.0, 0.0, 1.0);
	glColor3ub(255, 229, 204);
	glutSolidSphere(.80, 60, 25);

	glPopMatrix();
	//mini golla1
	glPushMatrix();
	glTranslatef(2.7 , 2.00, 0.0);
	//glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(.10, 0.10, 0.10);
	glutSolidSphere(.190, 60, 25);
	glPopMatrix();


	//....................................

	//.......................... 6-2


	glPushMatrix();
	glTranslatef(6.5, 0.9, 0.0);
	glColor3ub(255, 229, 204);
	glBegin(GL_POLYGON);
	glVertex3f(3.87, 1.0, 0.0);//1
	glVertex3f(3.87, 1.5, 0.0);//2
	glVertex3f(2.0, 1.5, 0.0);//3
	glVertex3f(2.0, 1.0, 0.0);//4


	glEnd();
	glPopMatrix();




	//....................................


	///Make BUildings ///


	//1
	glPushMatrix();
	glTranslatef(01.0, -0.0, 0.0);
	glColor3f(01., 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-2.8, 01.0, 0.0);
	glVertex3f(-1.5, 01.0, 0.0);
	glVertex3f(-1.5, 03.0, 0.0);
	glVertex3f(-2.8, 03.0, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(01.0, -0.0, 0.0);
	glColor3f(0.6, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(-1.5, 03.0, 0.0);
	glVertex3f(-1.5, 01.0, 0.0);
	glVertex3f(-1.2, 01.0, 0.0);
	glVertex3f(-1.2, 2.6, 0.0);
	glEnd();
	glPopMatrix();


	//2

	glPushMatrix();
	glTranslatef(0.950, -0.0, 0.0);
	glColor3f(0.0, 0.80, 0.3);
	glBegin(GL_POLYGON);
	glVertex3f(-1.1, 01.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 03.4, 0.0);
	glVertex3f(-1.1, 03.40, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.950, -0.0, 0.0);
	glColor3f(0.0, 0.60, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 03.4, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glVertex3f(0.2, 1.0, 0.0);
	glVertex3f(0.2, 3.2, 0.0);
	glEnd();
	glPopMatrix();


	//3


	glPushMatrix();
	glTranslatef(01.0, -0.0, 0.0);
	glColor3f(01.0, 0.80, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(0.2, 01.0, 0.0);
	glVertex3f(2.0, 1.0, 0.0);
	glVertex3f(2.0, 02.6, 0.0);
	glVertex3f(0.2, 02.6, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(01.0, -0.0, 0.0);
	glColor3f(0.80, 0.60, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(2.0, 02.6, 0.0);
	glVertex3f(2.0, 1.0, 0.0);
	glVertex3f(2.2, 1.0, 0.0);
	glVertex3f(02.2, 2.4, 0.0);
	glEnd();
	glPopMatrix();

//4



	glPushMatrix();
	glTranslatef(13.20, -0.0, 0.0);
	glColor3f(0.6, 0.20, 0.60);
	glBegin(GL_POLYGON);
	glVertex3f(-2.8, 01.0, 0.0);
	glVertex3f(-1.5, 01.0, 0.0);
	glVertex3f(-1.5, 03.3, 0.0);
	glVertex3f(-2.8, 03.3, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(13.20, -0.0, 0.0);
	glColor3f(0.4, 0.09, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(-1.5, 03.30, 0.0);
	glVertex3f(-1.5, 01.0, 0.0);
	glVertex3f(-1.32, 01.0, 0.0);
	glVertex3f(-1.32, 3.2, 0.0);
	glEnd();
	glPopMatrix();

	//5

	glPushMatrix();
	glTranslatef(13.05, -0.0, 0.0);
	glColor3f(0.90, 0.80, 0.80);
	glBegin(GL_POLYGON);
	glVertex3f(-1.1, 01.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glVertex3f(0.0, 04.8, 0.0);
	glVertex3f(-1.1, 04.8, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(13.05, -0.0, 0.0);
	glColor3f(0.70, 0.50, 0.50);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 04.8, 0.0);
	glVertex3f(0.0, 1.0, 0.0);
	glVertex3f(0.2, 1.0, 0.0);
	glVertex3f(0.2, 4.6, 0.0);
	glEnd();
	glPopMatrix();



	/// Make Cloud ///

	/// 1 ///

	if (s2>=0){
	s2=s2+.0;
	}
	if(s2>15.50){
	s2=0;
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(01.480+s2, 3.950, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.21;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(02.350+s2, 3.950, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.21;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(01.8+s2, 3.950, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.21;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(02.1+s2, 3.950, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.21;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(01.77+s2, 3.80, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.261;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(02.1+s2, 3.80, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.261;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(02.1+s2, 4.1, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.261;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.7+s2, 4.1, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.261;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


	/// 2 ///


	if (s3>=0){
	s3=s3+.001;
	}
	if(s3>15.50){
	s3=0;
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.60+s3, 4.50, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.40+s3, 4.50, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.320+s3, 4.40, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.08+s3, 4.40, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.08+s3, 4.650, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.320+s3, 4.650, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	/// 3 ///


	if (s3>=0){
	s3=s3+.001;
	}
	if(s3>35.50){
	s3=0;
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(04.40+s3, 4.50, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(05.40+s3, 4.50, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(04.68+s3, 4.40, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(05.08+s3, 4.40, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(05.08+s3, 4.650, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(04.68+s3, 4.650, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	//cloud 4



	if (s3>=0){
	s3=s3+.001;
	}
	if(s3>35.50){
	s3=0;
	}
	glPopMatrix();
	glPushMatrix();
	glTranslatef(06.40+s3, 4.50, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(07.40+s3, 4.50, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(06.68+s3, 4.40, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(07.08+s3, 4.40, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();


	glPopMatrix();
	glPushMatrix();
	glTranslatef(07.08+s3, 4.650, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();

	glPopMatrix();
	glPushMatrix();
	glTranslatef(06.68+s3, 4.650, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
	float pi=3.1416;
	float A=(i*2*pi)/50;
	float r=0.251;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x,y );
	}

	glEnd();
	glPopMatrix();



	//........................................................sun remake to circle stats here


/*
	glPushMatrix();
	//glTranslatef(6,0,0);
	glTranslatef(6.9, 4.50, 0.0);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);

	for (int i = 0; i<400; i++)
	{
	float pi = 3.1416;
	float A = (i * 2 * pi) / 100;
	float r = 0.5;
	float x = r * cos(A);
	float y = r * sin(A);
	glVertex2f(x, y);
	}

	*/

	//.........................................oval 1st standard



	glPushMatrix();
	//glTranslatef(6,0,0);
	glTranslatef(6.9, 4.5, 0.0);
	glColor3f(1.0, 0.9, 0.0);
	glBegin(GL_POLYGON);

	for (int i = 0; i<100; i++)
	{
		glPushAttrib(GL_CURRENT_BIT);
		glColor3f(.9, .9, 0.9);
		glLineWidth(2.0);

		// Draw center
		glBegin(GL_POINTS);
		glVertex2d(0, 0);
		glEnd();

		glBegin(GL_POLYGON);

		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(0.0f, 960, 600, 0.0f, 0.0f, 1.0f);

		// This should generate a circle
		for (GLfloat i = 0; i < 360; i++)
		{
			float x = cos(i*M_PI / 180.f) * 1.0; // keep the axes radius same
			float y = sin(i*M_PI / 180.f) * 0.1;
			glVertex2f(x, y);
		}


		glPopAttrib();
	}

	//...............................................
	/*glPushMatrix();
	//glTranslatef(6,0,0);
	glTranslatef(7.9, 4.5, 0.0);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);

	for (int i = 0; i<100; i++)
	{
		glPushAttrib(GL_CURRENT_BIT);
		glColor3f(.9, 0.9, 0.9);
		glLineWidth(2.0);

		// Draw center
		glBegin(GL_POINTS);
		glVertex2d(0, 0);
		glEnd();

		glBegin(GL_POLYGON);
		float M_PI = 3.1416;
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(0.0f, 960, 600, 0.0f, 0.0f, 1.0f);

		// This should generate a circle
		for (GLfloat i = 0; i < 360; i++)
		{
			float x = cos(i*M_PI / 180.f) * 1.0; // keep the axes radius same
			float y = sin(i*M_PI / 180.f) * 0.1;
			glVertex2f(x, y);
		}

		glEnd();
		glPopAttrib();
	}
	glEnd();



	*/

	//............................................................................................................................


	glPopMatrix();
	glPushMatrix();
	glTranslatef(03.480 + s1, 3.750, 0.0);
	//Rotatef(_angle, 0.0, -01.0, 0.0);
	glColor3f(01.0, 0.1, 01.0);
	glBegin(GL_POLYGON);
	for (int i = 0; i<200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 50;
		float r = 0.00;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();





	// MAke Car

	if (d1 >= 0) {
		d1 = d1 + .025;
	}
	if (d1>19.50) {
		d1 = 0;
	}


	//Make Wheel

	glPushMatrix();
	glTranslatef(17.98 - d1, -01.25, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.10, 0.10, 0.10);
	glutSolidSphere(.10, 40, 25);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(17.3 - d1, -01.25, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.10, 0.10, 0.10);
	glutSolidSphere(.10, 40, 5);
	glPopMatrix();

	//Make glass of 4th Car

	glPushMatrix();
	glTranslatef(15.40, -1.40, 0.0);
	glColor3f(0.40, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(1.77 - d1, 0.46, 0.0);
	glVertex3f(1.87 - d1, 0.63, 0.0);
	glVertex3f(2.04 - d1, 0.63, 0.0);
	glVertex3f(2.04 - d1, 0.46, 0.0);
	glEnd();
	glPopMatrix();


	//Make Body

	glPushMatrix();
	glTranslatef(15.40, -1.40, 0.0);
	glColor3f(01.70, 01.70, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(2.05 - d1, 0.15, 0.0);
	glVertex3f(1.65 - d1, 0.15, 0.0);
	glVertex3f(1.6 - d1, 0.20, 0.0);
	glVertex3f(1.60 - d1, 0.28, 0.0);
	glVertex3f(1.62 - d1, 0.28, 0.0);
	glVertex3f(1.64 - d1, 0.40, 0.0);
	glVertex3f(1.76 - d1, 0.48, 0.0);
	glVertex3f(1.86 - d1, 0.64, 0.0);
	glVertex3f(2.05 - d1, 0.64, 0.0);


	glPushMatrix();
	glTranslatef(15.40, -1.40, 0.0);
	glColor3f(0.690, 0.690, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(2.05 - d1, 0.74, 0.0);
	glVertex3f(2.75 - d1, 0.74, 0.0);
	glVertex3f(2.75 - d1, 0.14, 0.0);
	glVertex3f(2.05 - d1, 0.14, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(15.40, -1.40, 0.0);
	glColor3f(0.140, 0.140, 0.140);
	glBegin(GL_POLYGON);
	glVertex3f(2.77 - d1, 0.19, 0.0);
	glVertex3f(2.75 - d1, 0.19, 0.0);
	glVertex3f(2.75 - d1, 0.18, 0.0);
	glVertex3f(2.77 - d1, 0.18, 0.0);
	glEnd();
	glPopMatrix();



	//Make another car

	if (e1 >= 0) {
		e1 = e1 + .0295;
	}
	if (e1>17.50) {
		e1 = 0;
	}


	//Make Wheel
	glPushMatrix();
	glTranslatef(14.9 - e1, -1.18, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.0, 0.0, 0.0);
	glutSolidSphere(.120, 40, 25);
	glPopMatrix();



	glPushMatrix();
	glTranslatef(14.2 - e1, -1.18, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(0.0, 0.0, 0.0);
	glutSolidSphere(.120, 40, 5);
	glPopMatrix();



	// Car1 Body

	glPushMatrix();
	glTranslatef(12.0, -1.30, 0.0);
	glColor3f(01.0, 0.0, 01.0);
	glBegin(GL_POLYGON);
	glVertex3f(3.2 - e1, 0.15, 0.0);
	glVertex3f(2.9 - e1, 0.15, 0.0);
	glVertex3f(2.9 - e1, 0.45, 0.0);
	glVertex3f(3.25 - e1, 0.32, 0.0);
	glVertex3f(3.25 - e1, 0.20, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(12.0, -1.30, 0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.80, 0.0, 0.80);
	glVertex3f(2.16 - e1, 0.48, 0.0);
	glVertex3f(2.26 - e1, 0.40, 0.0);
	glVertex3f(1.74 - e1, 0.26, 0.0);
	glVertex3f(1.74 - e1, 0.33, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(12.0, -1.30, 0.0);
	glColor3f(01.0, 0.0, 01.0);
	glBegin(GL_POLYGON);
	glVertex3f(2.26 - e1, 0.15, 0.0);
	glVertex3f(1.75 - e1, 0.15, 0.0);
	glVertex3f(1.7 - e1, 0.20, 0.0);
	glVertex3f(1.70 - e1, 0.26, 0.0);
	glVertex3f(1.74 - e1, 0.26, 0.0);
	glVertex3f(1.74 - e1, 0.33, 0.0);
	glVertex3f(2.16 - e1, 0.48, 0.0);
	glVertex3f(2.26 - e1, 0.40, 0.0);
	glEnd();
	glPopMatrix();


	//Glass


	glPushMatrix();
	glTranslatef(12.0, -1.30, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(2.26 - e1, 0.41, 0.0);
	glVertex3f(2.16 - e1, 0.485, 0.0);
	glVertex3f(2.295 - e1, 0.69, 0.0);
	glVertex3f(2.35 - e1, 0.67, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(12.0, -1.30, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(2.27 - e1, 0.41, 0.0);
	glVertex3f(2.36 - e1, 0.66, 0.0);
	glVertex3f(2.55 - e1, 0.66, 0.0);
	glVertex3f(2.56 - e1, 0.41, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(12.0, -1.30, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(2.57 - e1, 0.41, 0.0);
	glVertex3f(2.58 - e1, 0.66, 0.0);
	glVertex3f(2.75 - e1, 0.66, 0.0);
	glVertex3f(2.88 - e1, 0.41, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(12.0, -1.30, 0.0);
	glColor3f(0.80, 0.0, 0.80);
	glBegin(GL_POLYGON);
	glVertex3f(2.75 - e1, 0.66, 0.0);
	glVertex3f(2.36 - e1, 0.66, 0.0);
	glVertex3f(2.285 - e1, 0.70, 0.0);;
	glVertex3f(2.75 - e1, 0.70, 0.0);
	glEnd();
	glPopMatrix();

	//make door

	glPushMatrix();
	glTranslatef(12.0, -1.30, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(2.54 - e1, 0.41, 0.0);
	glVertex3f(2.56 - e1, 0.41, 0.0);
	glVertex3f(2.40 - e1, 0.15, 0.0);
	glVertex3f(2.42 - e1, 0.15, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(12.0, -01.30, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(2.85 - e1, 0.41, 0.0);
	glVertex3f(2.87 - e1, 0.41, 0.0);
	glVertex3f(2.70 - e1, 0.15, 0.0);
	glVertex3f(2.72 - e1, 0.15, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(12.0, -01.30, 0.0);
	glColor3f(01.0, 0.0, 01.0);
	glBegin(GL_POLYGON);
	glVertex3f(2.9 - e1, 0.15, 0.0);
	glVertex3f(2.26 - e1, 0.15, 0.0);
	glVertex3f(2.26 - e1, 0.40, 0.0);
	glVertex3f(2.16 - e1, 0.48, 0.0);
	glVertex3f(2.3 - e1, 0.70, 0.0);
	glVertex3f(2.75 - e1, 0.70, 0.0);
	glVertex3f(2.9 - e1, 0.45, 0.0);
	glEnd();
	glPopMatrix();



	//Make 2nd Car


	//glColor3f(0.0, 01.0, 01.0);
	if (b1 >= 0) {
		b1 = b1 + .025;
	}
	if (b1>20.50) {
		b1 = 0;
	}

	//Make Wheel
	glPushMatrix();
	glTranslatef(20.20 - b1, -01.09, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(01.0, 01.0, 01.0);
	glutSolidSphere(.10, 40, 25);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(20.75 - b1, -1.09, 0.0);
	glRotatef(_angle, 0.0, 0.0, -1.0);
	glColor3f(01.0, 01.0, 01.0);
	glutSolidSphere(.10, 40, 5);
	glPopMatrix();


	//Make body

	glPushMatrix();
	glTranslatef(18.0, -1.25, 0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.10, 0.10, 0.10);
	glVertex3f(2.16 - b1, 0.48, 0.0);
	glVertex3f(2.26 - b1, 0.40, 0.0);
	glVertex3f(1.83 - b1, 0.32, 0.0);
	glVertex3f(1.84 - b1, 0.40, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(18.0, -1.25, 0.0);
	glColor3f(0.10, 0.10, 0.10);
	glBegin(GL_POLYGON);
	glVertex3f(2.26 - b1, 0.15, 0.0);
	glVertex3f(1.85 - b1, 0.15, 0.0);
	glVertex3f(1.8 - b1, 0.20, 0.0);
	glVertex3f(1.80 - b1, 0.32, 0.0);
	glVertex3f(1.82 - b1, 0.32, 0.0);
	glVertex3f(1.84 - b1, 0.40, 0.0);
	glVertex3f(2.16 - b1, 0.48, 0.0);
	glVertex3f(2.26 - b1, 0.415, 0.0);
	glEnd();
	glPopMatrix();

	// glass of 2nd car

	glPushMatrix();
	glTranslatef(18.0, -1.25, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(2.26 - b1, 0.43, 0.0);
	glVertex3f(2.165 - b1, 0.485, 0.0);
	glVertex3f(2.265 - b1, 0.67, 0.0);
	glVertex3f(2.32 - b1, 0.64, 0.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(18.0, -1.25, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(2.27 - b1, 0.43, 0.0);
	glVertex3f(2.33 - b1, 0.64, 0.0);
	glVertex3f(2.50 - b1, 0.64, 0.0);
	glVertex3f(2.50 - b1, 0.43, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(18.0, -1.25, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(2.51 - b1, 0.43, 0.0);
	glVertex3f(2.51 - b1, 0.64, 0.0);
	glVertex3f(2.70 - b1, 0.64, 0.0);
	glVertex3f(2.70 - b1, 0.43, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(18.0, -1.25, 0.0);
	glColor3f(0.4, 0.40, 0.40);
	glBegin(GL_POLYGON);
	glVertex3f(2.71 - b1, 0.43, 0.0);
	glVertex3f(2.71 - b1, 0.64, 0.0);
	glVertex3f(2.83 - b1, 0.64, 0.0);
	glVertex3f(2.91 - b1, 0.45, 0.0);
	glVertex3f(2.91 - b1, 0.43, 0.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(18.0, -1.25, 0.0);
	glColor3f(0.10, 0.10, 0.10);
	glBegin(GL_POLYGON);
	glVertex3f(2.26 - b1, 0.15, 0.0);
	glVertex3f(2.26 - b1, 0.40, 0.0);
	glVertex3f(2.16 - b1, 0.48, 0.0);
	glVertex3f(2.26 - b1, 0.68, 0.0);
	glVertex3f(2.84 - b1, 0.68, 0.0);
	glVertex3f(2.94 - b1, 0.45, 0.0);
	glVertex3f(2.94 - b1, 0.20, 0.0);
	glVertex3f(2.96 - b1, 0.20, 0.0);
	glVertex3f(2.96 - b1, 0.18, 0.0);
	glVertex3f(2.88 - b1, 0.15, 0.0);
	glEnd();
	glPopMatrix();



	//Make 2nd Road

	glPushMatrix();
	glTranslatef(-0.7, -01.40, 0.0);
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_POLYGON);
	glVertex3f(-10.8, 0.0, 0.0);
	glVertex3f(16.5, 0.0, 0.0);
	glVertex3f(16.5, 0.80, 0.0);
	glVertex3f(-10.8, 0.80, 0.0);
	glEnd();
	glPopMatrix();


	//Make Footpath 2

	//Make ground


	//.....................................................campus background selection


	//top circle golla top tobbar
	

	//.......................................................................................................................................................

	//footer-Ground

	

	//make moon

	//........................................................... footer tree starts from here

	//make tree 4



	//make tree 5


	//glScalef
	// make tree 6
	
	// make tree 7
	

	// make tree 8
	

	// make tree 9
	

	// make tree 10
	

	//..........................................................footer tree ends here


	//..............................................Window codes starts from here

	//red windows

	//

	//make windows for green building


	glutSwapBuffers();
}

void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}
	_ang_tri += 2.0f;
	if (_ang_tri > 360) {
		_ang_tri -= 360;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed

						 //Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}





int main(int argc, char** argv) {


	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1280, 1000);

	//Create the window
	glutCreateWindow("AIUB campus view");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);
	//glutIdleFunc(idle);
	glutTimerFunc(25, update, 0);

	glutMainLoop();
	return 0;
}
