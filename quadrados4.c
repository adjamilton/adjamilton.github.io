/* programa teste-make.c */

#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

void display(void);
void timer(int);
void keyboard(unsigned char key, int x, int y);

/* cores do quadrado */
GLfloat r=1.0, g=0.5, b=0.0;

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (256, 256); 
  glutInitWindowPosition (100, 100); 
  glutCreateWindow (argv[0]);

  // inicia um temporizador. após 33ms ativa a funcao timer
  
  glClearColor(1.0, 1.0, 1.0, 0.0);
  glShadeModel (GL_FLAT);
  glOrtho (0, 1, 0, 1, -1 ,1);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}


void display(void){
  int i;
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f (1, 0, 0);
  glBegin(GL_POLYGON);
  glVertex2f(0.1 ,0.1);
  glVertex2f(0.5,0.1);
  glVertex2f(0.5,0.5);
  glVertex2f(0.1,0.5);
  glEnd();
  glColor3f (0, 1, 0);	
  glBegin(GL_POLYGON);
  glVertex2f(0.5,0.1);
  glVertex2f(0.9,0.1);
  glVertex2f(0.9,0.5);
  glVertex2f(0.5,0.5);
  glEnd();
  glColor3f (0, 0, 1);	
  glBegin(GL_POLYGON);
  glVertex2f(0.1,0.5);
  glVertex2f(0.5,0.5);
  glVertex2f(0.5,0.9);
  glVertex2f(0.1,0.9);
  glEnd();
  glColor3f (0, 0, 0);	
  glBegin(GL_POLYGON);
  glVertex2f(0.5,0.5);
  glVertex2f(0.9,0.5);
  glVertex2f(0.9,0.9);
  glVertex2f(0.5,0.9);
  glEnd();
  glFlush();
}
