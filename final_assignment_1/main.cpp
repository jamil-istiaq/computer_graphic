#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include<math.h>>
#include<cstdio>
#include<GL/gl.h>
# define PI 3.14159265358979323846

GLfloat g = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.04f;
GLfloat speed1 = 0.005f;

GLfloat position1 = 0.0f;

void Idle()
{
    glutPostRedisplay();
}

void update(int value) {

    if(position >1.0)
        position = -2.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {

    if(position1 <-2.0)
        position1 = 1.0f;

    position1 -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}
void start() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}


void day() {


	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 255);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 102, 255);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 153, 255);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 184, 230);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 204, 255);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 204, 255);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 204, 255);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 153);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(140, 140, 140);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 230, 0);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 179, 0);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//road
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-1,-0.70);
    glVertex2d(-1,-1);
    glVertex2d(1,-1);
    glVertex2d(1,-0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-1,-0.85);
    glVertex2d(-1,-0.88);
    glVertex2d(1,-0.88);
    glVertex2d(1,-0.85);
    glEnd();
//main building
//top floor
    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2d(-0.55,0.60);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.60);
    glEnd();
//top floor glass
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(0.72,0.34);
    glVertex2d(0.72,0.57);
    glEnd();
//top floor glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.56);
    glVertex2d(0.72,0.56);
    glVertex2d(0.72,0.57);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.23,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();


//3rd floor
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-0.55,0.30);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.30);
    glEnd();
//3rd floor glass
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(0.72,0.05);
    glVertex2d(0.72,0.27);
    glEnd();
//3rd floor glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.16,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();
    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.04);
    glVertex2d(-0.52,0.05);
    glVertex2d(0.72,0.05);
    glVertex2d(0.72,0.04);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.72,0.27);
    glVertex2d(0.72,0.05);
    glVertex2d(0.71,0.05);
    glVertex2d(0.71,0.27);
    glEnd();

//2nd floor
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-0.55,0.0);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(0.72,-0.25);
    glVertex2d(0.72,-0.03);
    glEnd();
//2nd floor glass border //floor border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.24);
    glVertex2d(-0.52,-0.25);
    glVertex2d(0.72,-0.25);
    glVertex2d(0.72,-0.24);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.23,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();
//1st floor
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 153);
    glVertex2d(-0.55,-0.30);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,-0.30);
    glEnd();
//1st floor glass and floor border
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.34);
    glVertex2d(0.72,-0.34);
    glVertex2d(0.72,-0.35);
    glEnd();

    glTranslatef(0,-0.1,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.34);
    glVertex2d(0.72,-0.34);
    glVertex2d(0.72,-0.35);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.59);
    glVertex2d(-0.52,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.71,-0.35);
    glVertex2d(0.71,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.35);
    glEnd();

//top-1 floor
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);
    glVertex2d(-0.45,0.70);
    glVertex2d(-0.45,0.60);
    glVertex2d(0.55,0.60);
    glVertex2d(0.55,0.70);
    glEnd();
//left side
    glBegin(GL_QUADS);
    glColor3ub(140,140,140);
    glVertex2d(-0.85,0.60);
    glVertex2d(-0.85,-0.70);
    glVertex2d(-0.55,-0.70);
    glVertex2d(-0.55,0.60);
    glEnd();
//left side glass
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(-0.68,0.50);
    glVertex2d(-0.68,-0.65);
    glVertex2d(-0.57,-0.65);
    glVertex2d(-0.57,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,-0.65);
    glVertex2d(-0.68,-0.65);
    glVertex2d(-0.68,0.50);
    glEnd();
//left side glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,-0.65);
    glVertex2d(-0.81,-0.65);
    glVertex2d(-0.81,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();

    glTranslatef(0.05,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.10,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.15,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.20,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();
//left side floor border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,0.49);
    glVertex2d(-0.57,0.49);
    glVertex2d(-0.57,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.30,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.45,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.60,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.75,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.90,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-1.03,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

//right side
    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2d(0.75,0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.90,-0.70);
    glVertex2d(0.90,0.70);
    glEnd();
//right side window
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();

    glTranslatef(0,-0.2,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.4,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.6,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.8,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-1.0,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

//gate
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.25,-0.30);
    glVertex2d(-0.3,-0.45);
    glVertex2d(0.15,-0.45);
    glVertex2d(0.1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-0.3,-0.45);
    glVertex2d(-0.3,-0.70);
    glVertex2d(-0.28,-0.70);
    glVertex2d(-0.28,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(0.15,-0.45);
    glVertex2d(0.15,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.45);
    glEnd();
//Stairs
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.28,-0.60);
    glVertex2d(-0.28,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2d(-0.28,-0.67);
    glVertex2d(-0.28,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.67);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-0.28,-0.64);
    glVertex2d(-0.28,-0.67);
    glVertex2d(0.13,-0.67);
    glVertex2d(0.13,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77,77,77);
    glVertex2d(-0.28,-0.61);
    glVertex2d(-0.28,-0.64);
    glVertex2d(0.13,-0.64);
    glVertex2d(0.13,-0.61);
    glEnd();

//sun
    int i;

	GLfloat x=-.8f; GLfloat y=.8f; GLfloat radius =.12f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;

	glPushMatrix();
    glTranslatef(position,position, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 51, 51);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
//sky-1
    GLfloat radius1 =.05f;
    glTranslatef(1.6,0.1,0);

    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.54,0.1,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.47,0.1,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.50,0.14,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//sky-2
    glTranslatef(1.0,0.05,0);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.93,0.05,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.88,0.05,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.93,0.01,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//sky-3
    glTranslatef(0.4,0.05,0);
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.45,0.05,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.35,0.05,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.40,-0.01,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();



    glFlush();

}
void RainView()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(51, 51, 255);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 102, 255);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 153, 255);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 184, 230);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 204, 255);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 204, 255);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 204, 255);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 153);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(140, 140, 140);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 230, 0);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 179, 0);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//road
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-1,-0.70);
    glVertex2d(-1,-1);
    glVertex2d(1,-1);
    glVertex2d(1,-0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-1,-0.85);
    glVertex2d(-1,-0.88);
    glVertex2d(1,-0.88);
    glVertex2d(1,-0.85);
    glEnd();
//main building
//top floor
    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2d(-0.55,0.60);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.60);
    glEnd();
//top floor glass
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(0.72,0.34);
    glVertex2d(0.72,0.57);
    glEnd();
//top floor glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.56);
    glVertex2d(0.72,0.56);
    glVertex2d(0.72,0.57);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.23,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();


//3rd floor
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-0.55,0.30);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.30);
    glEnd();
//3rd floor glass
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(0.72,0.05);
    glVertex2d(0.72,0.27);
    glEnd();
//3rd floor glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.16,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();
    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.04);
    glVertex2d(-0.52,0.05);
    glVertex2d(0.72,0.05);
    glVertex2d(0.72,0.04);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.72,0.27);
    glVertex2d(0.72,0.05);
    glVertex2d(0.71,0.05);
    glVertex2d(0.71,0.27);
    glEnd();

//2nd floor
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-0.55,0.0);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(0.72,-0.25);
    glVertex2d(0.72,-0.03);
    glEnd();
//2nd floor glass border //floor border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.24);
    glVertex2d(-0.52,-0.25);
    glVertex2d(0.72,-0.25);
    glVertex2d(0.72,-0.24);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.23,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();
//1st floor
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 153);
    glVertex2d(-0.55,-0.30);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,-0.30);
    glEnd();
//1st floor glass and floor border
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.34);
    glVertex2d(0.72,-0.34);
    glVertex2d(0.72,-0.35);
    glEnd();

    glTranslatef(0,-0.1,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.34);
    glVertex2d(0.72,-0.34);
    glVertex2d(0.72,-0.35);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.59);
    glVertex2d(-0.52,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.71,-0.35);
    glVertex2d(0.71,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.35);
    glEnd();

//top-1 floor
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);
    glVertex2d(-0.45,0.70);
    glVertex2d(-0.45,0.60);
    glVertex2d(0.55,0.60);
    glVertex2d(0.55,0.70);
    glEnd();
//left side
    glBegin(GL_QUADS);
    glColor3ub(140,140,140);
    glVertex2d(-0.85,0.60);
    glVertex2d(-0.85,-0.70);
    glVertex2d(-0.55,-0.70);
    glVertex2d(-0.55,0.60);
    glEnd();
//left side glass
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(-0.68,0.50);
    glVertex2d(-0.68,-0.65);
    glVertex2d(-0.57,-0.65);
    glVertex2d(-0.57,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 255);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,-0.65);
    glVertex2d(-0.68,-0.65);
    glVertex2d(-0.68,0.50);
    glEnd();
//left side glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,-0.65);
    glVertex2d(-0.81,-0.65);
    glVertex2d(-0.81,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();

    glTranslatef(0.05,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.10,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.15,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.20,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();
//left side floor border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,0.49);
    glVertex2d(-0.57,0.49);
    glVertex2d(-0.57,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.30,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.45,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.60,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.75,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.90,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-1.03,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

//right side
    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2d(0.75,0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.90,-0.70);
    glVertex2d(0.90,0.70);
    glEnd();
//right side window
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();

    glTranslatef(0,-0.2,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.4,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.6,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.8,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-1.0,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

//gate
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.25,-0.30);
    glVertex2d(-0.3,-0.45);
    glVertex2d(0.15,-0.45);
    glVertex2d(0.1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-0.3,-0.45);
    glVertex2d(-0.3,-0.70);
    glVertex2d(-0.28,-0.70);
    glVertex2d(-0.28,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(0.15,-0.45);
    glVertex2d(0.15,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.45);
    glEnd();
//Stairs
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.28,-0.60);
    glVertex2d(-0.28,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2d(-0.28,-0.67);
    glVertex2d(-0.28,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.67);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-0.28,-0.64);
    glVertex2d(-0.28,-0.67);
    glVertex2d(0.13,-0.67);
    glVertex2d(0.13,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77,77,77);
    glVertex2d(-0.28,-0.61);
    glVertex2d(-0.28,-0.64);
    glVertex2d(0.13,-0.64);
    glVertex2d(0.13,-0.61);
    glEnd();

//sun
    int i;

	GLfloat x=-.8f; GLfloat y=.8f; GLfloat radius =.12f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;

	glPushMatrix();
    glTranslatef(position,position, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 51, 51);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
//sky-1
    GLfloat radius1 =.05f;
    glTranslatef(1.6,0.1,0);

    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.54,0.1,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.47,0.1,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.50,0.14,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//sky-2
    glTranslatef(1.0,0.05,0);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.93,0.05,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.88,0.05,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.93,0.01,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//sky-3
    glTranslatef(0.4,0.05,0);
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.45,0.05,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.35,0.05,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.40,-0.01,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//rain effect
GLfloat x1= -1;
    GLfloat y1 = 1;
    glPushMatrix();
    glTranslatef(position1,position1,0.0f);
    glBegin(GL_LINES);
    for(int i=1;i<=10;i=i+2){

    glVertex2f(x1,y1);
    glVertex2f(x1-.04,y1-.04);

    x1 += .08;
    }
    glEnd();glPopMatrix();


    for(int j=0;j<=40;j++)
    {
    x1 = -1.05;
    y1= y1-.05;
    glPushMatrix();
     glTranslatef(position1,position1,0.0f);
    glBegin(GL_LINES);

    for(int i=0;i<=100;i++){

    glVertex2f(x1,y1);
    glVertex2f(x1-.04,y1-.04);

    x1 += .08;
    }
    glEnd();glPopMatrix();
    }
    glFlush();

}
void NightView()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77,77,77);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,102,102);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(140,140,140);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153,153);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179,179,179);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 230, 0);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 179, 0);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//road
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-1,-0.70);
    glVertex2d(-1,-1);
    glVertex2d(1,-1);
    glVertex2d(1,-0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-1,-0.85);
    glVertex2d(-1,-0.88);
    glVertex2d(1,-0.88);
    glVertex2d(1,-0.85);
    glEnd();
//main building
//top floor
    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2d(-0.55,0.60);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.60);
    glEnd();
//top floor glass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(0.72,0.34);
    glVertex2d(0.72,0.57);
    glEnd();
//top floor glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.56);
    glVertex2d(0.72,0.56);
    glVertex2d(0.72,0.57);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.23,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();


//3rd floor
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-0.55,0.30);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.30);
    glEnd();
//3rd floor glass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(0.72,0.05);
    glVertex2d(0.72,0.27);
    glEnd();
//3rd floor glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.16,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();
    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.04);
    glVertex2d(-0.52,0.05);
    glVertex2d(0.72,0.05);
    glVertex2d(0.72,0.04);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.72,0.27);
    glVertex2d(0.72,0.05);
    glVertex2d(0.71,0.05);
    glVertex2d(0.71,0.27);
    glEnd();

//2nd floor
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-0.55,0.0);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.0);
    glEnd();
//2nd floor glass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(0.72,-0.25);
    glVertex2d(0.72,-0.03);
    glEnd();
//2nd floor glass border //floor border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.24);
    glVertex2d(-0.52,-0.25);
    glVertex2d(0.72,-0.25);
    glVertex2d(0.72,-0.24);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.23,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();
//1st floor
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 153);
    glVertex2d(-0.55,-0.30);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,-0.30);
    glEnd();
//1st floor glass and floor border
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.34);
    glVertex2d(0.72,-0.34);
    glVertex2d(0.72,-0.35);
    glEnd();

    glTranslatef(0,-0.1,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.34);
    glVertex2d(0.72,-0.34);
    glVertex2d(0.72,-0.35);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.59);
    glVertex2d(-0.52,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.71,-0.35);
    glVertex2d(0.71,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.35);
    glEnd();

//top-1 floor
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);
    glVertex2d(-0.45,0.70);
    glVertex2d(-0.45,0.60);
    glVertex2d(0.55,0.60);
    glVertex2d(0.55,0.70);
    glEnd();
//left side
    glBegin(GL_QUADS);
    glColor3ub(140,140,140);
    glVertex2d(-0.85,0.60);
    glVertex2d(-0.85,-0.70);
    glVertex2d(-0.55,-0.70);
    glVertex2d(-0.55,0.60);
    glEnd();
//left side glass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.68,0.50);
    glVertex2d(-0.68,-0.65);
    glVertex2d(-0.57,-0.65);
    glVertex2d(-0.57,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,-0.65);
    glVertex2d(-0.68,-0.65);
    glVertex2d(-0.68,0.50);
    glEnd();
//left side glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,-0.65);
    glVertex2d(-0.81,-0.65);
    glVertex2d(-0.81,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();

    glTranslatef(0.05,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.10,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.15,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.20,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();
//left side floor border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,0.49);
    glVertex2d(-0.57,0.49);
    glVertex2d(-0.57,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.30,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.45,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.60,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.75,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.90,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-1.03,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

//right side
    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2d(0.75,0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.90,-0.70);
    glVertex2d(0.90,0.70);
    glEnd();
//right side window
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();

    glTranslatef(0,-0.2,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.4,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.6,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.8,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-1.0,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

//gate
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.25,-0.30);
    glVertex2d(-0.3,-0.45);
    glVertex2d(0.15,-0.45);
    glVertex2d(0.1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-0.3,-0.45);
    glVertex2d(-0.3,-0.70);
    glVertex2d(-0.28,-0.70);
    glVertex2d(-0.28,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(0.15,-0.45);
    glVertex2d(0.15,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.45);
    glEnd();
//Stairs
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.28,-0.60);
    glVertex2d(-0.28,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2d(-0.28,-0.67);
    glVertex2d(-0.28,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.67);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-0.28,-0.64);
    glVertex2d(-0.28,-0.67);
    glVertex2d(0.13,-0.67);
    glVertex2d(0.13,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77,77,77);
    glVertex2d(-0.28,-0.61);
    glVertex2d(-0.28,-0.64);
    glVertex2d(0.13,-0.64);
    glVertex2d(0.13,-0.61);
    glEnd();

//moon
    int i;

	GLfloat x=-.8f; GLfloat y=.8f; GLfloat radius =.12f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204,204,204);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//sky-1
    GLfloat radius1 =.05f;
    glTranslatef(1.6,0.1,0);

    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.54,0.1,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.47,0.1,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.50,0.14,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//sky-2
    glTranslatef(1.0,0.05,0);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.93,0.05,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.88,0.05,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.93,0.01,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//sky-3
    glTranslatef(0.4,0.05,0);
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.45,0.05,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.35,0.05,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.40,-0.01,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();



    glFlush();
}

void NightWithRain()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77,77,77);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,102,102);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(140,140,140);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153,153);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179,179,179);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 230, 0);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 179, 0);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//road
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-1,-0.70);
    glVertex2d(-1,-1);
    glVertex2d(1,-1);
    glVertex2d(1,-0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-1,-0.85);
    glVertex2d(-1,-0.88);
    glVertex2d(1,-0.88);
    glVertex2d(1,-0.85);
    glEnd();
//main building
//top floor
    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2d(-0.55,0.60);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.60);
    glEnd();
//top floor glass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(0.72,0.34);
    glVertex2d(0.72,0.57);
    glEnd();
//top floor glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.56);
    glVertex2d(0.72,0.56);
    glVertex2d(0.72,0.57);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.50);
    glVertex2d(-0.52,0.49);
    glVertex2d(0.72,0.49);
    glVertex2d(0.72,0.50);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.23,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.57);
    glVertex2d(-0.52,0.34);
    glVertex2d(-0.51,0.34);
    glVertex2d(-0.51,0.57);
    glEnd();
    glLoadIdentity();


//3rd floor
    glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2d(-0.55,0.30);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.30);
    glEnd();
//3rd floor glass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(0.72,0.05);
    glVertex2d(0.72,0.27);
    glEnd();
//3rd floor glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.16,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.26);
    glVertex2d(0.72,0.26);
    glVertex2d(0.72,0.27);
    glEnd();
    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.04);
    glVertex2d(-0.52,0.05);
    glVertex2d(0.72,0.05);
    glVertex2d(0.72,0.04);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,0.27);
    glVertex2d(-0.52,0.05);
    glVertex2d(-0.51,0.05);
    glVertex2d(-0.51,0.27);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.72,0.27);
    glVertex2d(0.72,0.05);
    glVertex2d(0.71,0.05);
    glVertex2d(0.71,0.27);
    glEnd();

//2nd floor
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-0.55,0.0);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,0.0);
    glEnd();
//2nd floor glass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(0.72,-0.25);
    glVertex2d(0.72,-0.03);
    glEnd();
//2nd floor glass border //floor border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.24);
    glVertex2d(-0.52,-0.25);
    glVertex2d(0.72,-0.25);
    glVertex2d(0.72,-0.24);
    glEnd();

    glTranslatef(0,-0.08,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.02);
    glVertex2d(0.72,-0.02);
    glVertex2d(0.72,-0.03);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.23,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.03);
    glVertex2d(-0.52,-0.25);
    glVertex2d(-0.51,-0.25);
    glVertex2d(-0.51,-0.03);
    glEnd();
    glLoadIdentity();
//1st floor
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 153);
    glVertex2d(-0.55,-0.30);
    glVertex2d(-0.55,-0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.75,-0.30);
    glEnd();
//1st floor glass and floor border
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.34);
    glVertex2d(0.72,-0.34);
    glVertex2d(0.72,-0.35);
    glEnd();

    glTranslatef(0,-0.1,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.34);
    glVertex2d(0.72,-0.34);
    glVertex2d(0.72,-0.35);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.59);
    glVertex2d(-0.52,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.4,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.0,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.52,-0.35);
    glVertex2d(-0.52,-0.60);
    glVertex2d(-0.51,-0.60);
    glVertex2d(-0.51,-0.35);
    glEnd();
    glLoadIdentity();


    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.71,-0.35);
    glVertex2d(0.71,-0.60);
    glVertex2d(0.72,-0.60);
    glVertex2d(0.72,-0.35);
    glEnd();

//top-1 floor
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);
    glVertex2d(-0.45,0.70);
    glVertex2d(-0.45,0.60);
    glVertex2d(0.55,0.60);
    glVertex2d(0.55,0.70);
    glEnd();
//left side
    glBegin(GL_QUADS);
    glColor3ub(140,140,140);
    glVertex2d(-0.85,0.60);
    glVertex2d(-0.85,-0.70);
    glVertex2d(-0.55,-0.70);
    glVertex2d(-0.55,0.60);
    glEnd();
//left side glass
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.68,0.50);
    glVertex2d(-0.68,-0.65);
    glVertex2d(-0.57,-0.65);
    glVertex2d(-0.57,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 153);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,-0.65);
    glVertex2d(-0.68,-0.65);
    glVertex2d(-0.68,0.50);
    glEnd();
//left side glass border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,-0.65);
    glVertex2d(-0.81,-0.65);
    glVertex2d(-0.81,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();

    glTranslatef(0.05,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.10,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.15,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.20,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.78,0.50);
    glVertex2d(-0.78,-0.65);
    glVertex2d(-0.77,-0.65);
    glVertex2d(-0.77,0.50);
    glEnd();
    glLoadIdentity();
//left side floor border
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.50);
    glVertex2d(-0.82,0.49);
    glVertex2d(-0.57,0.49);
    glVertex2d(-0.57,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();

    glTranslatef(0,-0.15,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.30,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.45,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.60,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.75,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.90,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-1.03,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.82,0.38);
    glVertex2d(-0.82,0.37);
    glVertex2d(-0.57,0.37);
    glVertex2d(-0.57,0.38);
    glEnd();
    glLoadIdentity();

//right side
    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2d(0.75,0.70);
    glVertex2d(0.75,-0.70);
    glVertex2d(0.90,-0.70);
    glVertex2d(0.90,0.70);
    glEnd();
//right side window
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();

    glTranslatef(0,-0.2,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.4,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.6,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-0.8,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

    glTranslatef(0,-1.0,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2d(0.80,0.66);
    glVertex2d(0.80,0.60);
    glVertex2d(0.85,0.60);
    glVertex2d(0.85,0.66);
    glEnd();
    glLoadIdentity();

//gate
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.25,-0.30);
    glVertex2d(-0.3,-0.45);
    glVertex2d(0.15,-0.45);
    glVertex2d(0.1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-0.3,-0.45);
    glVertex2d(-0.3,-0.70);
    glVertex2d(-0.28,-0.70);
    glVertex2d(-0.28,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(0.15,-0.45);
    glVertex2d(0.15,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.45);
    glEnd();
//Stairs
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.28,-0.60);
    glVertex2d(-0.28,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77, 77, 77);
    glVertex2d(-0.28,-0.67);
    glVertex2d(-0.28,-0.70);
    glVertex2d(0.13,-0.70);
    glVertex2d(0.13,-0.67);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 115, 115);
    glVertex2d(-0.28,-0.64);
    glVertex2d(-0.28,-0.67);
    glVertex2d(0.13,-0.67);
    glVertex2d(0.13,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77,77,77);
    glVertex2d(-0.28,-0.61);
    glVertex2d(-0.28,-0.64);
    glVertex2d(0.13,-0.64);
    glVertex2d(0.13,-0.61);
    glEnd();

//moon
    int i;

	GLfloat x=-.8f; GLfloat y=.8f; GLfloat radius =.12f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;



    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204,204,204);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//sky-1
    GLfloat radius1 =.05f;
    glTranslatef(1.6,0.1,0);

    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.54,0.1,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.47,0.1,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(1.50,0.14,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//sky-2
    glTranslatef(1.0,0.05,0);
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.93,0.05,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.88,0.05,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.93,0.01,0);
	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//sky-3
    glTranslatef(0.4,0.05,0);
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.45,0.05,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.35,0.05,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.40,-0.01,0);
	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
    //rain effect
    GLfloat x1= -1;
    GLfloat y1 = 1;
    glPushMatrix();
    glTranslatef(position1,position1,0.0f);
    glBegin(GL_LINES);
    for(int i=1;i<=10;i=i+2){

    glVertex2f(x1,y1);
    glVertex2f(x1-.04,y1-.04);

    x1 += .08;
    }
    glEnd();glPopMatrix();


    for(int j=0;j<=40;j++)
    {
    x1 = -1.05;
    y1= y1-.05;
    glPushMatrix();
     glTranslatef(position1,position1,0.0f);
    glBegin(GL_LINES);

    for(int i=0;i<=100;i++){

    glVertex2f(x1,y1);
    glVertex2f(x1-.04,y1-.04);

    x1 += .08;
    }
    glEnd();glPopMatrix();
    }
    glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
            case 'p':
            speed = 0.0f;
            break;
            case 's':
            speed = 0.1f;
            break;
            case 'r'://rain s
            glutDisplayFunc(RainView);
            glutPostRedisplay();
            break;
            case 'n': //night
            glutDisplayFunc(NightView);
            glutPostRedisplay();
            break;
            case 'd': //day
            glutDisplayFunc(day);
            glutPostRedisplay();
            break;
            case 'm': //night rain
            glutDisplayFunc(NightWithRain);
            glutPostRedisplay();
            break;
        glutPostRedisplay();
	}

}

void SpecialInput(int key, int x, int y)
{
        switch(key)
        {
            case GLUT_KEY_UP:
            speed=.5;
            break;
            case GLUT_KEY_DOWN:
            speed=.2;
            break;
            case GLUT_KEY_LEFT:
            break;
            case GLUT_KEY_RIGHT:
            break;
        }
    glutPostRedisplay();
    }

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Final Assignment 1");
	glutInitWindowSize(1280,960);
	glutDisplayFunc(day);

    glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(SpecialInput);

    glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update1, 0);
	glutMainLoop();


	return 0;
}
