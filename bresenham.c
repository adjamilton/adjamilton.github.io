#include <GL/glut.h>
#include <stdlib.h>

void init(void);
void display(void);
void keyboard(unsigned char key, int x, int y);
GLfloat x=40.0, y=200.0, Delta_x=160, Delta_y=190, new_e=0;
int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize (256, 256); 
  glutInitWindowPosition (100, 100); 
  glutCreateWindow ("Desenhando uma linha");
  init();
  glutDisplayFunc(display); 
  glutKeyboardFunc(keyboard);
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
   new_e = 2*Delta_y - Delta_x;
   for(i=1; i <= Delta_x; i++){
   glColor3f (0.0, 1, 0.0);
   glVertex2i(x ,y);
   while(new_e >= 0){
     y = y - 1;
     new_e = new_e - 2*Delta_x;
   }
   x = x + 1;
   new_e = new_e + 2*Delta_y;
 }
  glEnd();
  glFlush();
}

void keyboard(unsigned char key, int x, int y){
  switch (key) {
  case 27:
	exit(0);
	break;
  }
}
