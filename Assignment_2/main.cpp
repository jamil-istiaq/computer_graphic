/*
Name: Istiaq Md. Jamil
Id: 18-37918-2
Section:A
Course: Computer Graphic
*/

#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
#define PI 3.14159265358979323846


void display1() {
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


//road
    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-1);
    glVertex2d(1,-1);
    glVertex2d(1,-0.8);
    glEnd();
//red boarder
    glBegin(GL_QUADS);
    glColor3ub(125, 54, 54);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-0.75);
    glVertex2d(1,-0.75);
    glVertex2d(1,-0.8);
    glEnd();

//building circle
    int i;

	GLfloat x=-0.0f; GLfloat y=-0.06f; GLfloat radius =0.65f;
	int triangleAmount = 27; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(166, 166, 166);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(x +(radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount)));}
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-0.5,-0.6);
    glVertex2d(0.5,-0.6);
    glVertex2d(0.5,-0.45);
    glVertex2d(-0.5,-0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(61, 143, 61);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-0.6);
    glVertex2d(1,-0.6);
    glVertex2d(1,-0.75);
    glEnd();

//green tree
    GLfloat x1=-0.9; GLfloat y1=-0.5f; GLfloat radius1 =0.2f;
	int triangleAmount1 = 27; //# of triangles used to draw circle


	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(61, 143, 61);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(x1 + (radius1 * cos(i *  twicePi1 / triangleAmount1)),y1 + (radius1 * sin(i * twicePi1 / triangleAmount1)));}
        glEnd();


    GLfloat x2=-0.9f; GLfloat y2=-0.3f; GLfloat radius2 =0.23f;
	int triangleAmount2 = 27; //# of triangles used to draw circle


	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 179, 0);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount2;i++) {
			glVertex2f(x2 + (radius2 * cos(i *  twicePi2 / triangleAmount2)), y2 + (radius2 * sin(i * twicePi2 / triangleAmount2)));}

    glEnd();

    GLfloat x3=-0.84f; GLfloat y3=-0.4f; GLfloat radius3 =0.2f;
	int triangleAmount3 = 27; //# of triangles used to draw circle


	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount3;i++) {
			glVertex2f(x3 + (radius3 * cos(i *  twicePi3 / triangleAmount3)),y3 + (radius3 * sin(i * twicePi3 / triangleAmount3)));}

    glEnd();

//sun
    GLfloat x4=-0.84f; GLfloat y4=0.94f; GLfloat radius4 =0.2f;
	int triangleAmount4 = 17; //# of triangles used to draw circle


	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 51, 0);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount4;i++) {
			glVertex2f(x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)), y4 + (radius4 * sin(i * twicePi4 / triangleAmount4)));}

    glEnd();

//sky

    GLfloat x6=0.9f; GLfloat y6=0.64f; GLfloat radius6 =0.2f;
	int triangleAmount6 = 17; //# of triangles used to draw circle


	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 255);
		glVertex2f(x6, y6); // center of circle
		for(i = 0; i <= triangleAmount6;i++) {
			glVertex2f( x6 + (radius6 * cos(i *  twicePi6 / triangleAmount6)),y6 + (radius6 * sin(i * twicePi6 / triangleAmount6)));}

    glEnd();


    GLfloat x7=0.45f; GLfloat y7=0.84f; GLfloat radius7 =0.2f;
	int triangleAmount7 = 17; //# of triangles used to draw circle


	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 255);
		glVertex2f(x7, y7); // center of circle
		for(i = 0; i <= triangleAmount7;i++) {
                glVertex2f(x7 + (radius7 * cos(i *  twicePi7 / triangleAmount7)), y7 + (radius7 * sin(i * twicePi7 / triangleAmount7)));}
    glEnd();


    GLfloat x5=0.84f; GLfloat y5=0.94f; GLfloat radius5 =0.3f;
	int triangleAmount5 = 17; //# of triangles used to draw circle


	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 255);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount5;i++) {
			glVertex2f(
		            x5 + (radius5 * cos(i *  twicePi5 / triangleAmount5)),y5 + (radius5 * sin(i * twicePi5 / triangleAmount5)));}

    glEnd();

    GLfloat x8=-0.7f; GLfloat y8=0.4f; GLfloat radius8 =0.12f;
	int triangleAmount8 = 17; //# of triangles used to draw circle


	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 255);
		glVertex2f(x8, y8); // center of circle
		for(i = 0; i <= triangleAmount8;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),y8 + (radius8 * sin(i * twicePi8 / triangleAmount8)));}

    glEnd();

    GLfloat x9=-0.8f; GLfloat y9=0.5f; GLfloat radius9 =0.12f;
	int triangleAmount9 = 17; //# of triangles used to draw circle


	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 255);
		glVertex2f(x9, y9); // center of circle
		for(i = 0; i <= triangleAmount9;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi9 / triangleAmount9)),y9 + (radius9 * sin(i * twicePi9 / triangleAmount9)));}

    glEnd();


    GLfloat xa=-0.85f; GLfloat ya=0.4f; GLfloat radiusa =0.12f;
	int triangleAmounta = 17; //# of triangles used to draw circle


	GLfloat twicePia = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 102, 255);
		glVertex2f(xa, ya); // center of circle
		for(i = 0; i <= triangleAmounta;i++) {
			glVertex2f(xa+(radiusa* cos(i *  twicePia / triangleAmounta)), ya + (radiusa * sin(i * twicePia / triangleAmounta)));}

    glEnd();

//base quad
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(-0.5,-0.6);
    glVertex2d(0.5,-0.6);
    glVertex2d(0.5,-0.45);
    glVertex2d(-0.5,-0.45);
    glEnd();
//green
    glBegin(GL_QUADS);
    glColor3ub(61, 143, 61);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-0.6);
    glVertex2d(1,-0.6);
    glVertex2d(1,-0.75);
    glEnd();
//door
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.2,-0.6);
    glVertex2d(0.2,-0.6);
    glVertex2d(0.2,-0.45);
    glVertex2d(-0.2,-0.45);
    glEnd();
//window row 1
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 153);
    glVertex2d(-0.6,0.2);
    glVertex2d(-0.35,0.35);
    glVertex2d(-0.2,0.3);
    glVertex2d(-0.2,0.45);
    glVertex2d(-0.53,0.32);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 153);
    glVertex2d(0.6,0.18);
    glVertex2d(0.35,0.32);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.45);
    glVertex2d(0.53,0.32);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 153);
    glVertex2d(-0.2,0.3);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.45);
    glVertex2d(-0.2,0.45);
    glVertex2d(-0.53,0.32);
    glEnd();

//window row 2
    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 153);
    glVertex2d(-0.63,-0.2);
    glVertex2d(-0.40,-0.12);
    glVertex2d(-0.2,-0.1);
    glVertex2d(-0.2,0.1);
    glVertex2d(-0.65,-0.05);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 153);
    glVertex2d(0.63,-0.2);
    glVertex2d(0.40,-0.12);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,0.1);
    glVertex2d(0.65,-0.05);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 153);
    glVertex2d(-0.2,-0.1);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,0.1);
    glVertex2d(-0.2,0.1);
    glEnd();
//Side square building
    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2d(0.7,-0.6);
    glVertex2d(1,-0.6);
    glVertex2d(1,-0.4);
    glVertex2d(0.7,-0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
    glVertex2d(0.7,-0.4);
    glVertex2d(1,-0.4);
    glVertex2d(1,-0.2);
    glVertex2d(0.7,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2d(0.7,-0.2);
    glVertex2d(1,-0.2);
    glVertex2d(1,0.0);
    glVertex2d(0.7,0.0);
    glEnd();
//Sun light lines
    glBegin(GL_LINES);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.6,0.98);
    glVertex2d(-0.3,0.90);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.58,0.85);
    glVertex2d(-0.4,0.80);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.7,0.75);
    glVertex2d(-0.4,0.65);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.96,0.75);
    glVertex2d(-0.90,0.60);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.80,0.70);
    glVertex2d(-0.65,0.60);
    glEnd();

//AIUB
    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.31,-0.84);
    glVertex2d(-0.37,-0.94);
    glVertex2d(-0.34,-0.94);
    glVertex2d(-0.27,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.31,-0.84);
    glVertex2d(-0.25,-0.94);
    glVertex2d(-0.21,-0.94);
    glVertex2d(-0.27,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.32,-0.90);
    glVertex2d(-0.35,-0.92);
    glVertex2d(-0.22,-0.92);
    glVertex2d(-0.25,-0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.14,-0.84);
    glVertex2d(-0.14,-0.94);
    glVertex2d(-0.17,-0.94);
    glVertex2d(-0.17,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);
    glVertex2d(-0.06,-0.84);
    glVertex2d(-0.06,-0.94);
    glVertex2d(-0.09,-0.94);
    glVertex2d(-0.09,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);
    glVertex2d(0.035,-0.84);
    glVertex2d(0.035,-0.94);
    glVertex2d(0.0,-0.94);
    glVertex2d(0.0,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,102,0);
    glVertex2d(-0.06,-0.94);
    glVertex2d(0.0,-0.94);
    glVertex2d(0.0,-0.915);
    glVertex2d(-0.06,-0.915);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 102, 0);
    glVertex2d(0.07,-0.84);
    glVertex2d(0.07,-0.94);
    glVertex2d(0.17,-0.94);
    glVertex2d(0.17,-0.84);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2d(0.095,-0.925);
    glVertex2d(0.145,-0.925);
    glVertex2d(0.145,-0.90);
    glVertex2d(0.095,-0.90);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(89, 89, 89);
    glVertex2d(0.095,-0.885);
    glVertex2d(0.145,-0.885);
    glVertex2d(0.145,-0.86);
    glVertex2d(0.095,-0.86);
    glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Lab Task");
	glutInitWindowSize(1024, 960);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}

