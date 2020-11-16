#include <windows.h>
#include <GL/glut.h>
#include<math.h>
# define PI 3.14159265358979323846
GLfloat i = 0.0f;

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{   int j;
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);; // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-1,-0.6);
    glVertex2d(-1,-0.7);
    glVertex2d(1,-0.7);
    glVertex2d(1,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.1,-0.6);
    glVertex2d(0.1,-0.6);
    glVertex2d(0.1,0.1);
    glVertex2d(-0.1,0.1);
    glEnd();

    GLfloat x=-0.01; GLfloat y=-0.01f; GLfloat radius =.15f;
	int triangleAmount = 27; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 102, 0);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x + (radius * cos(j*  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
		}
	glEnd();



    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack,
    glRotatef(i,0.0,0.0,0.1);//i=how many degree you want to rotate around an axis

    glTranslatef(0.035,-0.2,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0,255,0);
    glVertex2d(-0.035,0.2);
    glVertex2d(0.6,0.3);
    glVertex2d(0.5,0.6);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,255);
    glVertex2d(-0.035,0.2);
    glVertex2d(-0.6,0.3);
    glVertex2d(-0.5,0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2d(-0.035,0.2);
    glVertex2d(-0.2,-0.3);
    glVertex2d(0.1,-0.3);
    glEnd();
    glPopMatrix();//glPopMatrix pops the top matrix off the stack
    i+=0.05f;//i=i+.1=.2*/


    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;}

