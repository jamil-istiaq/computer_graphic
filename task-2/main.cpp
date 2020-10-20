#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display1() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);



glBegin(GL_QUADS);
glColor3ub(0,102,255);
glVertex2f(-0.7f,-0.3f);
glVertex2f(-0.1f,-0.3f);
glVertex2f(-0.1f,0.0f);
glVertex2f(-0.7f,0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102,204,255);
glVertex2f(-0.5f,-0.3f);
glVertex2f(-0.3f,-0.3f);
glVertex2f(-0.3f,-0.1f);
glVertex2f(-0.5f,-0.1f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(153,51,255);
glVertex2f(-0.8f,0.0f);
glVertex2f(0.0f,-0.0f);
glVertex2f(-0.4f,0.3f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102,51,0);
glVertex2f(0.5f,-0.3f);
glVertex2f(0.7f,-0.3f);
glVertex2f(0.7f,0.0f);
glVertex2f(0.5f,0.0f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0,204,0);
glVertex2f(0.5f,0.0f);
glVertex2f(0.7,0.0f);
glVertex2f(0.8f,0.1f);
glVertex2f(0.8f,0.3f);

glVertex2f(0.7f,0.4f);
glVertex2f(0.5f,0.4f);

glVertex2f(0.4f,0.3f);
glVertex2f(0.4f,0.1f);
glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Lab Task");
	glutInitWindowSize(620, 420);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
