#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);



glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);


glColor3f(0,0,1);
glVertex2f(0.0f,1.0f);
glVertex2f(0.0f,-1.0f);
glEnd();

glBegin(GL_QUADS);
glVertex2f(-0.3f,0.3f);
glVertex2f(-0.3f,0.7f);
glVertex2f(-0.8f,0.7f);
glVertex2f(-0.8f,0.3f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1,0,0);
glVertex2f(0.3f,0.3f);
glVertex2f(0.8f,0.3f);
glVertex2f(0.5f,0.7f);
glEnd();

glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(-0.5f,-0.6f);
glVertex2f(-0.3f,-0.3f);

glVertex2f(-0.3f,-0.3f);
glVertex2f(-0.8f,-0.3f);

glVertex2f(-0.8f,-0.3f);
glVertex2f(-0.5f,-0.6f);
glEnd();

glPointSize(5);
glBegin(GL_POINTS);
glColor3f(1,0,1);
glVertex2f(0.0f,0.0f);
glEnd();




glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2f(0.5f,-0.6f);
glVertex2f(0.6f,-0.5f);
glVertex2f(0.6f,-0.2f);

glVertex2f(0.5f,-0.1f);
glVertex2f(0.3f,-0.1f);
glVertex2f(0.2f,-0.2f);
glVertex2f(0.2f,-0.5f);
glVertex2f(0.3f,-0.6f);

glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}

