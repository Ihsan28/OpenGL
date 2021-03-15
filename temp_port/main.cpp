#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846

GLfloat j = 0.0f;
GLfloat i = 0.0f;
GLfloat z = 0.0f;
GLfloat k = 0.0f;

GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1>1.0)
        position1 = -1.0f;

    position1 += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}


void screen()
{
    gluOrtho2D(-2,2,-2,2);
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1);

    GLfloat x = -0.2f;
    GLfloat y = 0.05f;
    GLfloat radius = 0.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    //sky start
    glBegin(GL_QUADS);
    glColor3ub(176, 233, 254);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glEnd();

    //quads end

    //land start

    //quads start
    //1
    glBegin(GL_QUADS);
    glColor3ub(59, 63, 75);
    glVertex2f(1.0f, -0.0f);
    glVertex2f(-1.0f, -0.0f);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glEnd();

    //quads end
    //land end

    //water start
    //quads start
    //1
    glBegin(GL_QUADS);
    glColor3ub(18, 190, 252);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(-1.0f, -0.1f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.f);
    glEnd();

    //quads end
    //water end
    glPushMatrix();
    glTranslatef(position,0,0);

    //ship 2

    //1
    //polygon began
    glBegin(GL_POLYGON);

    glColor3ub(37, 31, 29);
    glVertex2f(0.8f, -0.4f);
    glVertex2f(0.0f, -0.4f);
    glVertex2f(0.1f, -0.5f);
    glVertex2f(0.7f, -0.5f);

    glEnd();

    //polygon end

    //triangle start
    //2
    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(0.9f, -0.3f);
    glVertex2f(0.7f, -0.4f);
    glVertex2f(0.8f, -0.4f);
    glEnd();

    //triangle end

    //quads start
    //3
    glBegin(GL_QUADS);
    glColor3ub(41, 84, 44);
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.5f, -0.3f);
    glVertex2f(0.5f, -0.4f);
    glVertex2f(0.6f, -0.4f);
    glEnd();

    //quads end

    //quads start
    //4
    glBegin(GL_QUADS);
    glColor3ub(22, 29, 111);
    glVertex2f(0.6f, -0.2f);
    glVertex2f(0.5f, -0.2f);
    glVertex2f(0.5f, -0.3f);
    glVertex2f(0.6f, -0.3f);
    glEnd();

    //quads end

    //quads start
    //5
    glBegin(GL_QUADS);
    glColor3ub(152, 158, 38);
    glVertex2f(0.5f, -0.2f);
    glVertex2f(0.4f, -0.2f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.5f, -0.3f);
    glEnd();

    //quads end

    //quads start
    //6
    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glVertex2f(0.5f, -0.3f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.4f, -0.4f);
    glVertex2f(0.5f, -0.4f);
    glEnd();

    //quads end

    //quads start
    //7
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 255);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.2f, -0.4f);
    glVertex2f(0.4f, -0.4f);
    glEnd();

    //quads end

    //quads start
    //8
    glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.1f, -0.3f);
    glVertex2f(0.1f, -0.4f);
    glVertex2f(0.2f, -0.4f);
    glEnd();

    //quads end


    //triangle end

    //triangle start
    //10
    glBegin(GL_TRIANGLES);
    glColor3ub(102, 0, 0);
    glVertex2f(0.1f, -0.4f);
    glVertex2f(-0.1f, -0.3f);
    glVertex2f(0.0f, -0.4f);
    glEnd();

    //triangle end
    glPopMatrix();



   //glFlush();


    //1
    x = -0.2f;
    y = 0.05f;
    radius = 0.05f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(18, 16, 19);
    glVertex2f(x, y);
    for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();




    //triangle end

    //1
    x = -0.2f;
    y = 0.05f;
    radius = 0.05f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(18, 16, 19);
    glVertex2f(x, y);
    for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();


    glLoadIdentity();

    glBegin(GL_POLYGON);
    glColor3ub(139, 54, 10);
    glVertex2f(-0.76f, 0.08f);
    glVertex2f(-0.96f, 0.08f);
    glVertex2f(-0.96f, 0.0f);    // Port Headquarter building block 1
	glVertex2f(-0.76f, 0.0f);

    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(139, 54, 120);
    glVertex2f(-0.76f, 0.16f);    // Port Headquarter building block 2
	glVertex2f(-0.96f, 0.16f);
	glVertex2f(-0.96f, 0.08f);
	glVertex2f(-0.76f, 0.08f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(139, 70, 120);
    glVertex2f(-0.8f, 0.38f);    // Port Headquarter building block 3 round
	glVertex2f(-0.96f, 0.38f);
	glVertex2f(-0.96f, 0.16f);
	glVertex2f(-0.8f, 0.16f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(110, 70, 120);
    glVertex2f(-0.8f, 0.38f);    // Port Headquarter building block 3 round front side
	glVertex2f(-0.85f, 0.38f);
	glVertex2f(-0.85f, 0.16f);
	glVertex2f(-0.8f, 0.16f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(110, 70, 120);
    glVertex2f(-0.88f, 0.5f); // Port Headquarter building block 3 round front side
	glVertex2f(-0.96f, 0.38f);
	glVertex2f(-0.8f, 0.38f);
    glEnd();

    ////////////////clock ////////////////
    glTranslated(-0.88f, 0.3f, 0.0f);
    glScalef(.1f,.1f,0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f( -0.7f, 0.7f);

    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, -0.7f );

    glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f );


    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, 0.7f );

    glEnd();


    glPushMatrix();
    glRotatef(i,0.0,0.0,0.1);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(z,0.0,0.0,0.1);
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);

    glEnd();
    glPopMatrix();

    glPopMatrix();

    glPushMatrix();
    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3ub(120, 255, 255);  // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.4f);

    glEnd();
    glPopMatrix();



    i-=0.0075f;
    if(i<=-360)
        {
            if(z<=-360)
            {
                k-=5.0f;     //check if the minutes dials complete 360 rotation
                i=0.0f;
                z=0.0f;
            }
            else
                {
                    z-=6.0f;
                    i=0.0f;
            }

         }

    glLoadIdentity();

    ///////////////clock end//////////////

    glBegin(GL_POLYGON);
    glColor3ub(110, 70, 120);
    glVertex2f(0.04f, 0.4f);    // Port Main crain body
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.04f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(110, 70, 120);
    glVertex2f(-0.88f, 0.5f); // Port Headquarter building block 3 round front side
	glVertex2f(-0.96f, 0.38f);
	glVertex2f(-0.8f, 0.38f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(110, 70, 120);
    glVertex2f(0.04f, 0.4f);    // Port Main crain body
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.04f, 0.0f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(140, 70, 120);
    glVertex2f(0.02f, 0.44f);    // Port Main crain Head
	glVertex2f(-0.04f, 0.44f);
	glVertex2f(-0.04f, 0.4f);
	glVertex2f(0.04f, 0.4f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(110, 170, 120);
    glVertex2f(0.4f, 0.5f);
    glVertex2f(0.02f, 0.44f);    // Port Main crain Hand
	glVertex2f(0.04f, 0.4f);
    glEnd();


	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(0.4f, 0.5f);    // Main crain rope hanger
	glVertex2f(0.4f, 0.3f);
	glEnd();


	glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glVertex2f(0.45f, 0.3f);
    glVertex2f(0.35f, 0.3f);    // Port Main crain Hanging Container
	glVertex2f(0.35f, 0.26f);
	glVertex2f(0.45f, 0.26f);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.5f);
    glVertex2f(0.26f, 0.04f);
    glVertex2f(0.16f, 0.04f);    // Port Main crain on loading container 1
	glVertex2f(0.16f, 0.0f);
	glVertex2f(0.26f, 0.0);
    glEnd();


	glBegin(GL_POLYGON);
    glColor3ub(10, 170, 120);
    glVertex2f(0.4f, 0.04f);
    glVertex2f(0.28f, 0.04f);    // Port Main crain on loading container 2
	glVertex2f(0.28f, 0.0f);
	glVertex2f(0.4f, 0.0);
    glEnd();


	glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glVertex2f(0.32f, 0.08f);
    glVertex2f(0.22f, 0.08f);    // Port Main crain on loading container 3
	glVertex2f(0.22f, 0.04f);
	glVertex2f(0.32f, 0.04f);
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



	 glColor3ub(20, 70, 20);

	x=0.79f; y=0.02f; radius =.025f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);           // Port Main crain Hand end round
		 for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();


     x = -0.85f;
    y = 0.85f;
    radius = 0.1f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(20, 70, 20 );
    glVertex2f(x, y);
    for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();





    x = -0.54f;
    y = 0.02f;
    radius = 0.024f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();




	 x = -0.54f;
    y = 0.02f;
    radius = 0.024f;

    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();


	x=0.49f; y=0.02f; radius =.024f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);           // Port Main crain Hand end round
		for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();

     glPushMatrix();
     glTranslatef(position1,0,0);

    //ship 3 start

    //polygon began
    //1
    glBegin(GL_POLYGON);

    glColor3ub(0, 0, 0);
    glVertex2f(-0.3f, -0.65f);
    glVertex2f(-0.9f, -0.65f);
    glVertex2f(-0.8f, -0.7f);
    glVertex2f(-0.4f, -0.7f);

    glEnd();

    //polygon end

    //polygon began
    //2
    glBegin(GL_POLYGON);

    glColor3ub(102, 0, 0);
    glVertex2f(-0.2f, -0.6f);
    glVertex2f(-1.0f, -0.6f);
    glVertex2f(-0.9f, -0.65f);
    glVertex2f(-0.3f, -0.65);

    glEnd();

    //polygon end

    //quads start
    //3
    glBegin(GL_QUADS);
   glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(-0.4f, -0.55f);
    glVertex2f(-0.8f, -0.55f);
    glVertex2f(-0.8f, -0.6f);
    glVertex2f(-0.4f, -0.6f);
    glEnd();

    //quads end
    //quads start
    //4
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.75f, -0.4f);
    glVertex2f(-0.75f, -0.55f);
    glVertex2f(-0.7f, -0.55f);
    glEnd();

    //quads end

    //quads start
    //5
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.55f, -0.4f);
    glVertex2f(-0.65f, -0.4f);
    glVertex2f(-0.65f, -0.55f);
    glVertex2f(-0.55f, -0.55f);
    glEnd();

    //quads end

    //quads start
    //6
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.45f, -0.4f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.5f, -0.55f);
    glVertex2f(-0.45f, -0.55f);
    glEnd();

    //quads end

    //ship 3 end
    glPopMatrix();


    glLoadIdentity();

    //krain 2 start

    //quads start
    //1
    glBegin(GL_QUADS);
    glColor3ub(18, 16, 19);
    glVertex2f(-0.45f, 0.05f);
    glVertex2f(-0.6f, 0.05f);
    glVertex2f(-0.6f, 0.0f);
    glVertex2f(-0.45f, 0.0f);
    glEnd();

    //quads end

    //quads start
    //2
    glBegin(GL_QUADS);
    glColor3ub(18, 16, 19);
    glVertex2f(-0.5f, 0.05f);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f, 0.05f);
    glEnd();

    //quads end

    //triangle start
    //3
    glBegin(GL_TRIANGLES);
    glColor3ub(18, 16, 19);
    glVertex2f(-0.5f, 0.6f);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.55f, 0.6f);
    glEnd();

    //triangle end

    //lines start
    //4
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.4f, 0.45f);
    glEnd();

    //lines end

    //lines start
    //5
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.35f, 0.85f);
    glVertex2f(-0.35f, 0.45f);
    glEnd();

    //lines end

    //quads start
    //6
    glBegin(GL_QUADS);
    glColor3ub(22, 29, 111);
    glVertex2f(-0.3f, 0.45f);
    glVertex2f(-0.45f, 0.45f);
    glVertex2f(-0.45f, 0.35f);
    glVertex2f(-0.3f, 0.35f);
    glEnd();

    //quads end

    //sun start

    //circle start
    //2
    x = -0.85f;
    y = 0.85f;
    radius = 0.1f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(251, 252, 170);
    glVertex2f(x, y);
    for (int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();
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
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( -0.13f, 0.09f);
    glVertex2f( -0.15f, -0.01f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.02f, -0.15f);
    glVertex2f( 0.13f, -0.12f);
    glEnd();

    glPopMatrix();
    j-=0.2f;
    glLoadIdentity();

    glFlush();



    //circle end
    //sun end
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
  // screen();//Enable it for using gluortho2d function
   glutDisplayFunc(display);


   glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);


   glutMainLoop();
   return 0;
}

