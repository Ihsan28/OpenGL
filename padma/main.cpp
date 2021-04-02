//Padma bridge
#include <iostream>
using namespace std;
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846


void screen()
{
    gluOrtho2D(-1,1,-1,1);
}
void Idle()
{
    glutPostRedisplay();                  // marks the current window as needing to be redisplayed
}
void draw_back_angle(GLfloat b)
{
    glTranslatef(b,0,0);
    glBegin(GL_QUADS);
    glColor3ub(150, 150, 150);
    glVertex2f(-0.95f, 0.44);                 // train side block back slash
	glVertex2f(-1.0f, 0.44f);
	glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.75f, 0.1f);
    glEnd();
    glLoadIdentity();
}

void draw_forward_angle(GLfloat b)
{
    glTranslatef(b,0,0);
    glBegin(GL_QUADS);
    glColor3ub(150, 150, 150);
    glVertex2f(-0.55f, 0.44);                 // train side block forward slash
	glVertex2f(-0.6f, 0.44f);
	glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.75f, 0.1f);
    glEnd();
    glLoadIdentity();
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	int i;
	GLfloat x=.8f; GLfloat y=.8f; GLfloat radius =.09f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
    glColor3ub(254,252,215);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),       // The bright full moon
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glScalef(1,1,0);

	glBegin(GL_QUADS);
    glColor3ub(10, 16, 43);
    glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);                // sky block
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(2, 41, 107);
    glVertex2f(1.0f, 0.55);                 // Water block
	glVertex2f(-1.0f, 0.55f);
	glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(33, 33, 33);
    glVertex2f(1.0f, 0.5f);
    glVertex2f(-1.0f, 0.5f);             // bridge road block
	glVertex2f(-1.0f, 0.44f);
	glVertex2f(1.0f, 0.44);
    glEnd();

	glBegin(GL_LINES);
	glColor3ub(136, 136, 136);
	glVertex2f(-1.0f, 0.47f);                // bridge road mid line
	glVertex2f(1.0f, 0.47f);
	glEnd();


    draw_back_angle(0);
    draw_back_angle(0.4);
    draw_back_angle(0.8);          //train side railing boundary
    draw_back_angle(1.2);
    draw_back_angle(1.6);

    draw_forward_angle(0);
    draw_forward_angle(0.4);
    draw_forward_angle(0.8);          //train side railing boundary
    draw_forward_angle(1.2);
    draw_forward_angle(1.6);


    glBegin(GL_QUADS);
    glColor3ub(150, 150, 150);
    glVertex2f(-0.55f, 0.44);                 // train side block forward slash
	glVertex2f(-0.6f, 0.44f);
	glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.75f, 0.1f);
    glEnd();


	glBegin(GL_LINES);
	glColor3ub(136, 136, 136);
	glVertex2f(-1.0f, 0.1f);                // bridge mid line x axis
	glVertex2f(1.0f, 0.1f);
	glEnd();




	//glLoadIdentity();

    glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1280, 720);         // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display);              // Register display callback handler for window re-paint

	glutIdleFunc(Idle);
	glutMainLoop();                        // Enter the event-processing loop

	return 0;
}
