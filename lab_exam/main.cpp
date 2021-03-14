#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void display() {

    //gluOrtho2D(-1.4,1,-1,1);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    glScalef(10,10,0);
    //glTranslated(-0.7f, 0.55f,0.0f);

	glBegin(GL_QUADS);
    glColor3ub(110, 220, 110);
    glVertex2f(.03f, .09f);
	glVertex2f(.035f, .09f);
    glVertex2f(.035f, .075f);
    glVertex2f(.03f, .075f);    //hd left
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(110, 22, 110);
    //glVertex2f(.045f, .09f);
    //glVertex2f(.04f, .09f);
    glVertex2f(.045f, .085f);
    glVertex2f(.04f, .085f);
    glVertex2f(.035f, .085f);
	glVertex2f(.035f, .075f);    //hd right prob
    glVertex2f(.045f, .075f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(110, 22, 110);
    glVertex2f(.045f, .09f);
    glVertex2f(.04f, .09f);
    glVertex2f(.04f, .085f);
    glVertex2f(.045f, .085f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(10, 22, 110);
    glVertex2f(.035f, .075f);
    glVertex2f(.03f, .075f);
    glVertex2f(.03f, .07f);
    glVertex2f(.035f, .07f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(110, 232, 110);
    glVertex2f(.045f, .075f);
    glVertex2f(.035f, .075f);
    glVertex2f(.035f, .07f);
    glVertex2f(.045f, .07f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(110, 22, 110);
    glVertex2f(.05f, .07f);
    glVertex2f(.025f, .07f);
    glVertex2f(.025f, .065f);
    glVertex2f(.02f, .065f);
	glVertex2f(.02f, .06f);    //hd right
    glVertex2f(.025f, .06f);
    glVertex2f(.025f, .055f);
	glVertex2f(.05f, .055f);    //hd right
    glVertex2f(.05f, .06f);
    glVertex2f(.055f, .06f);
	glVertex2f(.055f, .065f);    //hd right prob
    glVertex2f(.055f, .065f);
    glVertex2f(.05f, .065f);
    glVertex2f(.05f, .07f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex2f(.055f, .07f); //mid  block side black
    glVertex2f(.05f, .07f);
    glVertex2f(.05f, .065f);
    glVertex2f(.05f, .07f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(10, 22, 110);
    glVertex2f(.045f, .065f); //mid of up block
    glVertex2f(.03f, .065f);
    glVertex2f(.03f, .06f);
    glVertex2f(.045f, .06f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 222, 110);
    glVertex2f(.05f, .055f);
    glVertex2f(.025f, .055f);
    glVertex2f(.025f, .05f);
    glVertex2f(.05f, .05f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(10, 22, 110);
    glVertex2f(.025f, .06f);
    glVertex2f(.02f, .06f);// hand
    glVertex2f(.02f, .055f);
    glVertex2f(.025f, .055f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 22, 110);
    glVertex2f(.025f, .055f);
    glVertex2f(.02f, .055f);
    glVertex2f(.02f, .05f);
    glVertex2f(.025f, .05f);
    glEnd();

    glTranslated(.03f,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(10, 22, 110);
    glVertex2f(.025f, .06f);
    glVertex2f(.02f, .06f);// hand right
    glVertex2f(.02f, .055f);
    glVertex2f(.025f, .055f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 22, 110);
    glVertex2f(.025f, .055f);
    glVertex2f(.02f, .055f);
    glVertex2f(.02f, .05f);
    glVertex2f(.025f, .05f);
    glEnd();
    glLoadIdentity();

    glScalef(10,10,0);

    glBegin(GL_POLYGON);
    glColor3ub(101, 122, 110);
    glVertex2f(.055f, .05f);
    glVertex2f(.02f, .05f);
    glVertex2f(.02f, .035f);
    glVertex2f(.055f, .035f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 12, 110);
    glVertex2f(.03f, .05f);
    glVertex2f(.025f, .05f);
    glVertex2f(.025f, .045f);
    glVertex2f(.03f, .045f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(11, 22, 110);
    glVertex2f(.05f, .05f);
    glVertex2f(.03f, .05f);
    glVertex2f(.03f, .04f);
    glVertex2f(.045f, .04f);

    glVertex2f(.045f, .045f);
    glVertex2f(.05f, .045f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 12, 110);
    glVertex2f(.03f, .045f);
    glVertex2f(.025f, .045f);
    glVertex2f(.025f, .03f);
    glVertex2f(.03f, .03f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 12, 110);
    glVertex2f(.035f, .04f);
    glVertex2f(.03f, .04f);//prob leg up
    glVertex2f(.03f, .03f);
    glVertex2f(.035f, .03f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 12, 110);
    glVertex2f(.045f, .04f);
    glVertex2f(.04f, .04f);
    glVertex2f(.04f, .03f);
    glVertex2f(.045f, .03f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 12, 110);
    glVertex2f(.05f, .045f);
    glVertex2f(.045f, .045f);
    glVertex2f(.045f, .03f);
    glVertex2f(.05f, .03f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 112, 11);
    glVertex2f(.03f, .03f);
    glVertex2f(.025f, .03f);
    glVertex2f(.025f, .025f);
    glVertex2f(.03f, .025f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(131, 132, 11);
    glVertex2f(.035f, .03f);
    glVertex2f(.03f, .03f);
    glVertex2f(.03f, .025f);
    glVertex2f(.035f, .025f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(101, 112, 11);
    glVertex2f(.045f, .03f);
    glVertex2f(.04f, .03f);
    glVertex2f(.04f, .025f);
    glVertex2f(.045f, .025f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(131, 132, 11);
    glVertex2f(.05f, .03f);
    glVertex2f(.045f, .03f);
    glVertex2f(.045f, .025f);
    glVertex2f(.05f, .025f);
    glEnd();

    glLoadIdentity();
    glFlush();

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	//glutIdleFunc(Idle);
	glutMainLoop();           // Enter the event-processing loop

	return 0;
}
