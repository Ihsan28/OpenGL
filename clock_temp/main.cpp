#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

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
	int triangleAmount = 60;
	GLfloat twicePi = 2.0f * PI;
    glColor3ub(25, 210, 160);

	glBegin(GL_POLYGON);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),       // main circle
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();

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

	glEnd();

	glPushMatrix();
    glRotatef(s,0.0,0.0,1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(252, 170, 70);
    glVertex2f(0.0f, 0.1f);
    glVertex2f( -0.01f, 0.0f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    s-=.00166666f;
    glPopMatrix();

    glPushMatrix();
    glRotatef(m,0.0,0.0,1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(25, 170, 170);
    glVertex2f(0.0f, 0.08f);
    glVertex2f( -0.01f, 0.0f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    m-=.000027777;
    glPopMatrix();

    glPushMatrix();
    glRotatef(h,0.0,0.0,1.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(25, 170, 70);
    glVertex2f(0.0f, 0.06f);
    glVertex2f( -0.01f, 0.0f);
    glVertex2f( 0.0f, 0.01f);
    glEnd();
    h-=.000000463;
    glPopMatrix();



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
