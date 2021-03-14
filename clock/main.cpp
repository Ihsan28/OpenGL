#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI       3.14159265358979323846

GLfloat h = 0.0f;
GLfloat m = 0.0f;
GLfloat s = 0.0f;

void Idle()
{
    glutPostRedisplay();
}

static void display(void)
{
    glScalef(10,10,0);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //glTranslated(-0.135, 0.68, 0);

    int i;
	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.099f;
	int triangleAmount = 60; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
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
    glFlush();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutIdleFunc(Idle);
	glutMainLoop();           // Enter the event-processing loop

	return 0;
}
