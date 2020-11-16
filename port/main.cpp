#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846
GLfloat g = 0.0f;
void Idle()
{
    glutPostRedisplay();
}


void display1() {


	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


	int i,j,k;

	GLfloat x=-.7f; GLfloat y=.8f; GLfloat radius =.15f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 102, 0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
//doc black color
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.4);
    glVertex2d(-0.1,-0.4);
    glVertex2d(-0.1,-0.36);
    glVertex2d(-1,-0.36);
    glEnd();
//doc off-white color
    glBegin(GL_QUADS);
    glColor3ub(115,115,115);
    glVertex2d(-1,-0.36);
    glVertex2d(-0.1,-0.36);
    glVertex2d(-0.1,-0.32);
    glVertex2d(-1,-0.32);
    glEnd();
//doc stand-1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.9,-0.44);
    glVertex2d(-0.87,-0.44);
    glVertex2d(-0.87,-0.4);
    glVertex2d(-0.9,-0.4);
    glEnd();
//doc stand-2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.4,-0.44);
    glVertex2d(-0.37,-0.44);
    glVertex2d(-0.37,-0.4);
    glVertex2d(-0.4,-0.4);
    glEnd();
//first home
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-1,-0.32);
    glVertex2d(-0.8,-0.32);
    glVertex2d(-0.8,-0.1);
    glVertex2d(-1,-0.1);
    glEnd();
//first home gate
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.93,-0.32);
    glVertex2d(-0.85,-0.32);
    glVertex2d(-0.85,-0.22);
    glVertex2d(-0.93,-0.22);
    glEnd();
//2nd home
    glBegin(GL_QUADS);
    glColor3ub(217,217,217);
    glVertex2d(-0.8,-0.32);
    glVertex2d(-0.65,-0.32);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.8,-0.12);
    glEnd();
//2nd home gate
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.75,-0.32);
    glVertex2d(-0.70,-0.32);
    glVertex2d(-0.70,-0.22);
    glVertex2d(-0.75,-0.22);
    glEnd();
//container 1st row
    glBegin(GL_QUADS);
    glColor3ub(153,102,255);
    glVertex2d(-0.62,-0.32);
    glVertex2d(-0.52,-0.32);
    glVertex2d(-0.52,-0.28);
    glVertex2d(-0.62,-0.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,102,0);
    glVertex2d(-0.52,-0.32);
    glVertex2d(-0.42,-0.32);
    glVertex2d(-0.42,-0.28);
    glVertex2d(-0.52,-0.28);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2d(-0.42,-0.32);
    glVertex2d(-0.32,-0.32);
    glVertex2d(-0.32,-0.28);
    glVertex2d(-0.42,-0.28);
    glEnd();
//2nd row

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-0.62,-0.28);
    glVertex2d(-0.52,-0.28);
    glVertex2d(-0.52,-0.24);
    glVertex2d(-0.62,-0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2d(-0.52,-0.28);
    glVertex2d(-0.42,-0.28);
    glVertex2d(-0.42,-0.24);
    glVertex2d(-0.52,-0.24);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,153,51);
    glVertex2d(-0.42,-0.28);
    glVertex2d(-0.32,-0.28);
    glVertex2d(-0.32,-0.24);
    glVertex2d(-0.42,-0.24);
    glEnd();
//ship red part

    glBegin(GL_QUADS);
    glColor3ub(255,51,0);
    glVertex2d(0.0,-0.6);;
    glVertex2d(0.1,-0.7);
    glVertex2d(0.3,-0.7);
    glVertex2d(0.3,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,0,0);
    glVertex2d(0.3,-0.6);
    glVertex2d(0.3,-0.7);
    glVertex2d(0.5,-0.7);
    glVertex2d(0.6,-0.6);
    glEnd();
//ship white part
    glBegin(GL_QUADS);
    glColor3ub(230,230,220);
    glVertex2d(0.0,-0.4);
    glVertex2d(0.0,-0.6);
    glVertex2d(0.3,-0.6);
    glVertex2d(0.3,-0.3);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(179,179,179);
    glVertex2d(0.3,-0.3);
    glVertex2d(0.3,-0.6);
    glVertex2d(0.6,-0.6);
    glVertex2d(0.6,-0.4);
    glEnd();
//ship wire
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2d(-0.1,-0.35);
    glVertex2d(0,-0.5);
    glVertex2d(-0.1,-0.38);
    glVertex2d(0,-0.6);
    glEnd();
//ship cont.
    glBegin(GL_QUADS);
    glColor3ub(255,255,0);
    glVertex2d(0.08,-0.265);
    glVertex2d(0.08,-0.38);
    glVertex2d(0.3,-0.3);
    glVertex2d(0.3,-0.265);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(0.3,-0.3);
    glVertex2d(0.3,-0.265);
    glVertex2d(0.55,-0.265);
    glVertex2d(0.55,-0.39);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(153,0,255);
    glVertex2d(0.3,-0.165);
    glVertex2d(0.3,-0.265);
    glVertex2d(0.5,-0.265);
    glVertex2d(0.5,-0.165);
    glEnd();


//yellow field

	glBegin(GL_QUADS);
	glColor3ub(230,184,0);
	glVertex2d(-1,0.2);
	glVertex2d(-1,0.03);
	glVertex2d(0.1,0.03);
	glVertex2d(0.1,0.2);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,0);
	glVertex2d(-1,0.2);
	glVertex2d(-0.6,0.2);
	glVertex2d(-0.8,0.6);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,0);
	glVertex2d(-0.6,0.2);
	glVertex2d(-0.3,0.2);
	glVertex2d(-0.5,0.3);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(255,255,0);
	glVertex2d(-0.3,0.2);
	glVertex2d(0.1,0.2);
	glVertex2d(-0.2,0.3);
	glEnd();

//green field
    glBegin(GL_QUADS);
	glColor3ub(230,184,0);
    glVertex2d(0.1,0.2);
    glVertex2d(1,0.2);
    glVertex2d(1,0.03);
	glVertex2d(0.1,0.03);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,255,0);
	glVertex2d(1,0.2);
	glVertex2d(1,0.5);
	glVertex2d(0.7,0.2);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0,255,0);
	glVertex2d(0.7,0.2);
	glVertex2d(0.6,0.3);
	glVertex2d(0.5,0.2);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(153, 51, 255);
	glVertex2d(-1,0.2);
	glVertex2d(-0.8,0.6);
	glVertex2d(-1,0.5);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(153, 153, 255);
	glVertex2d(-0.8,0.6);
	glVertex2d(-0.6,0.2);
	glVertex2d(-0.855,0.5);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 51, 255);
	glVertex2d(-0.6,0.2);
	glVertex2d(-0.5,0.3);
	glVertex2d(-0.5,0.6);
	glVertex2d(-0.7,0.4);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 153, 255);
	glVertex2d(-0.5,0.3);
	glVertex2d(-0.3,0.2);
    glVertex2d(-0.2,0.3);
	glVertex2d(-0.5,0.6);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(153, 51, 255);
	glVertex2d(-0.2,0.3);
	glVertex2d(0.1,0.2);
	glVertex2d(0.3,0.2);
	glVertex2d(-0.5,0.6);
	glEnd();

    GLfloat x6=0.75f; GLfloat y6=0.74f; GLfloat radius6 =0.2f;
	int triangleAmount6 = 17;


	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 255);
		glVertex2f(x6, y6);
		for(i = 0; i <= triangleAmount6;i++) {
			glVertex2f( x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),y6 + (radius6 * sin(i * twicePi6 / triangleAmount6)));}

    glEnd();


    GLfloat x7=0.55f; GLfloat y7=0.84f; GLfloat radius7 =0.2f;
	int triangleAmount7 = 17;

	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 255);
		glVertex2f(x7, y7);
		for(i = 0; i <= triangleAmount7;i++) {
                glVertex2f(x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)), y7 + (radius7 * sin(i * twicePi7 / triangleAmount7)));}
    glEnd();


    GLfloat x5=0.84f; GLfloat y5=0.94f; GLfloat radius5 =0.2f;
	int triangleAmount5 = 17;


	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 255);
		glVertex2f(x5, y5);
		for(i = 0; i <= triangleAmount5;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount5)),y5 + (radius5 * sin(i * twicePi5 / triangleAmount5)));}

    glEnd();
//road
    glBegin(GL_QUADS);
    glColor3ub(102,102,102);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(1,-1);
    glVertex2d(1,-0.7);
    glEnd();
//road middle white part
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-1,-0.85);
    glVertex2d(-1,-0.82);
    glVertex2d(1,-0.82);
    glVertex2d(1,-0.85);
    glEnd();
//black ship
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-1,-0.67);
    glVertex2d(-0.45,-0.67);
    glVertex2d(-0.5,-0.65);
    glVertex2d(-1,-0.65);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.65);
    glVertex2d(-0.5,-0.65);
    glVertex2d(-0.4,-0.55);
    glVertex2d(-1,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153,102,255);
    glVertex2d(-1,-0.60);
    glVertex2d(-1,-0.55);
    glVertex2d(-0.89,-0.55);
    glVertex2d(-0.89,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.89,-0.60);
    glVertex2d(-0.89,-0.55);
    glVertex2d(-0.76,-0.55);
    glVertex2d(-0.76,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-0.76,-0.60);
    glVertex2d(-0.76,-0.55);
    glVertex2d(-0.63,-0.55);
    glVertex2d(-0.63,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);
    glVertex2d(-0.63,-0.60);
    glVertex2d(-0.63,-0.55);
    glVertex2d(-0.50,-0.55);
    glVertex2d(-0.50,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2d(-0.63,-0.55);
    glVertex2d(-0.63,-0.50);
    glVertex2d(-0.50,-0.50);
    glVertex2d(-0.50,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,255);
    glVertex2d(-0.76,-0.55);
    glVertex2d(-0.76,-0.50);
    glVertex2d(-0.63,-0.50);
    glVertex2d(-0.63,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.89,-0.55);
    glVertex2d(-0.89,-0.50);
    glVertex2d(-0.76,-0.50);
    glVertex2d(-0.76,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,102,255);
    glVertex2d(-1,-0.55);
    glVertex2d(-1,-0.50);
    glVertex2d(-0.89,-0.50);
    glVertex2d(-0.89,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,204,0);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.45);
    glVertex2d(-0.89,-0.45);
    glVertex2d(-0.89,-0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2d(-0.89,-0.50);
    glVertex2d(-0.89,-0.45);
    glVertex2d(-0.76,-0.45);
    glVertex2d(-0.76,-0.50);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(1,1,1);
    glVertex2d(-0.4,-0.55);
    glVertex2d(-0.2,-0.7);
    glEnd();

//copy //translate


    glTranslatef(0.4,0.50,0);
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-1,-0.67);
    glVertex2d(-0.45,-0.67);
    glVertex2d(-0.5,-0.65);
    glVertex2d(-1,-0.65);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(-1,-0.65);
    glVertex2d(-0.5,-0.65);
    glVertex2d(-0.4,-0.55);
    glVertex2d(-1,-0.55);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,102,255);
    glVertex2d(-1,-0.60);
    glVertex2d(-1,-0.55);
    glVertex2d(-0.89,-0.55);
    glVertex2d(-0.89,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.89,-0.60);
    glVertex2d(-0.89,-0.55);
    glVertex2d(-0.76,-0.55);
    glVertex2d(-0.76,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-0.76,-0.60);
    glVertex2d(-0.76,-0.55);
    glVertex2d(-0.63,-0.55);
    glVertex2d(-0.63,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);
    glVertex2d(-0.63,-0.60);
    glVertex2d(-0.63,-0.55);
    glVertex2d(-0.50,-0.55);
    glVertex2d(-0.50,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2d(-0.63,-0.55);
    glVertex2d(-0.63,-0.50);
    glVertex2d(-0.50,-0.50);
    glVertex2d(-0.50,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,255);
    glVertex2d(-0.76,-0.55);
    glVertex2d(-0.76,-0.50);
    glVertex2d(-0.63,-0.50);
    glVertex2d(-0.63,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.89,-0.55);
    glVertex2d(-0.89,-0.50);
    glVertex2d(-0.76,-0.50);
    glVertex2d(-0.76,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,102,255);
    glVertex2d(-1,-0.55);
    glVertex2d(-1,-0.50);
    glVertex2d(-0.89,-0.50);
    glVertex2d(-0.89,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,204,0);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.45);
    glVertex2d(-0.89,-0.45);
    glVertex2d(-0.89,-0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2d(-0.89,-0.50);
    glVertex2d(-0.89,-0.45);
    glVertex2d(-0.76,-0.45);
    glVertex2d(-0.76,-0.50);
    glEnd();


//scale

    glScalef(0.8,0.8,0);
    glTranslatef(1,-0.15,0);

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-1,-0.67);
    glVertex2d(-0.45,-0.67);
    glVertex2d(-0.5,-0.65);
    glVertex2d(-1,-0.65);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(-1,-0.65);
    glVertex2d(-0.5,-0.65);
    glVertex2d(-0.4,-0.55);
    glVertex2d(-1,-0.55);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153,102,255);
    glVertex2d(-1,-0.60);
    glVertex2d(-1,-0.55);
    glVertex2d(-0.89,-0.55);
    glVertex2d(-0.89,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.89,-0.60);
    glVertex2d(-0.89,-0.55);
    glVertex2d(-0.76,-0.55);
    glVertex2d(-0.76,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2d(-0.76,-0.60);
    glVertex2d(-0.76,-0.55);
    glVertex2d(-0.63,-0.55);
    glVertex2d(-0.63,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);
    glVertex2d(-0.63,-0.60);
    glVertex2d(-0.63,-0.55);
    glVertex2d(-0.50,-0.55);
    glVertex2d(-0.50,-0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,255);
    glVertex2d(-0.63,-0.55);
    glVertex2d(-0.63,-0.50);
    glVertex2d(-0.50,-0.50);
    glVertex2d(-0.50,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,255);
    glVertex2d(-0.76,-0.55);
    glVertex2d(-0.76,-0.50);
    glVertex2d(-0.63,-0.50);
    glVertex2d(-0.63,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.89,-0.55);
    glVertex2d(-0.89,-0.50);
    glVertex2d(-0.76,-0.50);
    glVertex2d(-0.76,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,102,255);
    glVertex2d(-1,-0.55);
    glVertex2d(-1,-0.50);
    glVertex2d(-0.89,-0.50);
    glVertex2d(-0.89,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,204,0);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.45);
    glVertex2d(-0.89,-0.45);
    glVertex2d(-0.89,-0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2d(-0.89,-0.50);
    glVertex2d(-0.89,-0.45);
    glVertex2d(-0.76,-0.45);
    glVertex2d(-0.76,-0.50);
    glEnd();
    glLoadIdentity();

//crane

    glBegin(GL_QUADS);
    glColor3ub(108,108,147);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.9,-0.7);
    glVertex2d(0.9,-0.2);
    glVertex2d(0.7,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(108, 108, 147);
    glVertex2d(0.7,-0.2);
    glVertex2d(0.9,-0.2);
    glVertex2d(0.4,0.3);
    glVertex2d(0.2,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.35,0.3);
    glVertex2d(0.25,0.3);
    glVertex2d(0.25,0.4);
    glVertex2d(0.35,0.4);
    glEnd();
//rotate crane light

    glTranslatef(0.3, 0.4, 0.0);

    glPushMatrix();
    glRotatef(g,0,1,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2d(0.0,0.0);
    glVertex2d(0.4,0.35);
    glVertex2d(0.4,0.45);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,255,255);
    glVertex2d(0.0,0.0);
    glVertex2d(0.2,0.35);
    glVertex2d(0.2,0.45);
    glEnd();



    glPopMatrix();
    glLoadIdentity();
    g+=0.01;




//ship container
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2d(0.08,-0.175);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.3);
    glVertex2d(0.3,-0.175);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153,0,153);
    glVertex2d(0.08,-0.265);
    glVertex2d(0.3,-0.265);
    glVertex2d(0.3,-0.175);
    glVertex2d(0.08,-0.175);
    glEnd();


//windmill-1
    glTranslatef(-.8f, 0.35f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(153,76,0);
    glVertex2d(.02,0);
    glVertex2d(-.02,0);
    glVertex2d(-.02,-.3);
    glVertex2d(.02,-.3);
    glEnd();

    glLoadIdentity();

    glTranslatef(-.8f, 0.35f, 0.0f);

    glPushMatrix();
    glRotatef(g,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,204,0);
    glVertex2d(0.0, 0.0);
    glVertex2d(0.05, 0.1);
    glVertex2d(-0.05, 0.1);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,255);
    glVertex2d(0.0, 0.0);
    glVertex2d(-0.1, 0.05);
    glVertex2d(-0.1, -0.05);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,255);
    glVertex2d(0.0, 0.0);
    glVertex2d(-0.05, -0.1);
    glVertex2d(0.05, -0.1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2d(0.0, 0.0);
    glVertex2d(0.1, -0.05);
    glVertex2d(0.1, .05);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    g+=0.03;

//windmill-2

    glTranslatef(-.6f, 0.35f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(153,76,0);
    glVertex2d(.02,0);
    glVertex2d(-.02,0);
    glVertex2d(-.02,-.3);
    glVertex2d(.02,-.3);
    glEnd();

    glLoadIdentity();

    glTranslatef(-.6f, 0.35f, 0.0f);

    glPushMatrix();
    glRotatef(g,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,255);
    glVertex2d(0.0, 0.0);
    glVertex2d(0.05, 0.1);
    glVertex2d(-0.05, 0.1);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2d(0.0, 0.0);
    glVertex2d(-0.1, 0.05);
    glVertex2d(-0.1, -0.05);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(0,204,0);
    glVertex2d(0.0, 0.0);
    glVertex2d(-0.05, -0.1);
    glVertex2d(0.05, -0.1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,255);
    glVertex2d(0.0, 0.0);
    glVertex2d(0.1, -0.05);
    glVertex2d(0.1, .05);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    g+=0.01;

//windmill-3

    glScalef(0.8,0.8,0);
    glTranslatef(-.5f, 0.45f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(153,76,0);
    glVertex2d(.02,0);
    glVertex2d(-.02,0);
    glVertex2d(-.02,-.3);
    glVertex2d(.02,-.3);
    glEnd();

    glLoadIdentity();

    glScalef(0.8,0.8,0);
    glTranslatef(-.5f, 0.45f, 0.0f);

    glPushMatrix();
    glRotatef(g,0,0,1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,128,255);
    glVertex2d(0.0, 0.0);
    glVertex2d(0.05, 0.1);
    glVertex2d(-0.05, 0.1);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2d(0.0, 0.0);
    glVertex2d(-0.1, 0.05);
    glVertex2d(-0.1, -0.05);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,255);
    glVertex2d(0.0, 0.0);
    glVertex2d(-0.05, -0.1);
    glVertex2d(0.05, -0.1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(0,255,0);
    glVertex2d(0.0, 0.0);
    glVertex2d(0.1, -0.05);
    glVertex2d(0.1, .05);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
    g+=0.01;

//truck
    glLoadIdentity();
    glBegin(GL_POLYGON);
    glColor3ub(255,205,0);
    glVertex2d(-0.9,-0.88);
    glVertex2d(-0.7,-0.88);
    glVertex2d(-0.7,-0.70);//3
    glVertex2d(-0.8,-0.70);//4
    glVertex2d(-0.9,-0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.8,-0.72);
    glVertex2d(-0.72,-0.72);
    glVertex2d(-0.72,-0.80);
    glVertex2d(-0.8,-0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(205,105,100);
    glVertex2d(-0.7,-0.88);
    glVertex2d(-0.3,-0.88);
    glVertex2d(-0.3,-0.85);
    glVertex2d(-0.7,-0.85);
    glEnd();

//truck tier-1

    //glLoadIdentity();
    GLfloat x8=-0.8f; GLfloat y8=-0.88f; GLfloat radius8 =0.05f;
	int triangleAmount8 = 17;


	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
		glVertex2f(x8, y8);
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8+(radius8*cos(i*twicePi8/triangleAmount8)),y8 + (radius8*sin(i*twicePi8/triangleAmount8)));}

    glEnd();


    GLfloat x9=-0.8f; GLfloat y9=-0.88f; GLfloat radius9 =0.02f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x9, y9);
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x9+(radius9*cos(i*twicePi8/triangleAmount8)),y9 + (radius9*sin(i*twicePi8/triangleAmount8)));}

    glEnd();

//truck container

    glBegin(GL_QUADS);
    glColor3ub(153,0,255);
    glVertex2d(-0.68,-0.765);
    glVertex2d(-0.68,-0.865);
    glVertex2d(-0.5,-0.865);
    glVertex2d(-0.5,-0.765);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(253,0,255);
    glVertex2d(-0.5,-0.765);
    glVertex2d(-0.5,-0.865);
    glVertex2d(-0.32,-0.865);
    glVertex2d(-0.32,-0.765);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(205,0,105);
    glVertex2d(-0.5,-0.765);
    glVertex2d(-0.5,-0.665);
    glVertex2d(-0.32,-0.665);
    glVertex2d(-0.32,-0.765);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(185,102,202);
    glVertex2d(-0.68,-0.765);
    glVertex2d(-0.68,-0.665);
    glVertex2d(-0.5,-0.665);
    glVertex2d(-0.5,-0.765);
    glEnd();

//truck tier-2


    GLfloat x10=-0.5f; GLfloat y10=-0.88f; GLfloat radius10 =0.05f;
	int triangleAmount10 = 17;


	GLfloat twicePi10 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
		glVertex2f(x10, y10);
		for(i = 0; i <= triangleAmount10;i++) {
			glVertex2f(
		            x10+(radius10*cos(i*twicePi10/triangleAmount10)),y10 + (radius10*sin(i*twicePi10/triangleAmount10)));}

    glEnd();

    GLfloat x11=-0.5f; GLfloat y11=-0.88f; GLfloat radius11 =0.02f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x11, y11);
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x11+(radius11*cos(i*twicePi8/triangleAmount8)),y11 + (radius11*sin(i*twicePi8/triangleAmount8)));}

    glEnd();

//truck tier-3

    GLfloat x12=-0.39f; GLfloat y12=-0.88f; GLfloat radius12 =0.05f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(153, 153, 153);
		glVertex2f(x12, y12);
		for(i = 0; i <= triangleAmount10;i++) {
			glVertex2f(
		            x12+(radius12*cos(i*twicePi10/triangleAmount10)),y12 + (radius12*sin(i*twicePi10/triangleAmount10)));}

    glEnd();

    GLfloat x13=-0.39f; GLfloat y13=-0.88f; GLfloat radius13 =0.02f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x13, y13);
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x13+(radius13*cos(i*twicePi8/triangleAmount8)),y13 + (radius13*sin(i*twicePi8/triangleAmount8)));}

    glEnd();

    glFlush();
}





int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Assignment-3");
	glutInitWindowSize(1280,960);
	glutDisplayFunc(display1);
    glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}
