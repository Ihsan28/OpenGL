/*
Desh, Salman Rahman: 13-23239-1
Amin, H.M. Ruhul: 13-23624-1
Hassan, Jahidul: 13-25373-1
Mahdi, Dewan Osman: 13-25368-3
*/


#include <sstream>
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
using namespace std;

int viewY, viewX;
int move_unit = 5;

int m=0;
int passAViewX=1, passBViewX=1; 
float passCViewX=1, passDViewX=1; 

void myInit (void)

/*Plane_Control_Keyboard*/
void keyboard(int key, int x, int y){
	if (key == GLUT_KEY_UP){
		viewY -= move_unit;
		cout<<"KEYBOARD_UP | ";
	}
	if (key == GLUT_KEY_DOWN){
		viewY += move_unit;
		cout<<"KEYBOARD_DOWN | ";
	}
	if (key == GLUT_KEY_LEFT){
		viewX -= move_unit;
		cout<<"KEYBOARD_LEFT | ";
	}
	if (key == GLUT_KEY_RIGHT){
		viewX += move_unit;
		cout<<"KEYBOARD_RIGHT | ";
	}
}



void drawBitmapText(string caption, int score, float r, float g, float b, 
   float x,float y,float z) {  
   glColor3f(r,g,b);
   glRasterPos3f(x,y,z);
   stringstream strm;
   strm << caption << score;
   string text = strm.str();
   for(string::iterator it = text.begin(); it != text.end(); ++it) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18 , *it); 
   }
}


/*void viewScore(){
		int s=0, m=10;
		do{
				//drawBitmapText("Score: ", s, 255, 0 , 0, 550, 450, 0 );
				drawBitmapText("Score: ", m, 255,0,0,100,400,0);
				//Sleep(1000);
				//s++;
				//system("CLS");
			}
			while(s!=0);
}*/


/*void print(int x, int y,int z, char *string)
{
//set the position of the text in the window using the x, y and z coordinates
glRasterPos3f(x,y,z);
//get the length of the string to display
int len = (int) strlen(string);

//loop to display character by character
for(int f=0;f<10;f++){
	for (int i = 0;i<len;i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	}
}
};*/



void myDisplay(void)
	
	/******************************************/
	/*------- custom code starts -------*/
/******************************************/
	glutSwapBuffers();



/*Timer_Control_Object*/
void timerLoopA(int t1) {
		if (passAViewX >= 0)
		{
			passAViewX += 3;
		}
		if(passAViewX >= 1050)
		{
			passAViewX=0;
			m += 5;
		}
		glutPostRedisplay(); 
		glutTimerFunc(15, timerLoopA, 0);
	}

void timerLoopB(int t2) {
	if (passBViewX >= 0)
	{
		passBViewX += 2;
	}
	if(passBViewX >= 1050)
	{
		passBViewX=0;
		m += 5;
	}
	glutPostRedisplay(); 
	glutTimerFunc(15, timerLoopB, 0);
}

void timerLoopC(int t3) {
	if (passCViewX >= 0)
	{
		passCViewX += 2.5;
	}
	if(passCViewX >= 1050)
	{
		passCViewX=0;
		m += 5;
	}
	glutPostRedisplay(); 
	glutTimerFunc(15, timerLoopC, 0);
}

void timerLoopD(int t4) {
	if (passDViewX >= 0)
	{
		passDViewX += 2.75;
	}
	if(passDViewX >= 1050)
	{
		passDViewX=0;
		m += 5;
	}
	glutPostRedisplay(); 
	glutTimerFunc(15, timerLoopD, 0);
}


/*void score(){
		int s=0;
		for (;;){
		system("CLS");
		glRasterPos2f(400, 400);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s);
		s++;
		Sleep(1000);
		}
}*/





/*main_function*/
void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1208, 720);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Plane");
	glutDisplayFunc(myDisplay);
	glutSpecialFunc(keyboard);
	glutTimerFunc(0, timerLoopA, 0);
	glutTimerFunc(0, timerLoopB, 0);
	glutTimerFunc(0, timerLoopC, 0);
	glutTimerFunc(0, timerLoopD, 0);
	myInit();
	glutMainLoop();
}
