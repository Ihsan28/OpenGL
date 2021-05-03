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
