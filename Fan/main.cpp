#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI       3.14159265358979323846

GLfloat f = 0.0f;
GLfloat s = 0.2f;

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 's':
    s = 0.0f;
    break;
case 'r':
    s = 0.2f;
    break;
case 'i':
    s+=.05f;
    break;
case 'd':
    s-=.05f;
    break;
glutPostRedisplay();
	}
}

void Idle()
{
    glutPostRedisplay();
}

static void display(void)
{
    glTranslated(0, 0, 0);
    glScalef(1.5,1.5,0);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	int i;
	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.1f;
	int triangleAmount = 60; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_QUADS);
    glColor3ub(150, 160, 200);
    glVertex2f(0.1f, 0.5f);
    glVertex2f( -0.1f, 0.5f);
    glVertex2f( -0.1f, 0.3f);
    glVertex2f( 0.1f, 0.3f);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(55, 60, 90);
    glVertex2f(0.02f, 0.4f);
    glVertex2f( -0.02f, 0.4f);
    glVertex2f( -0.02f, 0.0f);
    glVertex2f( 0.02f, 0.0f);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(75,70, 100);
    glVertex2f(0.1f, 0.0f);
    glVertex2f( -0.1f, 0.0f);
    glVertex2f( -0.02f, 0.2f);
    glVertex2f( 0.02f, 0.2f);
    glEnd();

	glPushMatrix();
    glRotatef(f,0.0,0.0,1.0);

    glBegin(GL_QUADS);
    glColor3ub(155,160,190);
    glVertex2f(0.5f, 0.05f);
    glVertex2f( -0.455f, 0.05f);
    glVertex2f( -0.5f, -0.05f);
    glVertex2f( 0.455f, -0.05f);

    glVertex2f(0.04f, 0.455f);
    glVertex2f( -0.04f, 0.5f);
    glVertex2f( -0.04f, -0.455f);
    glVertex2f( 0.04f, -0.5f);

    glColor3ub(125, 100, 161);
    glVertex2f(0.14f, 0.0f);
    glVertex2f( 0.0f, 0.14f);
    glVertex2f( -0.14f, 0.0f);
    glVertex2f( 0.0f, -0.14f);
    glEnd();

    glPopMatrix();
    f-=s;


    radius =.11f;
    glColor3ub(125, 121, 161);
    triangleAmount = 100;
    glBegin(GL_POLYGON);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),       // center mini circle/square
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

		radius =.1f;
		glColor3ub(55, 60, 90);
		triangleAmount = 100;
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
    glutInitWindowSize(1280, 720);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint

	glutKeyboardFunc(handleKeypress);

	glutIdleFunc(Idle);
	glutMainLoop();           // Enter the event-processing loop

	return 0;
}
