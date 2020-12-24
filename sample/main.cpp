#include<cstdio>

#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include <GL/gl.h>
 // GLUT, include glu.h and gl.h
#include<math.h>>

# define PI           3.14159265358979323846

GLfloat position = 0.0f;
GLfloat position1 = 0.0f;



GLfloat speed = 0.2f;
GLfloat speed1 = 0.1f;



void update(int value) {

    if(position <-1.0)
        position = 1.0f;

    position -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {

    if(position1 <-1.0)
        position1 = 1.0f;

    position1 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

//mouse controller for plane
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;
			}
	glutPostRedisplay();
	}



	//for special up down left right arrow

	void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed1=.5;
break;
case GLUT_KEY_DOWN:
speed1=.2;
break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
break;}
glutPostRedisplay();
}

//keybord for pause and resume




//For rotation windmill
GLfloat k = 0.0f;
void Idle()
{
    glutPostRedisplay();

}





void day() {
    glClearColor(1.0,1.0,1.0,1.0);
   glClear(GL_COLOR_BUFFER_BIT);
   int i;

	GLfloat x=-.8f; GLfloat y=.8f; GLfloat radius =-.2f;

     GLfloat x1=-0.14f; GLfloat y1=0.40f; GLfloat radius1 =-0.05f;
    GLfloat x2=-0.15f; GLfloat y2=0.44f; GLfloat radius2 =-0.04f;
    GLfloat x3=-0.16f; GLfloat y3=0.40f; GLfloat radius3 =-0.05f;

	int triangleAmount = 100;

	GLfloat twicePi = 2.0f * PI;
	   glLoadIdentity();



//sky

glBegin(GL_QUADS);

glColor3ub(204, 245, 255);
glVertex2f(40.0f,0.0f);
glVertex2f(-40.0f,0.0f);
glVertex2f(-40.0f,35.0f);
glVertex2f(40.0f,35.0f);
glEnd();

//sun



    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 128);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




//watter
glBegin(GL_QUADS);
glColor3ub(102, 163, 255);
glVertex2f(40.0f,-35.0f);
glVertex2f(-40.0f,-35.0f);
glVertex2f(-40.0f,0.0f);
glVertex2f(40.0f,0.0f);
glEnd();


glBegin(GL_LINES);

glColor3ub(255,255,255);
glVertex2f(-0.40f,-0.40f);
glVertex2f(-0.25f,-0.40f);

glColor3ub(255,255,255);
glVertex2f(-0.20f,-0.30f);
glVertex2f(-0.15f,-0.30f);


glColor3ub(255,255,255);
glVertex2f(-0.10f,-0.20f);
glVertex2f(-0.0f,-0.20f);



glColor3ub(255,255,255);
glVertex2f(0.20f,-0.30f);
glVertex2f(0.15f,-0.30f);

glColor3ub(255,255,255);
glVertex2f(0.40f,-0.40f);
glVertex2f(0.25f,-0.40f);

glColor3ub(255,255,255);
glVertex2f(0.20f,-0.30f);
glVertex2f(0.15f,-0.30f);


glColor3ub(255,255,255);
glVertex2f(-0.40f,-0.50f);
glVertex2f(0.0f,-0.50f);



glEnd();
//port
glBegin(GL_QUADS);
glColor3ub(153,153,102);

glVertex2f(-40.0f,0.2f);
glVertex2f(-40.0f,0.0f);
glVertex2f(-0.11f,0.0f);
glVertex2f(-0.11f,0.2f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(194,194,163);

glVertex2f(-40.0f,0.2f);
glVertex2f(-40.0f,0.05f);
glVertex2f(-0.11f,0.05f);
glVertex2f(-0.11f,0.2f);


glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 166, 166);
glVertex2f(-0.50f,0.2f);
glVertex2f(-0.40f,0.2f);
glVertex2f(-0.43f,0.6f);
glVertex2f(-0.47f,0.6f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(204, 204, 204);

glVertex2f(-0.47,0.6);
glVertex2f(-0.43,0.6);
glVertex2f(-0.43,0.65);
glVertex2f(-0.47,0.65);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(230, 230, 230);
glVertex2f(-0.48,0.65);
glVertex2f(-0.42,0.65);
glVertex2f(-0.45,0.67);
glEnd();

//tree
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.15,0.4);
glVertex2f(-0.16,0.4);
glVertex2f(-0.16,0.17);
glVertex2f(-0.15,0.17);

glEnd();


glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x3, y3);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x2, y2);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2* cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();


//scalef tree

glScalef(3,0.8,0);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.15,0.4);
glVertex2f(-0.16,0.4);
glVertex2f(-0.16,0.17);
glVertex2f(-0.15,0.17);

glEnd();



glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x3, y3);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x2, y2);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2* cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();



//windmill

glBegin(GL_QUADS);
glColor3ub(166, 166, 166);


glVertex2f(-0.76,0.5);
glVertex2f(-0.74,0.5);
glVertex2f(-0.74,0.20);
glVertex2f(-0.76,0.20);

glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(166, 166, 166);
glVertex2f(-0.76,0.5);
glVertex2f(-0.74,0.5);
glVertex2f(-0.75,0.52);
glEnd();





    glPushMatrix();
    glTranslatef(-0.75,0.5,0);

    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(6);
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);





    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.0f);
    glVertex2f( 0.18f, 0.05f);


    glEnd();




    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(6);
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);



    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.0f);
    glVertex2f( 0.18f, 0.05f);

    glEnd();

    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(6);
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);


    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.0f);
    glVertex2f( 0.18f, 0.05f);

    glEnd();






    k+=0.1f;//i=i+.1=.2

    glPopMatrix();




	//2ndShip

glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);




glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(0.90f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.05f,-0.05f);
glVertex2f(0.90f,-0.05f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(0.88f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.1f,0.1f);
glVertex2f(0.88f,0.1f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 191, 0);
glVertex2f(0.80f,0.1f);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.4f);
glVertex2f(0.80f,0.4f);
glEnd();




//
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.38f);
glVertex2f(0.76f,0.38f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.79f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.38f);
glVertex2f(0.71f,0.38f);
glVertex2f(0.71f,0.34f);
glVertex2f(0.74f,0.34f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.38f);
glVertex2f(0.66f,0.38f);
glVertex2f(0.66f,0.34f);
glVertex2f(0.69f,0.34f);
glEnd();

//

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.32f);
glVertex2f(0.76f,0.32f);
glVertex2f(0.76f,0.28f);
glVertex2f(0.79f,0.28f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.32f);
glVertex2f(0.71f,0.32f);
glVertex2f(0.71f,0.28f);
glVertex2f(0.74f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.32f);
glVertex2f(0.66f,0.32f);
glVertex2f(0.66f,0.28f);
glVertex2f(0.69f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0, 0, 0);
glVertex2f(0.77f,0.4f);
glVertex2f(0.74f,0.4f);
glVertex2f(0.74f,0.47f);
glVertex2f(0.77f,0.46f);
glEnd();





glBegin(GL_QUADS);
glColor3ub(0, 77, 0);
glVertex2f(0.1f,0.1f);
glVertex2f(0.3f,0.1f);
glVertex2f(0.3f,0.2f);
glVertex2f(0.1f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 153, 51);
glVertex2f(0.4f,0.1f);
glVertex2f(0.6f,0.1f);
glVertex2f(0.6f,0.2f);
glVertex2f(0.4f,0.2f);
glEnd();

glPopMatrix();



glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
glTranslatef(-.80,-0.7,0);

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(0.90f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.05f,-0.05f);
glVertex2f(0.90f,-0.05f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(0.88f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.1f,0.1f);
glVertex2f(0.88f,0.1f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 191, 0);
glVertex2f(0.80f,0.1f);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.4f);
glVertex2f(0.80f,0.4f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.38f);
glVertex2f(0.76f,0.38f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.79f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.38f);
glVertex2f(0.71f,0.38f);
glVertex2f(0.71f,0.34f);
glVertex2f(0.74f,0.34f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.38f);
glVertex2f(0.66f,0.38f);
glVertex2f(0.66f,0.34f);
glVertex2f(0.69f,0.34f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.32f);
glVertex2f(0.76f,0.32f);
glVertex2f(0.76f,0.28f);
glVertex2f(0.79f,0.28f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.32f);
glVertex2f(0.71f,0.32f);
glVertex2f(0.71f,0.28f);
glVertex2f(0.74f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.32f);
glVertex2f(0.66f,0.32f);
glVertex2f(0.66f,0.28f);
glVertex2f(0.69f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0, 0, 0);
glVertex2f(0.77f,0.4f);
glVertex2f(0.74f,0.4f);
glVertex2f(0.74f,0.47f);
glVertex2f(0.77f,0.46f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 77, 0);
glVertex2f(0.1f,0.1f);
glVertex2f(0.3f,0.1f);
glVertex2f(0.3f,0.2f);
glVertex2f(0.1f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 153, 51);
glVertex2f(0.4f,0.1f);
glVertex2f(0.6f,0.1f);
glVertex2f(0.6f,0.2f);
glVertex2f(0.4f,0.2f);
glEnd();
glPopMatrix();


glLoadIdentity();



   //plane




       glPushMatrix();
       glTranslatef(position,0.0f, 0.0f);


       glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( 0.05f, 0.56f);
      glVertex2f( 0.05f,  0.60f);

      glEnd();

      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.56f);
      glVertex2f( 0.02f,0.52f);
      glVertex2f( 0.04f, 0.51f);
      glVertex2f( 0.01f,  0.56f);

      glEnd();


      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.60f);
      glVertex2f( 0.01f,0.62f);
      glVertex2f( 0.02f, 0.63f);
      glVertex2f( 0.01f,  0.60f);

      glEnd();


       glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(0.04f, 0.60f);
      glVertex2f( 0.05f,0.60f);
      glVertex2f( 0.05f, 0.62f);

      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( -0.06f, 0.57f);

      glEnd();

glPopMatrix();


glLoadIdentity;


	glFlush();
}



void evening() {
    glClearColor(0.0,0.0,0.0,0.0);
   glClear(GL_COLOR_BUFFER_BIT);
   int i;

	GLfloat x=.8f; GLfloat y=.1f; GLfloat radius =-.2f;

    GLfloat x1=-0.14f; GLfloat y1=0.40f; GLfloat radius1 =-0.05f;
    GLfloat x2=-0.15f; GLfloat y2=0.44f; GLfloat radius2 =-0.04f;
    GLfloat x3=-0.16f; GLfloat y3=0.40f; GLfloat radius3 =-0.05f;

	int triangleAmount = 100;

	GLfloat twicePi = 2.0f * PI;
    glLoadIdentity();




//sky
glBegin(GL_QUADS);
glColor3ub(255, 112, 77);
glVertex2f(40.0f,0.0f);
glVertex2f(-40.0f,0.0f);
glVertex2f(-40.0f,35.0f);
glVertex2f(40.0f,35.0f);
glEnd();

//sun

glBegin(GL_TRIANGLE_FAN);
	glColor3ub(230, 46, 0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();









//watter
glBegin(GL_QUADS);
glColor3ub(128, 128, 255);
glVertex2f(40.0f,-35.0f);
glVertex2f(-40.0f,-35.0f);
glVertex2f(-40.0f,0.0f);
glVertex2f(40.0f,0.0f);
glEnd();




//Watter
glBegin(GL_LINES);

glColor3ub(255,255,255);
glVertex2f(-0.40f,-0.40f);
glVertex2f(-0.25f,-0.40f);

glColor3ub(255,255,255);
glVertex2f(-0.20f,-0.30f);
glVertex2f(-0.15f,-0.30f);


glColor3ub(255,255,255);
glVertex2f(-0.10f,-0.20f);
glVertex2f(-0.0f,-0.20f);



glColor3ub(255,255,255);
glVertex2f(0.20f,-0.30f);
glVertex2f(0.15f,-0.30f);

glColor3ub(255,255,255);
glVertex2f(0.40f,-0.40f);
glVertex2f(0.25f,-0.40f);

glColor3ub(255,255,255);
glVertex2f(0.20f,-0.30f);
glVertex2f(0.15f,-0.30f);


glColor3ub(255,255,255);
glVertex2f(-0.40f,-0.50f);
glVertex2f(0.0f,-0.50f);



glEnd();
//port
glBegin(GL_QUADS);
glColor3ub(153,153,102);

glVertex2f(-40.0f,0.2f);
glVertex2f(-40.0f,0.0f);
glVertex2f(-0.11f,0.0f);
glVertex2f(-0.11f,0.2f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(194,194,163);

glVertex2f(-40.0f,0.2f);
glVertex2f(-40.0f,0.05f);
glVertex2f(-0.11f,0.05f);
glVertex2f(-0.11f,0.2f);


glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 166, 166);
glVertex2f(-0.50f,0.2f);
glVertex2f(-0.40f,0.2f);
glVertex2f(-0.43f,0.6f);
glVertex2f(-0.47f,0.6f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(204, 204, 204);

glVertex2f(-0.47,0.6);
glVertex2f(-0.43,0.6);
glVertex2f(-0.43,0.65);
glVertex2f(-0.47,0.65);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(230, 230, 230);
glVertex2f(-0.48,0.65);
glVertex2f(-0.42,0.65);
glVertex2f(-0.45,0.67);
glEnd();


//tree
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.15,0.4);
glVertex2f(-0.16,0.4);
glVertex2f(-0.16,0.17);
glVertex2f(-0.15,0.17);

glEnd();

glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x3, y3);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x2, y2);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2* cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();


//scalef tree
glScalef(3,0.8,0);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.15,0.4);
glVertex2f(-0.16,0.4);
glVertex2f(-0.16,0.17);
glVertex2f(-0.15,0.17);

glEnd();



glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x3, y3);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x2, y2);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2* cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();

	//windmill

glBegin(GL_QUADS);
glColor3ub(166, 166, 166);


glVertex2f(-0.76,0.5);
glVertex2f(-0.74,0.5);
glVertex2f(-0.74,0.20);
glVertex2f(-0.76,0.20);

glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(166, 166, 166);
glVertex2f(-0.76,0.5);
glVertex2f(-0.74,0.5);
glVertex2f(-0.75,0.52);
glEnd();





    glPushMatrix();
    glTranslatef(-0.75,0.5,0);

    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(6);
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);





    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.0f);
    glVertex2f( 0.18f, 0.05f);


    glEnd();




    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(6);
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);



    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.0f);
    glVertex2f( 0.18f, 0.05f);

    glEnd();

    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(6);
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);


    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.0f);
    glVertex2f( 0.18f, 0.05f);

    glEnd();






    k+=0.1f;//i=i+.1=.2

    glPopMatrix();




// ship
glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);




glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(0.90f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.05f,-0.05f);
glVertex2f(0.90f,-0.05f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(0.88f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.1f,0.1f);
glVertex2f(0.88f,0.1f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 191, 0);
glVertex2f(0.80f,0.1f);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.4f);
glVertex2f(0.80f,0.4f);
glEnd();




//
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.38f);
glVertex2f(0.76f,0.38f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.79f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.38f);
glVertex2f(0.71f,0.38f);
glVertex2f(0.71f,0.34f);
glVertex2f(0.74f,0.34f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.38f);
glVertex2f(0.66f,0.38f);
glVertex2f(0.66f,0.34f);
glVertex2f(0.69f,0.34f);
glEnd();

//

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.32f);
glVertex2f(0.76f,0.32f);
glVertex2f(0.76f,0.28f);
glVertex2f(0.79f,0.28f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.32f);
glVertex2f(0.71f,0.32f);
glVertex2f(0.71f,0.28f);
glVertex2f(0.74f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.32f);
glVertex2f(0.66f,0.32f);
glVertex2f(0.66f,0.28f);
glVertex2f(0.69f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0, 0, 0);
glVertex2f(0.77f,0.4f);
glVertex2f(0.74f,0.4f);
glVertex2f(0.74f,0.47f);
glVertex2f(0.77f,0.46f);
glEnd();





glBegin(GL_QUADS);
glColor3ub(0, 77, 0);
glVertex2f(0.1f,0.1f);
glVertex2f(0.3f,0.1f);
glVertex2f(0.3f,0.2f);
glVertex2f(0.1f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 153, 51);
glVertex2f(0.4f,0.1f);
glVertex2f(0.6f,0.1f);
glVertex2f(0.6f,0.2f);
glVertex2f(0.4f,0.2f);
glEnd();

glPopMatrix();



glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
glTranslatef(-.80,-0.7,0);

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(0.90f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.05f,-0.05f);
glVertex2f(0.90f,-0.05f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(0.88f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.1f,0.1f);
glVertex2f(0.88f,0.1f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 191, 0);
glVertex2f(0.80f,0.1f);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.4f);
glVertex2f(0.80f,0.4f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.38f);
glVertex2f(0.76f,0.38f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.79f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.38f);
glVertex2f(0.71f,0.38f);
glVertex2f(0.71f,0.34f);
glVertex2f(0.74f,0.34f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.38f);
glVertex2f(0.66f,0.38f);
glVertex2f(0.66f,0.34f);
glVertex2f(0.69f,0.34f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.32f);
glVertex2f(0.76f,0.32f);
glVertex2f(0.76f,0.28f);
glVertex2f(0.79f,0.28f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.32f);
glVertex2f(0.71f,0.32f);
glVertex2f(0.71f,0.28f);
glVertex2f(0.74f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.32f);
glVertex2f(0.66f,0.32f);
glVertex2f(0.66f,0.28f);
glVertex2f(0.69f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0, 0, 0);
glVertex2f(0.77f,0.4f);
glVertex2f(0.74f,0.4f);
glVertex2f(0.74f,0.47f);
glVertex2f(0.77f,0.46f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 77, 0);
glVertex2f(0.1f,0.1f);
glVertex2f(0.3f,0.1f);
glVertex2f(0.3f,0.2f);
glVertex2f(0.1f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 153, 51);
glVertex2f(0.4f,0.1f);
glVertex2f(0.6f,0.1f);
glVertex2f(0.6f,0.2f);
glVertex2f(0.4f,0.2f);
glEnd();
glPopMatrix();


glLoadIdentity();


   //plane




       glPushMatrix();
       glTranslatef(position,0.0f, 0.0f);


       glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( 0.05f, 0.56f);
      glVertex2f( 0.05f,  0.60f);

      glEnd();

      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.56f);
      glVertex2f( 0.02f,0.52f);
      glVertex2f( 0.04f, 0.51f);
      glVertex2f( 0.01f,  0.56f);

      glEnd();


      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.60f);
      glVertex2f( 0.01f,0.62f);
      glVertex2f( 0.02f, 0.63f);
      glVertex2f( 0.01f,  0.60f);

      glEnd();


       glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(0.04f, 0.60f);
      glVertex2f( 0.05f,0.60f);
      glVertex2f( 0.05f, 0.62f);

      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( -0.06f, 0.57f);

      glEnd();

glPopMatrix();


glLoadIdentity;


	glFlush();
}




void night() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   int i;

	GLfloat x=0.0f; GLfloat y=.8f; GLfloat radius =-.2f;

    GLfloat x1=-0.14f; GLfloat y1=0.40f; GLfloat radius1 =-0.05f;
    GLfloat x2=-0.15f; GLfloat y2=0.44f; GLfloat radius2 =-0.04f;
    GLfloat x3=-0.16f; GLfloat y3=0.40f; GLfloat radius3 =-0.05f;

	int triangleAmount = 100;

	GLfloat twicePi = 2.0f * PI;
   glLoadIdentity();

//sky
   glBegin(GL_QUADS);

glColor3ub(0, 0, 128);
glVertex2f(40.0f,0.0f);
glVertex2f(-40.0f,0.0f);
glVertex2f(-40.0f,35.0f);
glVertex2f(40.0f,35.0f);
glEnd();



//moon


glBegin(GL_TRIANGLE_FAN);
	glColor3ub(235, 235, 224);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//watter


glBegin(GL_QUADS);
glColor3ub(0, 0, 230);
glVertex2f(40.0f,-35.0f);
glVertex2f(-40.0f,-35.0f);
glVertex2f(-40.0f,0.0f);
glVertex2f(40.0f,0.0f);
glEnd();


glBegin(GL_LINES);

glColor3ub(255,255,255);
glVertex2f(-0.40f,-0.40f);
glVertex2f(-0.25f,-0.40f);

glColor3ub(255,255,255);
glVertex2f(-0.20f,-0.30f);
glVertex2f(-0.15f,-0.30f);


glColor3ub(255,255,255);
glVertex2f(-0.10f,-0.20f);
glVertex2f(-0.0f,-0.20f);



glColor3ub(255,255,255);
glVertex2f(0.20f,-0.30f);
glVertex2f(0.15f,-0.30f);

glColor3ub(255,255,255);
glVertex2f(0.40f,-0.40f);
glVertex2f(0.25f,-0.40f);

glColor3ub(255,255,255);
glVertex2f(0.20f,-0.30f);
glVertex2f(0.15f,-0.30f);


glColor3ub(255,255,255);
glVertex2f(-0.40f,-0.50f);
glVertex2f(0.0f,-0.50f);



glEnd();
//port
glBegin(GL_QUADS);
glColor3ub(153,153,102);

glVertex2f(-40.0f,0.2f);
glVertex2f(-40.0f,0.0f);
glVertex2f(-0.11f,0.0f);
glVertex2f(-0.11f,0.2f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(194,194,163);

glVertex2f(-40.0f,0.2f);
glVertex2f(-40.0f,0.05f);
glVertex2f(-0.11f,0.05f);
glVertex2f(-0.11f,0.2f);


glEnd();

glBegin(GL_QUADS);
glColor3ub(166, 166, 166);
glVertex2f(-0.50f,0.2f);
glVertex2f(-0.40f,0.2f);
glVertex2f(-0.43f,0.6f);
glVertex2f(-0.47f,0.6f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(204, 204, 204);

glVertex2f(-0.47,0.6);
glVertex2f(-0.43,0.6);
glVertex2f(-0.43,0.65);
glVertex2f(-0.47,0.65);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(230, 230, 230);
glVertex2f(-0.48,0.65);
glVertex2f(-0.42,0.65);
glVertex2f(-0.45,0.67);
glEnd();


//tree
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.15,0.4);
glVertex2f(-0.16,0.4);
glVertex2f(-0.16,0.17);
glVertex2f(-0.15,0.17);

glEnd();

glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x3, y3);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x2, y2);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2* cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();


//scalef tree

glScalef(3,0.8,0);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.15,0.4);
glVertex2f(-0.16,0.4);
glVertex2f(-0.16,0.17);
glVertex2f(-0.15,0.17);

glEnd();




glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x3, y3);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x2, y2);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2* cos(i *  twicePi / triangleAmount)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 153, 0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glLoadIdentity();

	//windmill

glBegin(GL_QUADS);
glColor3ub(166, 166, 166);


glVertex2f(-0.76,0.5);
glVertex2f(-0.74,0.5);
glVertex2f(-0.74,0.20);
glVertex2f(-0.76,0.20);

glEnd();



glBegin(GL_TRIANGLES);
glColor3ub(166, 166, 166);
glVertex2f(-0.76,0.5);
glVertex2f(-0.74,0.5);
glVertex2f(-0.75,0.52);
glEnd();





    glPushMatrix();
    glTranslatef(-0.75,0.5,0);

    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(6);
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);





    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.0f);
    glVertex2f( 0.18f, 0.05f);


    glEnd();




    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(6);
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);



    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.0f);
    glVertex2f( 0.18f, 0.05f);

    glEnd();

    glRotatef(k,0.0,0.0,0.1);
    glLineWidth(6);
    glBegin(GL_TRIANGLES);
    glColor3ub(166, 166, 166);


    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.05f, 0.0f);
    glVertex2f( 0.18f, 0.05f);

    glEnd();






    k+=0.1f;//i=i+.1=.2

    glPopMatrix();


//2ndship
glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);




glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(0.90f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.05f,-0.05f);
glVertex2f(0.90f,-0.05f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(0.88f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.1f,0.1f);
glVertex2f(0.88f,0.1f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 191, 0);
glVertex2f(0.80f,0.1f);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.4f);
glVertex2f(0.80f,0.4f);
glEnd();




//
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.38f);
glVertex2f(0.76f,0.38f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.79f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.38f);
glVertex2f(0.71f,0.38f);
glVertex2f(0.71f,0.34f);
glVertex2f(0.74f,0.34f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.38f);
glVertex2f(0.66f,0.38f);
glVertex2f(0.66f,0.34f);
glVertex2f(0.69f,0.34f);
glEnd();

//

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.32f);
glVertex2f(0.76f,0.32f);
glVertex2f(0.76f,0.28f);
glVertex2f(0.79f,0.28f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.32f);
glVertex2f(0.71f,0.32f);
glVertex2f(0.71f,0.28f);
glVertex2f(0.74f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.32f);
glVertex2f(0.66f,0.32f);
glVertex2f(0.66f,0.28f);
glVertex2f(0.69f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0, 0, 0);
glVertex2f(0.77f,0.4f);
glVertex2f(0.74f,0.4f);
glVertex2f(0.74f,0.47f);
glVertex2f(0.77f,0.46f);
glEnd();





glBegin(GL_QUADS);
glColor3ub(0, 77, 0);
glVertex2f(0.1f,0.1f);
glVertex2f(0.3f,0.1f);
glVertex2f(0.3f,0.2f);
glVertex2f(0.1f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 153, 51);
glVertex2f(0.4f,0.1f);
glVertex2f(0.6f,0.1f);
glVertex2f(0.6f,0.2f);
glVertex2f(0.4f,0.2f);
glEnd();

glPopMatrix();



glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
glTranslatef(-.80,-0.7,0);

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(0.90f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.05f,-0.05f);
glVertex2f(0.90f,-0.05f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(0.88f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(-0.1f,0.1f);
glVertex2f(0.88f,0.1f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 191, 0);
glVertex2f(0.80f,0.1f);
glVertex2f(0.65f,0.1f);
glVertex2f(0.65f,0.4f);
glVertex2f(0.80f,0.4f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.38f);
glVertex2f(0.76f,0.38f);
glVertex2f(0.76f,0.34f);
glVertex2f(0.79f,0.34f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.38f);
glVertex2f(0.71f,0.38f);
glVertex2f(0.71f,0.34f);
glVertex2f(0.74f,0.34f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.38f);
glVertex2f(0.66f,0.38f);
glVertex2f(0.66f,0.34f);
glVertex2f(0.69f,0.34f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.79f,0.32f);
glVertex2f(0.76f,0.32f);
glVertex2f(0.76f,0.28f);
glVertex2f(0.79f,0.28f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.74f,0.32f);
glVertex2f(0.71f,0.32f);
glVertex2f(0.71f,0.28f);
glVertex2f(0.74f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.69f,0.32f);
glVertex2f(0.66f,0.32f);
glVertex2f(0.66f,0.28f);
glVertex2f(0.69f,0.28f);
glEnd();


glBegin(GL_QUADS);
glColor3f(0, 0, 0);
glVertex2f(0.77f,0.4f);
glVertex2f(0.74f,0.4f);
glVertex2f(0.74f,0.47f);
glVertex2f(0.77f,0.46f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 77, 0);
glVertex2f(0.1f,0.1f);
glVertex2f(0.3f,0.1f);
glVertex2f(0.3f,0.2f);
glVertex2f(0.1f,0.2f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 153, 51);
glVertex2f(0.4f,0.1f);
glVertex2f(0.6f,0.1f);
glVertex2f(0.6f,0.2f);
glVertex2f(0.4f,0.2f);
glEnd();
glPopMatrix();


glLoadIdentity();



   //plane




       glPushMatrix();
       glTranslatef(position1,0.0f, 0.0f);


       glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( 0.05f, 0.56f);
      glVertex2f( 0.05f,  0.60f);

      glEnd();

      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.56f);
      glVertex2f( 0.02f,0.52f);
      glVertex2f( 0.04f, 0.51f);
      glVertex2f( 0.01f,  0.56f);

      glEnd();


      glBegin(GL_QUADS);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.01f, 0.60f);
      glVertex2f( 0.01f,0.62f);
      glVertex2f( 0.02f, 0.63f);
      glVertex2f( 0.01f,  0.60f);

      glEnd();


       glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(0.04f, 0.60f);
      glVertex2f( 0.05f,0.60f);
      glVertex2f( 0.05f, 0.62f);

      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3f(0.0f, 0.0f, 1.0f);
      glVertex2f(-0.05f, 0.60f);
      glVertex2f( -0.05f,0.56f);
      glVertex2f( -0.06f, 0.57f);

      glEnd();

glPopMatrix();


glLoadIdentity;


	glFlush();
}




void handleKeypress(unsigned char key, int x, int y) {


	switch (key) {

    case 'd':
    glutDisplayFunc(day);
    glutPostRedisplay();
    break;
    case 'e':
    glutDisplayFunc(evening);
    glutPostRedisplay();
    break;
    case 'n':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;
    case 'p':
    speed1 = 0.0f;
    break;
    case 'r':
    speed1 = 0.1f;
    break;


	}
	glutPostRedisplay();
}




int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update1, 0);
   glutDisplayFunc(day);
   //glutDisplayFunc(night);
   //glutDisplayFunc(evening);
   glutIdleFunc(Idle);
   glutMouseFunc(handleMouse);
   glutSpecialFunc(SpecialInput);
   glutKeyboardFunc(handleKeypress);
   //glutKeyboardFunc(handleKeypress1);
   glutMainLoop();
   return 0;
}
