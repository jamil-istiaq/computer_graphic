#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846

void display1() {
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


	int i;

	GLfloat x=-.7f; GLfloat y=.8f; GLfloat radius =.15f;
	int triangleAmount = 27; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 102, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

/*	glBegin(GL_QUADS);
	glColor3ub(255,204,0);
	glVertex2d(-1,0.02f);
	glVertex2d(1,0.02f);
	glVertex2d(1,0.06f);
	glVertex2d(-1,0.06f);
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(250,0,0);
    glVertex2d(0.5,-0.4);
    glVertex2d(1,-0.4);
    glVertex2d(1,-0.35);
    glVertex2d(0.45,-0.35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2d(0.45,-0.35);
    glVertex2d(1,-0.35);
    glVertex2d(1,-0.24);
    glVertex2d(0.92,-0.20);
    glVertex2d(0.82,-0.20);
    glVertex2d(0.82,-0.32);
    glVertex2d(0.6,-0.32);
    glVertex2d(0.56,-0.28);
    glVertex2d(0.36,-0.28);
    glVertex2d(0.45,-0.35);
    glEnd();*/
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
    glColor3ub(153,0,153);
    glVertex2d(0.08,-0.265);
    glVertex2d(0.3,-0.265);
    glVertex2d(0.3,-0.175);
    glVertex2d(0.08,-0.175);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153,0,255);
    glVertex2d(0.3,-0.165);
    glVertex2d(0.3,-0.265);
    glVertex2d(0.5,-0.265);
    glVertex2d(0.5,-0.165);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,255,0);
    glVertex2d(0.2,-0.075);
    glVertex2d(0.2,-0.175);
    glVertex2d(0.5,-0.175);
    glVertex2d(0.5,-0.075);
    glEnd();
//yellow field
    glBegin(GL_QUADS);
	glColor3ub(255,204,0);
	glVertex2d(-1,0.03f);
	glVertex2d(1,0.03f);
	glVertex2d(1,0.07f);
	glVertex2d(-1,0.07f);
	glEnd();

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
	int triangleAmount6 = 17; //# of triangles used to draw circle


	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 255);
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount6;i++) {
			glVertex2f( x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),y6 + (radius6 * sin(i * twicePi6 / triangleAmount6)));}

    glEnd();


    GLfloat x7=0.55f; GLfloat y7=0.84f; GLfloat radius7 =0.2f;
	int triangleAmount7 = 17; //# of triangles used to draw circle


	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 255);
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount7;i++) {
                glVertex2f(x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)), y7 + (radius7 * sin(i * twicePi7 / triangleAmount7)));}
    glEnd();


    GLfloat x5=0.84f; GLfloat y5=0.94f; GLfloat radius5 =0.2f;
	int triangleAmount5 = 17; //# of triangles used to draw circle


	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 255);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount5;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount5)),y5 + (radius5 * sin(i * twicePi5 / triangleAmount5)));}

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,102,102);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(1,-1);
    glVertex2d(1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-1,-0.85);
    glVertex2d(-1,-0.82);
    glVertex2d(1,-0.82);
    glVertex2d(1,-0.85);
    glEnd();

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


    glBegin(GL_LINES);
    glColor3ub(1,1,1);
    glVertex2d(-0.4,-0.55);
    glVertex2d(-0.2,-0.7);
    glEnd();



































    glFlush();
}













int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Task");
	glutInitWindowSize(1280,960);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
