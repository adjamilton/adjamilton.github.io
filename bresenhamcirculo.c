#include <GL/glut.h>
#include <stdlib.h>

void init(void);
void display(void);
void keyboard(unsigned char key, int x, int y);

GLfloat raio=50, x=128, y=128,d=0, xc=128, yc=128
;
int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (256, 256); 
  glutInitWindowPosition (100, 100); 
  glutCreateWindow ("Desenhando um circulo");
  init();
  glutDisplayFunc(display); 
  
  glutMainLoop();
  return 0;
}



void init(void){
  glClearColor(1.0, 1.0, 1.0, 1.0);
  glOrtho (0, 256, 0, 256, -1 ,1);
}

void display(void){
  int i;
  glClear(GL_COLOR_BUFFER_BIT);
   
   glBegin(GL_POINTS);
   x = 0;
   y = raio;
   d = 1 - raio;
  
   glColor3f (0, 0, 1);                        
   glVertex2i(xc+x, yc+y);
   glColor3f (0, 0, 1);
   glVertex2i(xc-x, yc+y);
   glColor3f (0, 0, 1);
   glVertex2i(xc-x, yc-y);
   glColor3f (0, 0, 1);
   glVertex2i(xc+x, yc-y);
   glColor3f (0, 0, 1);
   glVertex2i(xc+y, yc+x);
   glColor3f (0, 0, 1);
   glVertex2i(xc-y, yc+x);
   glColor3f (0, 0, 1);
   glVertex2i(xc-y, yc-x);
   glColor3f (0, 0, 1);
   glVertex2i(xc+y, yc-x);
  while(y > x){
   if(d < 0){
     d = d + 2*x + 3;
     x = x + 1;
   }
   else{
     d = d + 2*(x-y) + 5;
     x = x + 1;
     y = y - 1;
   }
   
   glColor3f (0, 0, 1);                        
   glVertex2i(xc+x, yc+y);
   glColor3f (0, 0, 1);
   glVertex2i(xc-x, yc+y);
   glColor3f (0, 0, 1);
   glVertex2i(xc-x, yc-y);
   glColor3f (0, 0, 1);
   glVertex2i(xc+x, yc-y);
   glColor3f (0, 0, 1);
   glVertex2i(xc+y, yc+x);
   glColor3f (0, 0, 1);
   glVertex2i(xc-y, yc+x);
   glColor3f (0, 0, 1);
   glVertex2i(xc-y, yc-x);
   glColor3f (0, 0, 1);
   glVertex2i(xc+y, yc-x);
 }
  glEnd();
  glFlush();
}


