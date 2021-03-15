#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
GLfloat j = 0.0f;
GLfloat h = 0.0f;
GLfloat m = 0.0f;
GLfloat s = 0.0f;
GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.01f;
GLfloat speed1 = 0.02f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.015f;

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void update(int value) {

    if(position >1.6)
        position = -1.0f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {
                                //used in ship 1 copied

    if(position1 <-1.0)
        position1 = 1.6f;

    position1 -= speed1; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update2(int value) {

    if(position2 >1.7)
        position2 = -1.0f;

    position2 += speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void screen()
{
    gluOrtho2D(-2,2,-2,2);
}

void display() {

    //gluOrtho2D(-1.4,1,-1,1);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glBegin(GL_QUADS);
    glColor3ub(10, 16, 43);
    glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);    // sky block
    glEnd();


	glBegin(GL_QUADS);
    glColor3ub(33, 33, 33);
    glVertex2f(1.0f, -0.02f);
    glVertex2f(-1.0f, -0.02f);    // Port block
	glVertex2f(-1.0f, -0.06f);
	glVertex2f(1.0f, -0.06);
    glEnd();


	glBegin(GL_QUADS);
    glColor3ub(232, 232, 198);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(-1.0f, 0.0f);    // Port block up space
	glVertex2f(-1.0f, -0.02f);
	glVertex2f(1.0f, -0.02f);
    glEnd();


	glBegin(GL_LINES);              // x,y axis
	glLineWidth(1.0);
	glColor3ub(255, 255, 255);
	glVertex2f(-1.0f, 0.0f);    // port block up line
	glVertex2f(1.0f, 0.0f);
	glEnd();
	  // Render now

	glBegin(GL_QUADS);
    glColor3ub(2, 41, 107);
    glVertex2f(1.0f, -0.06);     // Water block
	glVertex2f(-1.0f, -0.06f);
	glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();


    int i;
	GLfloat x=.8f; GLfloat y=.8f; GLfloat radius =.07f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
    glColor3ub(253, 195, 86);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),       // The bright full moon
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(10, 70, 120);
    glVertex2f(0.76f, 0.05f);
    glVertex2f(0.45f, 0.05f);    // Port Transportation vehicle(truck) back body
	glVertex2f(0.45f, 0.03f);
	glVertex2f(0.76f, 0.03f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(120, 70, 120);
    glVertex2f(0.82f, 0.11f);
    glVertex2f(0.77f, 0.11f);    // Port Transportation vehicle(truck) front body
	glVertex2f(0.76f, 0.03f);
	glVertex2f(0.85f, 0.03f);
	glVertex2f(0.85f, 0.05f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(229, 233, 254);
    glVertex2f(0.81f, 0.1f);
    glVertex2f(0.784f, 0.1f);    // Port Transportation vehicle(truck) front body window
	glVertex2f(0.78f, 0.07f);
	glVertex2f(0.82f, 0.07f);
    glEnd();



	x=0.8f; y=0.02f; radius =.025f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(56, 53, 56);
		glVertex2f(x, y);           // Port Main vehicle tyre 1
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=0.8f; y=0.02f; radius =.01f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(199, 200, 204);
		glVertex2f(x, y);           // Port Main vehicle tyre 1 ring
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=0.73f; y=0.019f; radius =.024f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(56, 53, 56);
		glVertex2f(x, y);           // Port Main vehicle tyre 2
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=0.73f; y=0.019f; radius =.008f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(199, 200, 204);
		glVertex2f(x, y);           // Port Main vehicle tyre 2 ring
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=0.54f; y=0.019f; radius =.024f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(56, 53, 56);
		glVertex2f(x, y);           // Port Main vehicle tyre 3
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=0.54f; y=0.019f; radius =.008f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(199, 200, 204);
		glVertex2f(x, y);           // Port Main vehicle tyre 3 ring
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=0.49f; y=0.019f; radius =.024f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(56, 53, 56);
		glVertex2f(x, y);           // Port Main vehicle tyre 4
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	x=0.49f; y=0.019f; radius =.008f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(199, 200, 204);
		glVertex2f(x, y);           // Port Main vehicle tyre 4 ring
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glTranslated(.3,0,0);
    glScalef(1.3,1.3,0);

	glBegin(GL_POLYGON);
    glColor3ub(139, 54, 10);
    glVertex2f(-0.76f, 0.08f);
    glVertex2f(-0.96f, 0.08f);
    glVertex2f(-0.96f, 0.0f);    // Port Headquarter building block 1
	glVertex2f(-0.76f, 0.0f);

    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(146, 68, 29);
    glVertex2f(-0.76f, 0.16f);    // Port Headquarter building block 2
	glVertex2f(-0.96f, 0.16f);
	glVertex2f(-0.96f, 0.08f);
	glVertex2f(-0.76f, 0.08f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(139, 44, 40);
    glVertex2f(-0.8f, 0.38f);    // Port Headquarter building block 3 round
	glVertex2f(-0.96f, 0.38f);
	glVertex2f(-0.96f, 0.16f);
	glVertex2f(-0.8f, 0.16f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(229, 233, 254);
    glVertex2f(-0.8f, 0.38f);    // Port Headquarter building block 3 round front side
	glVertex2f(-0.85f, 0.38f);
	glVertex2f(-0.85f, 0.16f);
	glVertex2f(-0.8f, 0.16f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(203, 202, 201);
    glVertex2f(-0.88f, 0.7f); // Port Headquarter building block top round triangle
	glVertex2f(-0.96f, 0.38f);
	glVertex2f(-0.8f, 0.38f);
    glEnd();

    glLoadIdentity();

    ////////////////////
    ////////////////////
    //CLOCK ON TOP

    glScalef(1.2,1.2,0);
    glTranslated(-0.7f, 0.55f,0.0f);
    //glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	//glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //glTranslated(-0.135, 0.68, 0);


	 x=0.0f; y=0.0f;  radius =.099f;
	triangleAmount = 60; //# of triangles used to draw circle
	 twicePi = 2.0f * PI;
    glColor3ub(56, 53, 56);

	glBegin(GL_POLYGON);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),       // main circle
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

            int sec=60;
            x=0.0f;
            y=0.0f;
            radius=.098;
            glColor3ub(115, 121, 160);

            glBegin(GL_TRIANGLES);
		for(i = 0; i <= sec;i++) {
            glVertex2f(0.0f,0.0f);
			glVertex2f(
                x + (radius * cos(i *  twicePi / sec)),       // sec lining
			    y + (radius * sin(i * twicePi / sec))
			);
			glVertex2f(
                .001f + x + (radius * cos(i *  twicePi / sec)),
			    .0015f + y + (radius * sin(i * twicePi / sec))
			);
		}
        glEnd();

        glBegin(GL_TRIANGLE_STRIP);
        radius=.1;
        sec=39;
        glColor3ub(2, 131, 135);
		for(i = 0; i <= sec;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / sec)),       // Main circle round
			    y + (radius * sin(i * twicePi / sec))
			);
		}
        glEnd();


		radius =.08f;
		glColor3ub(73, 61, 83);
		triangleAmount = 12;
		glBegin(GL_POLYGON);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),       // minute circle/polygon
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

		radius =.06f;
		glColor3ub(25, 121, 86);
		triangleAmount = 4;
		glBegin(GL_POLYGON);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),       // hour circle/square
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
        glEnd();

        //////////////
    glPushMatrix();
    glRotatef(h,0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glColor3ub(157, 160, 149);
    glVertex2f(0.06f, 0.0f);            //hour
    glVertex2f( 0.03f, -0.0055f);
    glVertex2f( 0.0f, -0.005f);
    glVertex2f( 0.0f, 0.005f);
    glVertex2f( 0.03f, 0.0055f);
    glEnd();
    h-=.000000463;
    //h-=.002666f;
    glPopMatrix();

    glPushMatrix();
    glRotatef(m,0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glColor3ub(167, 170, 159);
    glVertex2f(0.0f, 0.08f);            //min
    glVertex2f(-0.0055f, 0.04f);
    glVertex2f(-0.005f, 0.0f);
    glVertex2f(0.005f, 0.0f);
    glVertex2f(0.0055f, 0.04f);
    glEnd();
    m-=.000027777;
    glPopMatrix();

    glPushMatrix();
    glRotatef(s,0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glColor3ub(177, 180, 169);
    glVertex2f(0.0f, 0.1f);             //sec
    glVertex2f( -0.005f, 0.0f);
    glVertex2f( 0.0f, 0.005f);
    glEnd();
    s-=.00166666f;
    glPopMatrix();

        //////////////


		radius =.01f;
		glColor3ub(25, 121, 86);
		triangleAmount = 4;
		glBegin(GL_POLYGON);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),       // center mini circle/square
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

		radius =.011f;
		glColor3ub(56, 53, 56);
		triangleAmount = 4;
		glBegin(GL_POLYGON);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),       // center mini circle/square under
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

    glLoadIdentity();



    /////////////////////
    /////////////////////


    glTranslated(.1, 0, 0);
	glScalef(1.1,1.1,0);
    glBegin(GL_POLYGON);
    glColor3ub(250, 171, 6);
    glVertex2f(0.04f, 0.4f);    // Port Main crane body
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.04f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(224, 122, 23);
    glVertex2f(0.02f, 0.44f);    // Port Main crane Head
	glVertex2f(-0.04f, 0.44f);
	glVertex2f(-0.04f, 0.4f);
	glVertex2f(0.04f, 0.4f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(250, 171, 6);
    glVertex2f(0.4f, 0.5f);
    glVertex2f(0.02f, 0.44f);    // Port Main crane Hand
	glVertex2f(0.04f, 0.4f);
    glEnd();


    x=0.4f; y=0.5f; radius =.02f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 235, 143);
		glVertex2f(x, y);           // Port Main crane Hand end round
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(203, 203, 203);
	glVertex2f(0.4f, 0.5f);    // Main crane rope hanger
	glVertex2f(0.4f, 0.3f);
	glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(150, 225, 252);
    glVertex2f(0.45f, 0.3f);
    glVertex2f(0.35f, 0.3f);    // Port Main crane Hanging Container
	glVertex2f(0.35f, 0.26f);
	glVertex2f(0.45f, 0.26f);
    glEnd();


	glLoadIdentity();

	// Port Main crane copied to new place
	//port new main crane
	glTranslatef(-.6,0,0);
	glScalef(.8,.8,0);

	glBegin(GL_POLYGON);
    glColor3ub(250, 171, 6);
    glVertex2f(0.04f, 0.4f);    // Port Main crane body
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.04f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(224, 122, 23);
    glVertex2f(0.02f, 0.44f);    // Port Main crane Head
	glVertex2f(-0.04f, 0.44f);
	glVertex2f(-0.04f, 0.4f);
	glVertex2f(0.04f, 0.4f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(250, 171, 6);
    glVertex2f(0.4f, 0.5f);
    glVertex2f(0.02f, 0.44f);    // Port Main crane Hand
	glVertex2f(0.04f, 0.4f);
    glEnd();


    x=0.4f; y=0.5f; radius =.02f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 235, 143);
		glVertex2f(x, y);           // Port Main crane Hand end round
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glBegin(GL_LINES);
	glColor3ub(203, 203, 203);
	glVertex2f(0.4f, 0.5f);    // Main crane rope hanger
	glVertex2f(0.4f, 0.3f);
	glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(150, 225, 252);
    glVertex2f(0.45f, 0.3f);
    glVertex2f(0.35f, 0.3f);    // Port Main crane Hanging Container
	glVertex2f(0.35f, 0.26f);
	glVertex2f(0.45f, 0.26f);
    glEnd();


	glLoadIdentity();
	// new main crane end

	glBegin(GL_POLYGON);
    glColor3ub(234, 89, 63);
    glVertex2f(0.26f, 0.04f);
    glVertex2f(0.16f, 0.04f);    // Port Main crane on loading container 1
	glVertex2f(0.16f, 0.0f);
	glVertex2f(0.26f, 0.0);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(234, 89, 63);
    glVertex2f(0.4f, 0.04f);
    glVertex2f(0.28f, 0.04f);    // Port Main crane on loading container 2
	glVertex2f(0.28f, 0.0f);
	glVertex2f(0.4f, 0.0);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(10, 170, 120);
    glVertex2f(0.32f, 0.08f);
    glVertex2f(0.22f, 0.08f);    // Port Main crane on loading container 3
	glVertex2f(0.22f, 0.04f);
	glVertex2f(0.32f, 0.04f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(67, 94, 114);
    glVertex2f(-0.2f, 0.0f);    // ship body 1
	glVertex2f(-.72f, 0.0f);
	glVertex2f(-0.64f, -0.1f);
	glVertex2f(-0.24f, -0.1f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(73, 61, 83);
    glVertex2f(-0.2f, 0.06f);    // ship 1 body block
	glVertex2f(-.33f, 0.06f);
	glVertex2f(-0.33f, -0.0f);
	glVertex2f(-0.2f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(177, 176, 174);
    glVertex2f(-0.2f, 0.06f);    // ship 1 body block top
	glVertex2f(-.2f, 0.12f);
	glVertex2f(-0.25f, 0.12f);
	glVertex2f(-0.25f, 0.06f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(251, 179, 12);
    glVertex2f(-0.29f, 0.12f);    // ship 1 crane body
	glVertex2f(-.32f, 0.12f);
	glVertex2f(-0.32f, 0.06f);
	glVertex2f(-0.29f, 0.06f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(224, 122, 23);
    glVertex2f(-0.28f, 0.15f);    // ship 1 crane head
	glVertex2f(-.3f, 0.15f);
	glVertex2f(-0.31f, 0.14f);
	glVertex2f(-0.32f, 0.12f);
	glVertex2f(-0.28f, 0.12f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(250, 171, 6);
    glVertex2f(-0.3f, 0.15f);    // ship 1 crane hand
	glVertex2f(-.47f, 0.21f);
	glVertex2f(-0.31f, 0.14f);
    glEnd();


	//ship 1 crane hand top circle
    x=-0.47f; y=0.21f; radius =.01f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(250, 183, 76);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//glLineWidth(0.01);
	glBegin(GL_LINES);// x,y axis
	glColor3ub(203, 203, 203);
	glVertex2f(-0.47f, 0.21f);    // crane hanging rope
	glVertex2f(-0.47f, 0.08f);
	glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(234, 89, 63);
    glVertex2f(-0.48f, 0.04f);    // ship 1 container 1
	glVertex2f(-.58f, 0.04f);
	glVertex2f(-0.58f, 0.0f);
	glVertex2f(-0.48f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(150, 225, 252);
    glVertex2f(-0.34f, 0.04f);    // ship 1 container 2
	glVertex2f(-.46f, 0.04f);
	glVertex2f(-0.46f, 0.0f);
	glVertex2f(-0.34f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(10, 170, 120);
    glVertex2f(-0.42f, 0.08f);    // ship 1 container 3
	glVertex2f(-.52f, 0.08f);
	glVertex2f(-0.52f, 0.04f);
	glVertex2f(-0.42f, 0.04f);
    glEnd();


	//ship 1 copied to new coordinate
	//ship 1 with new center
    glPushMatrix();
	glTranslatef(position1+0.2,-0.2,0);

	glBegin(GL_POLYGON);
    glColor3ub(67, 94, 114);
    glVertex2f(-0.2f, 0.0f);    // ship body 1
	glVertex2f(-.72f, 0.0f);
	glVertex2f(-0.64f, -0.1f);
	glVertex2f(-0.24f, -0.1f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(73, 61, 83);
    glVertex2f(-0.2f, 0.06f);    // ship 1 body block
	glVertex2f(-.33f, 0.06f);
	glVertex2f(-0.33f, -0.0f);
	glVertex2f(-0.2f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(177, 176, 174);
    glVertex2f(-0.2f, 0.06f);    // ship 1 body block top
	glVertex2f(-.2f, 0.12f);
	glVertex2f(-0.25f, 0.12f);
	glVertex2f(-0.25f, 0.06f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(251, 179, 12);
    glVertex2f(-0.29f, 0.12f);    // ship 1 crane body
	glVertex2f(-.32f, 0.12f);
	glVertex2f(-0.32f, 0.06f);
	glVertex2f(-0.29f, 0.06f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(224, 122, 23);
    glVertex2f(-0.28f, 0.15f);    // ship 1 crane head
	glVertex2f(-.3f, 0.15f);
	glVertex2f(-0.31f, 0.14f);
	glVertex2f(-0.32f, 0.12f);
	glVertex2f(-0.28f, 0.12f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(250, 171, 6);
    glVertex2f(-0.3f, 0.15f);    // ship 1 crane hand
	glVertex2f(-.47f, 0.21f);
	glVertex2f(-0.31f, 0.14f);
    glEnd();


	//ship 1 crane hand top circle
    x=-0.47f; y=0.21f; radius =.01f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(250, 183, 76);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	//glLineWidth(0.01);
	glBegin(GL_LINES);// x,y axis
	glColor3ub(203, 203, 203);
	glVertex2f(-0.47f, 0.21f);    // crane hanging rope
	glVertex2f(-0.47f, 0.08f);
	glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(234, 89, 63);
    glVertex2f(-0.48f, 0.04f);    // ship 1 container 1
	glVertex2f(-.58f, 0.04f);
	glVertex2f(-0.58f, 0.0f);
	glVertex2f(-0.48f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(150, 225, 252);
    glVertex2f(-0.34f, 0.04f);    // ship 1 container 2
	glVertex2f(-.46f, 0.04f);
	glVertex2f(-0.46f, 0.0f);
	glVertex2f(-0.34f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(10, 170, 120);
    glVertex2f(-0.42f, 0.08f);    // ship 1 container 3
	glVertex2f(-.52f, 0.08f);
	glVertex2f(-0.52f, 0.04f);
	glVertex2f(-0.42f, 0.04f);
    glEnd();

    glPopMatrix();

    //glLoadIdentity();





	//ship 2
	glPushMatrix();
    glTranslatef(position-.6,0,0);

	glBegin(GL_POLYGON);
    glColor3ub(118, 2, 2);
    glVertex2f(0.6f, -0.4f);    // ship 2 main body
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.0f, -0.43f);
	glVertex2f(0.06f, -0.5f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.6f, -0.43f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(0, 115, 56);
    glVertex2f(0.54f, -0.37f);    // ship 2 container 1
	glVertex2f(0.06f, -0.37f);
	glVertex2f(0.06f, -0.4f);
	glVertex2f(0.54f, -0.4f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(224, 171, 59);
    glVertex2f(0.53f, -0.34f);    // ship 2 container 2
	glVertex2f(0.07f, -0.34f);
	glVertex2f(0.07f, -0.37f);
	glVertex2f(0.53f, -0.37f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.14f, -0.24f);    // ship 2 smoke pipe left
	glVertex2f(0.11f, -0.24f);
	glVertex2f(0.11f, -0.34f);
	glVertex2f(0.14f, -0.34f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.34f, -0.24f);    // ship 2 smoke pipe mid
	glVertex2f(0.26f, -0.24f);
	glVertex2f(0.26f, -0.34f);
	glVertex2f(0.34f, -0.34f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.49f, -0.24f);    // ship 2 smoke pipe right
	glVertex2f(0.46f, -0.24f);
	glVertex2f(0.46f, -0.34f);
	glVertex2f(0.49f, -0.34f);
    glEnd();

    glPopMatrix();

	//ship 2 copied different position
	//new coordinate
	//ship 2 new center with 1.5 times size
	glPushMatrix();
    glTranslatef(position2-.7,0-.2,0);
	//glTranslatef(-0.9,0,0);
	glScalef(1.2,1.2,0);

	glBegin(GL_POLYGON);
    glColor3ub(118, 2, 2);
    glVertex2f(0.6f, -0.4f);    // ship 2 main body
	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.0f, -0.43f);
	glVertex2f(0.06f, -0.5f);
	glVertex2f(0.54f, -0.5f);
	glVertex2f(0.6f, -0.43f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(0, 115, 56);
    glVertex2f(0.54f, -0.37f);    // ship 2 container 1
	glVertex2f(0.06f, -0.37f);
	glVertex2f(0.06f, -0.4f);
	glVertex2f(0.54f, -0.4f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(224, 171, 59);
    glVertex2f(0.53f, -0.34f);    // ship 2 container 2
	glVertex2f(0.07f, -0.34f);
	glVertex2f(0.07f, -0.37f);
	glVertex2f(0.53f, -0.37f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.14f, -0.24f);    // ship 2 smoke pipe left
	glVertex2f(0.11f, -0.24f);
	glVertex2f(0.11f, -0.34f);
	glVertex2f(0.14f, -0.34f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.34f, -0.24f);    // ship 2 smoke pipe mid
	glVertex2f(0.26f, -0.24f);
	glVertex2f(0.26f, -0.34f);
	glVertex2f(0.34f, -0.34f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(30, 30, 30);
    glVertex2f(0.49f, -0.24f);    // ship 2 smoke pipe right
	glVertex2f(0.46f, -0.24f);
	glVertex2f(0.46f, -0.34f);
	glVertex2f(0.49f, -0.34f);
    glEnd();

    glPopMatrix();
	//glLoadIdentity();
	//ship 2 new end

    glBegin(GL_QUADS);
    glColor3ub(30, 30, 30);
    glVertex2f(-0.1f, 0.55f);    // port turbine body
	glVertex2f(-0.17f, 0.55f);
	glVertex2f(-0.17f, 0.0f);
	glVertex2f(-0.1f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(30, 30, 30);
    glVertex2f(-0.135f, 0.68f);    //port turbine top
	glVertex2f(-0.17f, 0.55f);
	glVertex2f(-0.1f, 0.55f);
    glEnd();

    glPushMatrix();
    glTranslated(-0.135, 0.68, 0);

    glRotatef(j,0.0,0.0,1.0);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.15f, 0.06f);
    glVertex2f( 0.07f, 0.14f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.13f, 0.09f);
    glVertex2f( -0.15f, -0.01f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.02f, -0.15f);
    glVertex2f( 0.13f, -0.12f);
    glEnd();

    glPopMatrix();
    j-=0.2f;
    glLoadIdentity();

    glFlush();

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint

	glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update1, 0);
	glutTimerFunc(100, update2, 0);

	glutIdleFunc(Idle);
	glutMainLoop();           // Enter the event-processing loop

	return 0;
}
