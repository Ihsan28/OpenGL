GLfloat rainX = 0.0f, rainY = 0.0f;
bool goRain = false;

void keepRaining (int v) {
   if (goRain) {
     rainX -= 0.2f;
     rainY -= 0.2f;
     if (rainX < -0.2f) {
      rainX = 0.0f;
      rainY = 0.0f;
     }
     glutTimerFunc(100, keepRaining, 0);
   }
}

void drawLine (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat a, GLfloat b, GLfloat c , int w) {
    x1 /= 1000.0; y1 /= 1000.0; x2 /= 1000.0; y2 /= 1000.0;
    glLineWidth(w);
    glBegin(GL_LINES);
    glColor3f(a, b, c);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glEnd();
}

void display()
{
  // Raining
    if (goRain) {
       glTranslatef(rainX, rainY, 0);
	   for (double i = -1.0f; i < 1.0f; i += 0.15f) {
          for (double j = -1.0f; j < 1.0f; j += 0.15f) {
            drawLine(i * 1000, j * 1000, (i - 0.1f) * 1000, (j - 0.1f) * 1000, 1, 1, 1, 1);
          }
	   }
	   glLoadIdentity();
    }
    // End
