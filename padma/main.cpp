//Padma bridge
#include <iostream>
using namespace std;
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat rain_pos = 0.0f, rain_speedX=0.15f, rain_speedY=0.3f;
GLfloat day_r = 1.0f, day_g = 1.0f, day_b = 0.8f;
GLfloat sun_x = 800.0f, sun_y = 850.0f, sun_r = 1.0f, sun_g = 0.7f, sun_b = 0.0f;
GLfloat birdX=0.7f,birdY=-0.15f;

bool is_rain = false, day = true;

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':

    break;
case 'r':

    break;
case 'd':

    break;
case 'n':

    break;
glutPostRedisplay();
	}
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){

			}
    if (button == GLUT_RIGHT_BUTTON){

			}
	glutPostRedisplay();
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{
    case GLUT_KEY_UP:

break;
case GLUT_KEY_DOWN:

break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:

break;
}
glutPostRedisplay();
}

void birdMoves(int x)
{
    if (birdX < -1.00 || birdY > 1.00) {
      if (!day) return;
      birdX = 0.7;
      birdY = -0.15;
    }
    birdX-=.001;
    birdY+=.0001;

}

void bird()
{

  glScalef(1.3,1.3,0);
  glTranslatef(0,-.1,0);
  glPushMatrix();
  glTranslatef(birdX,birdY,0);
  glBegin(GL_LINES);
  //glColor3ub(0,255,255);

  glColor3f(1,0,0);
  glVertex2f(0.2f,0.8f);
  glVertex2f(0.18f,0.77f);

  //glColor3ub(255,255,255);
  glVertex2f(0.18f,0.77f);
  glVertex2f(0.15f,0.79f);

  //glColor3ub(255,255,255);
  glVertex2f(0.13f,0.8f);
  glVertex2f(0.11f,0.77f);

 // glColor3ub(255,255,255);
  glVertex2f(0.11f,0.77f);
  glVertex2f(0.08f,0.79f);

  glEnd();
  glPopMatrix();
  glLoadIdentity();
  glutTimerFunc(100,birdMoves,0);

}


void keep_raining (int v) {
   if (is_rain) {
     rain_pos -= 0.1f;
     if (rain_pos < -2.0f) {
      rain_pos = 1.0f;
     }
     glutTimerFunc(100, keep_raining, 9);
   }
}

void rain()
{
    glBegin(GL_LINES);
	glColor3ub(255,255,255);
	glVertex2f(-0.96f,1.0f);             // 1st raindrop from left
	glVertex2f(-1.0f,0.9f);

	glVertex2f(-0.76f,0.9f);             // 1st_2 raindrop from left
	glVertex2f(-0.8f,0.8f);

	glVertex2f(-0.56f,1.0f);             // 2nd raindrop from left
	glVertex2f(-0.6f,0.9f);

	glVertex2f(-0.36f,0.9f);             // 2nd_3 raindrop from left
	glVertex2f(-0.4f,0.8f);

	glVertex2f(-0.16f,1.0f);             // 3rd raindrop from left
	glVertex2f(-0.2f,0.9f);

	glVertex2f(0.02f,0.9f);             // 3rd_4 raindrop from left
	glVertex2f(-0.02f,0.8f);

	glVertex2f(0.2f,1.0f);             // 4th raindrop from left
	glVertex2f(0.16f,0.9f);

	glVertex2f(0.4f,0.9f);             // 4th_5 raindrop from left
	glVertex2f(0.36f,0.8f);

	glVertex2f(0.6f,1.0f);             // 5th raindrop from left
	glVertex2f(0.56f,0.9f);

	glVertex2f(0.8f,0.9f);             // 5th_6 raindrop from left
	glVertex2f(0.76f,0.8f);

	glVertex2f(1.0f,1.0f);             // 6th raindrop from left
	glVertex2f(0.96f,0.9f);

	glVertex2f(1.2f,0.9f);             // 6th_7 raindrop from left
	glVertex2f(1.16f,0.8f);

	glVertex2f(1.4f,1.0f);             // 7th raindrop from left
	glVertex2f(1.36f,0.9f);

	glVertex2f(1.6f,0.9f);             // 7th_8 raindrop from left
	glVertex2f(1.56f,0.8f);

	glVertex2f(1.8f,1.0f);             // 8th raindrop from left
	glVertex2f(1.76f,0.9f);

	glVertex2f(2.0f,0.9f);             // 8th_9 raindrop from left
	glVertex2f(1.96f,0.8f);
	glEnd();

	glPopMatrix();
}

void raiseMoon (int v) {
   if (sun_b == 0.0f) {
     sun_g = 1.0f; sun_b = 1.0f;
   }
   if (sun_y < 850.0f) {
     sun_y += 10.0f;
     glutTimerFunc(100, raiseMoon, 0);
   }
   else return;
}

void raiseSun (int v) {
   if (sun_b == 1.0f) {
     sun_g = 0.7f, sun_b = 0.0f;
   }
   if (sun_y < 850.0f) {
     sun_y += 10.0f;
     glutTimerFunc(100, raiseSun, 0);

   }
}

void day_night (int v) {
   if (!day) {
     if (day_r <= 0.0f && day_g <= 0.0f, day_b <= 0.0f) {

        glutTimerFunc(100, raiseMoon, 0);
        return;
     }

     if (day_g > 0.0f) day_g -= 0.03f;
     else if (day_r > 0.0f) day_r -= 0.03f;
     else if (day_b > 0.0f) day_b -= 0.03f;
     if (sun_y > 400) sun_y -= 10.0f;
     glutTimerFunc(100, day_night, 0);
   }
   else {
     if (day_r == 1.0f && day_g == 1.0f && day_b == 0.8f) {
       glutTimerFunc(100, raiseSun, 0);
      // bird();
       return;
     }
     if (day_r < 1.0f) day_r += 0.03f;
     else if (day_b < 0.8f) day_b += 0.03f;
     else if (day_g < 1.0f) day_g += 0.03f;
     if (sun_y > 400) sun_y -= 10.0f;
     glutTimerFunc(100, day_night, 0);
   }
}


void screen()
{
    gluOrtho2D(-1,1,-1,1);
}
void Idle()
{
    glutPostRedisplay();                  // marks the current window as needing to be redisplayed
}

void draw_circle (GLfloat x=0, GLfloat y=0, GLfloat rad=0.05, GLfloat r=10, GLfloat g=10, GLfloat b=100)
{
	int triangleAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(r, g, b);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
        {
            glVertex2f( x + (rad * cos(i *  twicePi / triangleAmount)),
                        y + (rad * sin(i * twicePi / triangleAmount)));
        }
	glEnd();
}

void draw_triangle (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3, GLfloat r=100, GLfloat g=100, GLfloat b=100)
{
    glBegin(GL_TRIANGLES);
    glColor3ub(r, g, b);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glEnd();
}

void draw_line (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat r=100, GLfloat g=100, GLfloat b=100 , int w=1)
{
    glLineWidth(w);
    glBegin(GL_LINES);
    glColor3ub(r, g, b);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glEnd();
}

void draw_quad (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3, GLfloat x4, GLfloat y4, GLfloat r=100, GLfloat g=100, GLfloat b=100)
{
    glBegin(GL_QUADS);
    glColor3ub(r, g, b);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glVertex2f(x4, y4);
    glEnd();
}

void draw_container (GLfloat x1, GLfloat y1, GLfloat height, GLfloat weight, GLfloat r=40, GLfloat g=70, GLfloat b=70)
{
    glBegin(GL_QUADS);
    glColor3ub(r, g, b);
    glVertex2f(x1, y1);
    glVertex2f(x1 + weight, y1);
    glVertex2f(x1 + weight, y1 + height);
    glVertex2f(x1, y1 + height);
    glEnd();
}

void draw_container_3d(GLfloat x1, GLfloat y1, GLfloat height, GLfloat weight, GLfloat r=40, GLfloat g=70, GLfloat b=70)
{
    GLfloat y2=y1 + height;
    GLfloat h=height*.3;

    glBegin(GL_QUADS);
    glColor3ub(r, g, b);
    glVertex2f(x1, y1);//A
    glVertex2f(x1 + weight, y1);//B
    glVertex2f(x1 + weight, y1 + height);//C
    glVertex2f(x1, y1 + height);//D

    glColor3ub(r-10, g-10, b-10);
    glVertex2f(x1, y2);//A
    glVertex2f(x1 + weight, y2);//B
    glVertex2f(x1 + weight, y2 + h);//C
    glVertex2f(x1, y2 + h);//D
    glEnd();
}

void draw_window (GLfloat x, GLfloat y, GLfloat inc) {
   draw_quad(x, y, x + inc, y, x + inc, y + inc, x, y + inc, 90, 0, 0);
   draw_quad(x + inc*0.1, y + inc*0.1, x + inc - (inc*0.1), y + inc*0.1, x + inc - inc*0.1, y + inc - inc*0.1, x + inc*0.1, y + inc - inc*0.1, 50, 100, 90);
}

void rail_line(GLfloat y=0,GLfloat r=40, GLfloat g=70, GLfloat b=70)
{
    for (double i = -1.0f; i < 1.0f; i += .08) {
            draw_line(i, y, i , (y + 0.05f), r, g, b, 4.0);         // vertical line on padma bridge
    }

    draw_line(-1.0,y,1.0,y,r,g,b,2);
    draw_line(-1.0,y+.05,1.0,y+.05,r,g,b,2);
}

void draw_pillar(GLfloat x=0, GLfloat y=0, GLfloat z=0, GLfloat xs=1, GLfloat ys=1, GLfloat zs=1)
{
    glTranslatef(x, y, z);
    glScalef(xs, ys, zs);
    glBegin(GL_POLYGON);
    glColor3ub(127, 127, 127);
    glVertex2f(-0.69f, 0.0f);   // bridge pillar under bottom
	glVertex2f(-0.86f, 0.0f);
	glVertex2f(-0.86f, -0.03f);
	glVertex2f(-0.83f, -0.07f);
	glVertex2f(-0.72f, -0.07f);
	glVertex2f(-0.69f, -0.03f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(132, 132, 132);
    glVertex2f(-0.72f, 0.04f);   // bridge pillar bottom
	glVertex2f(-0.83f, 0.04f);
	glVertex2f(-0.86f, 0.0f);
	glVertex2f(-0.83f, -0.04f);
	glVertex2f(-0.72f, -0.04f);
	glVertex2f(-0.69f, 0.0f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(138, 138, 138);    // bridge pillar head
	glVertex2f(-0.7f, 0.18f);
	glVertex2f(-0.85f, 0.18f);
	glVertex2f(-0.85f, 0.14f);
	glVertex2f(-0.7f, 0.14f);

	glColor3ub(130, 130, 130);
	glVertex2f(-0.85f, 0.14f);
	glVertex2f(-0.83f, 0.12f);
	glVertex2f(-0.72f, 0.12f);
	glVertex2f(-0.7f, 0.14f);

	glColor3ub(136, 136, 136);
	glVertex2f(-0.72f, 0.12f);   // bridge pillar body
	glVertex2f(-0.83f, 0.12f);
	glVertex2f(-0.83f, 0.0f);
	glVertex2f(-0.72f, 0.0f);
    glEnd();

    glLoadIdentity();
}

void draw_v_angle(GLfloat x=0, GLfloat y=0, GLfloat z=0, GLfloat r=150, GLfloat g=150, GLfloat b=150)
{
    glTranslatef(x-.025,y,z);
    glBegin(GL_QUADS);
    glColor3ub(r, g, b);
    glVertex2f(-0.95f, 0.44);                 // train side block back slash
	glVertex2f(-1.0f, 0.44f);
	glVertex2f(-0.8f, 0.18f);
    glVertex2f(-0.75f, 0.18f);

    glVertex2f(-0.55f, 0.44);                 // train side block forward slash
	glVertex2f(-0.6f, 0.44f);
	glVertex2f(-0.8f, 0.18f);
    glVertex2f(-0.75f, 0.18f);
    glEnd();
    glLoadIdentity();
}

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glBegin(GL_QUADS);
    glColor3ub(10, 16, 43);
    glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);                // sky block
    glEnd();

    draw_circle(.8,.8,.09,254,252,215);   //bright moon
    draw_circle(.85,.82,.088,10,16,43);   //bright moon cover

    glBegin(GL_QUADS);
    glColor3ub(2, 41, 107);
    glVertex2f(1.0f, 0.55);                 // Water block
	glVertex2f(-1.0f, 0.55f);
	glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();

    draw_v_angle(0,.15,0,130,130,130);
    draw_v_angle(0.4,.15,0,130,130,130);
    draw_v_angle(0.8,.15,0,130,130,130);          //train inner side railing boundary
    draw_v_angle(1.2,.15,0,130,130,130);
    draw_v_angle(1.6,.15,0,130,130,130);

	glBegin(GL_QUADS);
    glColor3ub(33, 33, 33);
    glVertex2f(1.0f, 0.59f);
    glVertex2f(-1.0f, 0.59f);             // bridge road block
	glVertex2f(-1.0f, 0.44f);
	glVertex2f(1.0f, 0.44);
    glEnd();

	glBegin(GL_LINES);
	glColor3ub(136, 136, 136);
	glVertex2f(-1.0f, 0.51f);                // bridge road mid line
	glVertex2f(1.0f, 0.51f);
	glEnd();


    glBegin(GL_QUADS);
    glColor3ub(33, 33, 33);
    glVertex2f(1.0f, 0.33f);
    glVertex2f(-1.0f, 0.33f);
	glVertex2f(-1.0f, 0.18f);                // bridge train road x axis
	glVertex2f(1.0f, 0.18f);
    glEnd();

    rail_line(0.19);

    draw_v_angle(0);
    draw_v_angle(0.4);
    draw_v_angle(0.8);          //train front side railing boundary
    draw_v_angle(1.2);
    draw_v_angle(1.6);

	glBegin(GL_QUADS);
	glColor3ub(136, 136, 136);    // bridge side railing bottom axis
	glVertex2f(1.0f, 0.18f);
	glVertex2f(-1.0f, 0.18f);
	glVertex2f(-1.0f, 0.16f);
	glVertex2f(1.0f, 0.16);
	glEnd();

	draw_pillar();
	draw_pillar(1.55);
    glPushMatrix();

    draw_container_3d(0.0,0.0,0.3,0.7);

    // Raining
    if (is_rain) {
        glPushMatrix();
        glTranslatef(rain_pos, rain_pos, 0);
	    for (double i = -2.0f; i < 3.0f; i += rain_speedX) {
          for (double j = 2.5f; j >= -2.0f; j -= rain_speedY) {
            draw_line(i, j, (i - 0.01f), (j - 0.05f), 250, 250, 250, 2.0);         // Raining on the padma bridge
          }
	    }
        glPopMatrix();
	    glLoadIdentity();
    }


	glLoadIdentity();
    glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1280, 720);         // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display);              // Register display callback handler for window re-paint

	glutTimerFunc(100, keep_raining, 0);

	glutIdleFunc(Idle);
	glutMainLoop();                        // Enter the event-processing loop

	return 0;
}
