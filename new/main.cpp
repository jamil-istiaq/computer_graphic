#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846
GLfloat g = 0.0f;
GLfloat position = -0.5f;
GLfloat speed = 0.005f;
GLfloat position1 = -1.0f;
GLfloat speed1 = 0.05f;
GLfloat position2 = 0.0f;
GLfloat position3=0.0f;
GLfloat position4=0.0f;
GLfloat position5=0.0f;
GLfloat position6=0.0f;
GLfloat position7=0.0f;

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

void update(int value) {

    if(position <-1.0)
        position = 2.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {

    if(position1 <-1.0)
        position1 = 2.0f;

    position1 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

void update2(int value) {

    if(position2 <-1.0)
        position2 = 2.0f;

    position2 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

void update3(int value) {

    if(position3>2.0)
        position3 = -1.0f;

    position3 += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

void update4(int value) {

    if(position4 <-2.0)
        position4 = 2.0f;

    position4 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);

}

void update5(int value) {

    if(position5 <-1.0)
        position5 =1.0f ;

    position5 += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update5, 0);
}

void update6(int value) {

    if(position6>1.0)
        position6 = -2.0f;

    position6 += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update6, 0);
}


void update7(int value) {

    if(position7 <-2.0)
        position7 = .2f;

    position7 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update7, 0);

}

void sound()
{
PlaySound("train.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void sound1()
{
PlaySound("TR.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void sound2()
{
PlaySound("TRT.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void sound3()
{
PlaySound("TT.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}
void demo_start();
//void demo_back(int val){glutDisplayFunc(demo_start);}
void night_rain()
{
     glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,8,8);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,8,8);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(16,16,16);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(16,16,16);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(24,24,24);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(24,24,24);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(32,32,32);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(32,32,32);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(40,40,40);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(40,40,40);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(48,48,48);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(48,48,48);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,56,56);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,56,56);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//moon
    int i;

	GLfloat x=-.8f; GLfloat y=.85f; GLfloat radius =.1f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 236, 179);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glTranslatef(0.05,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
//black part,b-1
    glBegin(GL_QUADS);
    glColor3ub(71,87,105);
    glVertex2d(0.8,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,1);
    glVertex2d(0.8,1);
    glEnd();
//shadow
    glBegin(GL_TRIANGLES);
    glColor3ub(52,62,73);
    glVertex2d(0.8,1);
    glVertex2d(1,0.6);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52,62,73);
    glVertex2d(0.8,0.2);
    glVertex2d(1,-0.4);
    glVertex2d(1,0.5);
    glVertex2d(0.8,0.4);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,1);
    glVertex2d(0.8,0.95);
    glVertex2d(1,0.95);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.8);
    glVertex2d(0.8,0.7);
    glVertex2d(1,0.7);
    glVertex2d(1,0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.5);
    glVertex2d(1,0.5);
    glVertex2d(1,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.4);
    glVertex2d(0.8,0.3);
    glVertex2d(1,0.3);
    glVertex2d(1,0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.1);
    glVertex2d(1,0.1);
    glVertex2d(1,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.2);
    glVertex2d(0.8,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.4);
    glVertex2d(0.8,-0.3);
    glVertex2d(1,-0.3);
    glVertex2d(1,-0.4);
    glEnd();
//light part
    glBegin(GL_QUADS);
    glColor3ub(159,177,191);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.8,-0.5);
    glVertex2d(0.8,1);
    glVertex2d(0.6,1);
    glEnd();
//floor border
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.8);
    glVertex2d(0.8,0.9);
    glVertex2d(0.8,0.93);
    glVertex2d(0.6,0.83);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.5);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.63);
    glVertex2d(0.6,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.2);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.23);
    glVertex2d(0.6,0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.8,-0.1);
    glVertex2d(0.8,-0.13);
    glVertex2d(0.6,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.3);
    glVertex2d(0.8,-0.3);
    glVertex2d(0.8,-0.33);
    glVertex2d(0.6,-0.33);
    glEnd();

//b2
    glBegin(GL_QUADS);
    glColor3ub(215,169,111);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.2,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.2);
    glVertex2d(0.6,-0.2);
    glVertex2d(0.6,-0.25);
    glVertex2d(0.2,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.4);
    glVertex2d(0.6,-0.4);
    glVertex2d(0.6,-0.45);
    glVertex2d(0.2,-0.45);
    glEnd();

//b-3
    glBegin(GL_QUADS);
    glColor3ub(174,186,226);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.2,0.7);
    glVertex2d(0.1,0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.2,-0.3);
    glVertex2d(0.2,-0.35);
    glVertex2d(0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,-0.15);
    glVertex2d(0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.12);
    glVertex2d(0.2,0.1);
    glVertex2d(0.2,0.15);
    glVertex2d(0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.32);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.35);
    glVertex2d(0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.52);
    glVertex2d(0.2,0.5);
    glVertex2d(0.2,0.55);
    glVertex2d(0.1,0.57);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(160,170,203);
    glVertex2d(0,-0.5);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.1,0.75);
    glVertex2d(0,0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.48);
    glVertex2d(0.1,0.52);
    glVertex2d(0.1,0.57);
    glVertex2d(0,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.30);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.1,-0.33);
    glVertex2d(0,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.2);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.1,-0.13);
    glVertex2d(0,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.10);
    glVertex2d(0.1,0.12);
    glVertex2d(0.1,0.17);
    glVertex2d(0,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.30);
    glVertex2d(0.1,0.32);
    glVertex2d(0.1,0.37);
    glVertex2d(0,0.35);
    glEnd();

//b-4

    glBegin(GL_QUADS);
    glColor3ub(182,205,228);
    glVertex2d(0,-0.5);
    glVertex2d(0.06,-0.5);
    glVertex2d(0.06,0.5);
    glVertex2d(0,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.01,-0.5);
    glVertex2d(0.02,-0.5);
    glVertex2d(0.02,0.45);
    glVertex2d(0.01,0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.03,-0.5);
    glVertex2d(0.04,-0.5);
    glVertex2d(0.04,0.45);
    glVertex2d(0.03,0.45);
    glEnd();

//b-5
     glBegin(GL_QUADS);
     glColor3ub(82,158,211);
     glVertex2d(-0.1,-0.5);
     glVertex2d(0,-0.5);
     glVertex2d(0,0.65);
     glVertex2d(-0.1,0.68);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.28);
    glVertex2d(0,-0.3);
    glVertex2d(0,-0.35);
    glVertex2d(-0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.08);
    glVertex2d(0,-0.1);
    glVertex2d(0,-0.15);
    glVertex2d(-0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.12);
    glVertex2d(0,0.1);
    glVertex2d(0,0.15);
    glVertex2d(-0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.32);
    glVertex2d(0,0.3);
    glVertex2d(0,0.35);
    glVertex2d(-0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.52);
    glVertex2d(0,0.5);
    glVertex2d(0,0.55);
    glVertex2d(-0.1,0.57);
    glEnd();
//side
     glBegin(GL_QUADS);
     glColor3ub(71,137,180);
     glVertex2d(-0.2,-0.5);
     glVertex2d(-0.1,-0.5);
     glVertex2d(-0.1,0.68);
     glVertex2d(-0.2,0.65);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.30);
    glVertex2d(-0.1,0.32);
    glVertex2d(-0.1,0.37);
    glVertex2d(-0.2,0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.48);
    glVertex2d(-0.1,0.52);
    glVertex2d(-0.1,0.57);
    glVertex2d(-0.2,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.30);
    glVertex2d(-0.1,-0.28);
    glVertex2d(-0.1,-0.33);
    glVertex2d(-0.2,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.10);
    glVertex2d(-0.1,-0.08);
    glVertex2d(-0.1,-0.13);
    glVertex2d(-0.2,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.10);
    glVertex2d(-0.1,0.12);
    glVertex2d(-0.1,0.17);
    glVertex2d(-0.2,0.15);
    glEnd();

//b-6
     glBegin(GL_QUADS);
     glColor3ub(113,70,99);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.18,-0.5);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.28,0.06);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.28);
    glVertex2d(-0.18,-0.30);
    glVertex2d(-0.18,-0.35);
    glVertex2d(-0.28,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.08);
    glVertex2d(-0.18,-0.1);
    glVertex2d(-0.18,-0.15);
    glVertex2d(-0.28,-0.13);
    glEnd();

//b-7
     glBegin(GL_QUADS);
     glColor3ub(113,143,181);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.33,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.28,-0.28);
     glVertex2d(-0.28,-0.33);
     glVertex2d(-0.33,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.28,-0.08);
     glVertex2d(-0.28,-0.13);
     glVertex2d(-0.33,-0.13);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(96,134,166);
     glVertex2d(-0.4,-0.5);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.33,0.08);
     glVertex2d(-0.4,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.29);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.33,-0.33);
     glVertex2d(-0.4,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.09);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.33,-0.13);
     glVertex2d(-0.4,-0.14);
     glEnd();

//b-8-white

     glBegin(GL_QUADS);
     glColor3ub(198,208,215);
     glVertex2d(-0.28,0.06);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.18,0.28);
     glVertex2d(-0.28,0.3);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.18,0.1);
    glVertex2d(-0.18,0.15);
    glVertex2d(-0.28,0.17);
    glEnd();

//b-9
     glBegin(GL_QUADS);
     glColor3ub(192,194,203);
     glVertex2d(-0.38,0.08);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.28,0.3);
     glVertex2d(-0.38,0.28);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.38,0.11);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.28,0.17);
    glVertex2d(-0.38,0.16);
    glEnd();
//b-10
     glBegin(GL_QUADS);
     glColor3ub(163,175,177);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.6,-0.5);
     glVertex2d(-0.6,0.5);
     glVertex2d(-0.75,0.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.35);
     glVertex2d(-0.6,-0.35);
     glVertex2d(-0.6,-0.4);
     glVertex2d(-0.75,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();

     glTranslatef(0,0.2,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.4,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.6,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

//b-11
     glBegin(GL_QUADS);
     glColor3ub(180,250,201);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.75,-0.15);
     glVertex2d(-0.9,-0.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.75,-0.4);
     glVertex2d(-0.75,-0.45);
     glVertex2d(-0.9,-0.43);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.75,-0.25);
     glVertex2d(-0.9,-0.23);
     glEnd();

//b-12
     glBegin(GL_QUADS);
     glColor3ub(172,219,201);
     glVertex2d(-1,-0.5);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.9,-0.1);
     glVertex2d(-1,-0.15);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.39);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.9,-0.43);
     glVertex2d(-1,-0.44);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.2);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.9,-0.23);
     glVertex2d(-1,-0.25);
     glEnd();
//flyover

    glBegin(GL_QUADS);
    glColor3ub(0,72,108);
    glVertex2d(-1,-0.28);
    glVertex2d(0.2,-0.28);
    glVertex2d(0.2,-0.38);
    glVertex2d(-1,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.34);
    glVertex2d(0.2,-0.34);
    glVertex2d(0.2,-0.36);
    glVertex2d(-1,-0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.31);
    glVertex2d(0.2,-0.31);
    glVertex2d(0.2,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.73,-0.5);
    glVertex2d(-0.73,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.64,-0.5);
    glVertex2d(-0.64,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glTranslatef(0.45,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

//metro
    glBegin(GL_QUADS);
    glColor3ub(225,208,182);
    glVertex2d(-1,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.06);
    glVertex2d(-1,-0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,33,45);
    glVertex2d(-1,-0.12);
    glVertex2d(1,-0.12);
    glVertex2d(1,-0.1);
    glVertex2d(-1,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

//road
    glBegin(GL_QUADS);
    glColor3ub(117,125,144);
    glVertex2d(-1,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,-0.7);
    glVertex2d(-1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();

    glTranslatef(0,-0.07,0);
    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();
    glLoadIdentity();

//pink field
    glBegin(GL_QUADS);
    glColor3ub(96, 83, 57);
    glVertex2d(1,-0.7);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.7,-1);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(111, 88, 42);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.1,-0.7);
    glVertex2d(0.4,-1);
    glVertex2d(0.7,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(96, 83, 57);
    glVertex2d(0.1,-0.7);
    glVertex2d(-0.3,-0.7);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(111, 88, 42);
    glVertex2d(-0.3,-0.7);
    glVertex2d(-0.4,-1);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(96, 83, 57);
    glVertex2d(-0.35,-0.7);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.3,-0.7);
    glEnd();

//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();
//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();

//road side left
    glBegin(GL_QUADS);
    glColor3ub(54,42,51);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.35,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(121,99,52);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-1);
    glVertex2d(-0.55,-1);
    glVertex2d(-0.45,-0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230,222,214);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-1);
    glVertex2d(-0.65,-1);
    glVertex2d(-0.55,-0.8);
    glEnd();
//truck-1
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,153);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();
//truck light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 212, 128);
    glVertex2d(-0.9,-0.66);
    glVertex2d(-0.95,-0.63);
    glVertex2d(-0.95,-0.67);
    glEnd();


//truck tier-1

    GLfloat x1=-0.81f; GLfloat y1=-0.68f; GLfloat radius2 =.02f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
	glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

    GLfloat radius3=0.01f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//tire-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
	glLoadIdentity();

//car
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 179, 179);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.79,-0.65);
    glVertex2d(0.74,-0.63);
    glVertex2d(0.74,-0.67);
    glEnd();
//car tire
    glTranslatef(1.62,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 3
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.682,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.5,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(102, 153, 153);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.79,-0.65);
    glVertex2d(0.74,-0.63);
    glVertex2d(0.74,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//car tire
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.63,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.695,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//lamppost opposite side
//l-1
    glTranslatef(1.2,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-2
    glTranslatef(0.6,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(0.1,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(-0.5,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//car-3, l2r
    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    glTranslatef(0,0.1,0);
	glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.64);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.79,-0.62);
    glVertex2d(0.82,-0.62);
    glVertex2d(0.82,-0.59);
    glVertex2d(0.79,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.83,-0.62);
    glVertex2d(0.87,-0.62);
    glVertex2d(0.87,-0.59);
    glVertex2d(0.83,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.9,-0.65);
    glVertex2d(0.94,-0.63);
    glVertex2d(0.94,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
//car tier
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();


//truck 1 r2l
    glTranslatef(-1.1,0.09,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.62);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.86,-0.62);
    glVertex2d(0.88,-0.62);
    glVertex2d(0.88,-0.59);
    glVertex2d(0.86,-0.59);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102, 255, 102);
    glVertex2d(0.85,-0.66);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.78,-0.56);
    glVertex2d(0.85,-0.56);
    glEnd();

//truck light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.9,-0.65);
    glVertex2d(0.94,-0.63);
    glVertex2d(0.94,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//truck tire
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//tire 2
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//lamppost
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
//l-2
    glTranslatef(0.15,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(-0.3,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(0.8,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
    glLoadIdentity();
//rain effect
    GLfloat x3= -1;
    GLfloat y3 = 1;
    glPushMatrix();
    glTranslatef(position4,position4,0.0f);
    glBegin(GL_LINES);
    for(int i=1;i<=10;i=i+2){

    glVertex2f(x3,y3);
    glVertex2f(x3-.04,y3-.04);

    x3 += .08;
    }
    glEnd();glPopMatrix();


    for(int j=0;j<=40;j++)
    {
    x3 = -1.05;
    y3= y3-.05;
    glPushMatrix();
     glTranslatef(position4,position4,0.0f);
    glBegin(GL_LINES);

    for(int i=0;i<=100;i++){

    glVertex2f(x3,y3);
    glVertex2f(x3-.04,y3-.04);

    x3 += .08;
    }
    glEnd();
    glPopMatrix();
    }
//    glutTimerFunc(4000,demo_back,0);
    glFlush();

}

//void demo_night_rain(int val){glutDisplayFunc(night_rain);}
void night()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,8,8);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,8,8);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(16,16,16);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(16,16,16);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(24,24,24);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(24,24,24);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(32,32,32);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(32,32,32);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(40,40,40);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(40,40,40);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(48,48,48);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(48,48,48);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,56,56);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,56,56);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//moon
    int i;

	GLfloat x=-.8f; GLfloat y=.85f; GLfloat radius =.1f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 236, 179);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glTranslatef(0.05,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
//black part,b-1
    //glEnable(GL_LIGHTING);
    //GLfloat global_ambient[] = {1.4,2.0,3.0, 0.1};
    //glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
    glBegin(GL_QUADS);
    glColor3ub(71,80,105);
    glVertex2d(0.8,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,1);
    glVertex2d(0.8,1);
    glEnd();
    //glDisable(GL_LIGHTING);
//shadow
    glBegin(GL_TRIANGLES);
    glColor3ub(52,62,73);
    glVertex2d(0.8,1);
    glVertex2d(1,0.6);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52,62,73);
    glVertex2d(0.8,0.2);
    glVertex2d(1,-0.4);
    glVertex2d(1,0.5);
    glVertex2d(0.8,0.4);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,1);
    glVertex2d(0.8,0.95);
    glVertex2d(1,0.95);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.8);
    glVertex2d(0.8,0.7);
    glVertex2d(1,0.7);
    glVertex2d(1,0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.5);
    glVertex2d(1,0.5);
    glVertex2d(1,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.4);
    glVertex2d(0.8,0.3);
    glVertex2d(1,0.3);
    glVertex2d(1,0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.1);
    glVertex2d(1,0.1);
    glVertex2d(1,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.2);
    glVertex2d(0.8,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.4);
    glVertex2d(0.8,-0.3);
    glVertex2d(1,-0.3);
    glVertex2d(1,-0.4);
    glEnd();
//light part
    glBegin(GL_QUADS);
    glColor3ub(159,160,191);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.8,-0.5);
    glVertex2d(0.8,1);
    glVertex2d(0.6,1);
    glEnd();
//floor border
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.8);
    glVertex2d(0.8,0.9);
    glVertex2d(0.8,0.93);
    glVertex2d(0.6,0.83);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.5);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.63);
    glVertex2d(0.6,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.2);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.23);
    glVertex2d(0.6,0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.8,-0.1);
    glVertex2d(0.8,-0.13);
    glVertex2d(0.6,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.3);
    glVertex2d(0.8,-0.3);
    glVertex2d(0.8,-0.33);
    glVertex2d(0.6,-0.33);
    glEnd();
glDisable(GL_LIGHTING);
//b2
    glBegin(GL_QUADS);
    glColor3ub(215,169,111);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.2,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.2);
    glVertex2d(0.6,-0.2);
    glVertex2d(0.6,-0.25);
    glVertex2d(0.2,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.4);
    glVertex2d(0.6,-0.4);
    glVertex2d(0.6,-0.45);
    glVertex2d(0.2,-0.45);
    glEnd();

//b-3
    glBegin(GL_QUADS);
    glColor3ub(174,186,226);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.2,0.7);
    glVertex2d(0.1,0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.2,-0.3);
    glVertex2d(0.2,-0.35);
    glVertex2d(0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,-0.15);
    glVertex2d(0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.12);
    glVertex2d(0.2,0.1);
    glVertex2d(0.2,0.15);
    glVertex2d(0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.32);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.35);
    glVertex2d(0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.52);
    glVertex2d(0.2,0.5);
    glVertex2d(0.2,0.55);
    glVertex2d(0.1,0.57);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(160,170,203);
    glVertex2d(0,-0.5);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.1,0.75);
    glVertex2d(0,0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.48);
    glVertex2d(0.1,0.52);
    glVertex2d(0.1,0.57);
    glVertex2d(0,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.30);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.1,-0.33);
    glVertex2d(0,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.2);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.1,-0.13);
    glVertex2d(0,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.10);
    glVertex2d(0.1,0.12);
    glVertex2d(0.1,0.17);
    glVertex2d(0,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.30);
    glVertex2d(0.1,0.32);
    glVertex2d(0.1,0.37);
    glVertex2d(0,0.35);
    glEnd();

//b-4

    glBegin(GL_QUADS);
    glColor3ub(182,205,228);
    glVertex2d(0,-0.5);
    glVertex2d(0.06,-0.5);
    glVertex2d(0.06,0.5);
    glVertex2d(0,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.01,-0.5);
    glVertex2d(0.02,-0.5);
    glVertex2d(0.02,0.45);
    glVertex2d(0.01,0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.03,-0.5);
    glVertex2d(0.04,-0.5);
    glVertex2d(0.04,0.45);
    glVertex2d(0.03,0.45);
    glEnd();

//b-5
     glBegin(GL_QUADS);
     glColor3ub(82,158,211);
     glVertex2d(-0.1,-0.5);
     glVertex2d(0,-0.5);
     glVertex2d(0,0.65);
     glVertex2d(-0.1,0.68);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.28);
    glVertex2d(0,-0.3);
    glVertex2d(0,-0.35);
    glVertex2d(-0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.08);
    glVertex2d(0,-0.1);
    glVertex2d(0,-0.15);
    glVertex2d(-0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.12);
    glVertex2d(0,0.1);
    glVertex2d(0,0.15);
    glVertex2d(-0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.32);
    glVertex2d(0,0.3);
    glVertex2d(0,0.35);
    glVertex2d(-0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.52);
    glVertex2d(0,0.5);
    glVertex2d(0,0.55);
    glVertex2d(-0.1,0.57);
    glEnd();
//side
     glBegin(GL_QUADS);
     glColor3ub(71,137,180);
     glVertex2d(-0.2,-0.5);
     glVertex2d(-0.1,-0.5);
     glVertex2d(-0.1,0.68);
     glVertex2d(-0.2,0.65);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.30);
    glVertex2d(-0.1,0.32);
    glVertex2d(-0.1,0.37);
    glVertex2d(-0.2,0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.48);
    glVertex2d(-0.1,0.52);
    glVertex2d(-0.1,0.57);
    glVertex2d(-0.2,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.30);
    glVertex2d(-0.1,-0.28);
    glVertex2d(-0.1,-0.33);
    glVertex2d(-0.2,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.10);
    glVertex2d(-0.1,-0.08);
    glVertex2d(-0.1,-0.13);
    glVertex2d(-0.2,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.10);
    glVertex2d(-0.1,0.12);
    glVertex2d(-0.1,0.17);
    glVertex2d(-0.2,0.15);
    glEnd();

//b-6
     glBegin(GL_QUADS);
     glColor3ub(113,70,99);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.18,-0.5);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.28,0.06);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.28);
    glVertex2d(-0.18,-0.30);
    glVertex2d(-0.18,-0.35);
    glVertex2d(-0.28,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.08);
    glVertex2d(-0.18,-0.1);
    glVertex2d(-0.18,-0.15);
    glVertex2d(-0.28,-0.13);
    glEnd();

//b-7
     glBegin(GL_QUADS);
     glColor3ub(113,143,181);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.33,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.28,-0.28);
     glVertex2d(-0.28,-0.33);
     glVertex2d(-0.33,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.28,-0.08);
     glVertex2d(-0.28,-0.13);
     glVertex2d(-0.33,-0.13);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(96,134,166);
     glVertex2d(-0.4,-0.5);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.33,0.08);
     glVertex2d(-0.4,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.29);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.33,-0.33);
     glVertex2d(-0.4,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.09);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.33,-0.13);
     glVertex2d(-0.4,-0.14);
     glEnd();

//b-8-white

     glBegin(GL_QUADS);
     glColor3ub(198,208,215);
     glVertex2d(-0.28,0.06);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.18,0.28);
     glVertex2d(-0.28,0.3);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.18,0.1);
    glVertex2d(-0.18,0.15);
    glVertex2d(-0.28,0.17);
    glEnd();

//b-9
     glBegin(GL_QUADS);
     glColor3ub(192,194,203);
     glVertex2d(-0.38,0.08);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.28,0.3);
     glVertex2d(-0.38,0.28);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.38,0.11);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.28,0.17);
    glVertex2d(-0.38,0.16);
    glEnd();
//b-10
     glBegin(GL_QUADS);
     glColor3ub(163,175,177);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.6,-0.5);
     glVertex2d(-0.6,0.5);
     glVertex2d(-0.75,0.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.35);
     glVertex2d(-0.6,-0.35);
     glVertex2d(-0.6,-0.4);
     glVertex2d(-0.75,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();

     glTranslatef(0,0.2,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.4,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.6,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

//b-11
     glBegin(GL_QUADS);
     glColor3ub(180,250,201);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.75,-0.15);
     glVertex2d(-0.9,-0.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.75,-0.4);
     glVertex2d(-0.75,-0.45);
     glVertex2d(-0.9,-0.43);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.75,-0.25);
     glVertex2d(-0.9,-0.23);
     glEnd();

//b-12
     glBegin(GL_QUADS);
     glColor3ub(172,219,201);
     glVertex2d(-1,-0.5);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.9,-0.1);
     glVertex2d(-1,-0.15);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.39);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.9,-0.43);
     glVertex2d(-1,-0.44);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.2);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.9,-0.23);
     glVertex2d(-1,-0.25);
     glEnd();
//flyover

    glBegin(GL_QUADS);
    glColor3ub(0,72,108);
    glVertex2d(-1,-0.28);
    glVertex2d(0.2,-0.28);
    glVertex2d(0.2,-0.38);
    glVertex2d(-1,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.34);
    glVertex2d(0.2,-0.34);
    glVertex2d(0.2,-0.36);
    glVertex2d(-1,-0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.31);
    glVertex2d(0.2,-0.31);
    glVertex2d(0.2,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.73,-0.5);
    glVertex2d(-0.73,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.64,-0.5);
    glVertex2d(-0.64,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glTranslatef(0.45,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

//metro
    glBegin(GL_QUADS);
    glColor3ub(225,208,182);
    glVertex2d(-1,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.06);
    glVertex2d(-1,-0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,33,45);
    glVertex2d(-1,-0.12);
    glVertex2d(1,-0.12);
    glVertex2d(1,-0.1);
    glVertex2d(-1,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

//road
    glBegin(GL_QUADS);
    glColor3ub(117,125,144);
    glVertex2d(-1,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,-0.7);
    glVertex2d(-1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();

    glTranslatef(0,-0.07,0);
    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();
    glLoadIdentity();

//pink field
    glBegin(GL_QUADS);
    glColor3ub(96, 83, 57);
    glVertex2d(1,-0.7);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.7,-1);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(111, 88, 42);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.1,-0.7);
    glVertex2d(0.4,-1);
    glVertex2d(0.7,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(96, 83, 57);
    glVertex2d(0.1,-0.7);
    glVertex2d(-0.3,-0.7);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(111, 88, 42);
    glVertex2d(-0.3,-0.7);
    glVertex2d(-0.4,-1);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(96, 83, 57);
    glVertex2d(-0.35,-0.7);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.3,-0.7);
    glEnd();

//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();
//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();

//road side left
    glBegin(GL_QUADS);
    glColor3ub(54,42,51);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.35,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(121,99,52);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-1);
    glVertex2d(-0.55,-1);
    glVertex2d(-0.45,-0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230,222,214);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-1);
    glVertex2d(-0.65,-1);
    glVertex2d(-0.55,-0.8);
    glEnd();
//metro rail

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-1,-0.06);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.85,0.02);
    glVertex2d(-1,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.84,0.02);
    glVertex2d(-0.85,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.65,0.02);
    glVertex2d(-0.84,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.64,0.02);
    glVertex2d(-0.65,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8,191,218);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.25,-0.06);
    glVertex2d(-0.25,-0.02);
    glVertex2d(-0.28,0.02);
    glVertex2d(-0.44,0.02);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


//rail window
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.18,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glTranslatef(0.38,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslatef(0.58,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//truck-1
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,153);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();
//truck light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 212, 128);
    glVertex2d(-0.9,-0.66);
    glVertex2d(-0.95,-0.63);
    glVertex2d(-0.95,-0.67);
    glEnd();


//truck tier-1

    GLfloat x1=-0.81f; GLfloat y1=-0.68f; GLfloat radius2 =.02f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
	glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

    GLfloat radius3=0.01f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//tire-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
	glLoadIdentity();

//car
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 179, 179);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.79,-0.65);
    glVertex2d(0.74,-0.63);
    glVertex2d(0.74,-0.67);
    glEnd();
//car tire
    glTranslatef(1.62,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 3
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.682,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.5,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(102, 153, 153);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.79,-0.65);
    glVertex2d(0.74,-0.63);
    glVertex2d(0.74,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//car tire
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.63,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.695,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//lamppost opposite side
//l-1
    glTranslatef(1.2,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-2
    glTranslatef(0.6,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(0.1,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(-0.5,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//car-3, l2r
    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    glTranslatef(0,0.1,0);
	glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.64);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.79,-0.62);
    glVertex2d(0.82,-0.62);
    glVertex2d(0.82,-0.59);
    glVertex2d(0.79,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.83,-0.62);
    glVertex2d(0.87,-0.62);
    glVertex2d(0.87,-0.59);
    glVertex2d(0.83,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.9,-0.65);
    glVertex2d(0.94,-0.63);
    glVertex2d(0.94,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
//car tier
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();


//truck 1 r2l
    glTranslatef(-1.1,0.09,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.62);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.86,-0.62);
    glVertex2d(0.88,-0.62);
    glVertex2d(0.88,-0.59);
    glVertex2d(0.86,-0.59);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102, 255, 102);
    glVertex2d(0.85,-0.66);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.78,-0.56);
    glVertex2d(0.85,-0.56);
    glEnd();

//truck light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.9,-0.65);
    glVertex2d(0.94,-0.63);
    glVertex2d(0.94,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//truck tire
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//tire 2
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//lamppost
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
//l-2
    glTranslatef(0.15,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(-0.3,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(0.8,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
    glLoadIdentity();
//    glutTimerFunc(3000,demo_night_rain,0);
    glFlush();
}

//void demo_night(int val){glutDisplayFunc(night);}
void Evening()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(80,80,80);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(88,88,88);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(96,96,96);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(104,104,104);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(112,112,112);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120,120,120);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(136,136,136);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(144,144,144);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(152,152,152);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(160,160,160);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,168,168);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(169,169,169);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(176,176,176);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(184,184,184);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//sun
    int i;

	GLfloat x=-.7f; GLfloat y=.85f; GLfloat radius =.1f;
	int triangleAmount = 27;
    GLfloat twicePi = 2.0f * PI;


//sky-1
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glTranslatef(1.0,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

	glTranslatef(1.1,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glPopMatrix();

	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

	glTranslatef(1.2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    glTranslatef(1.1,0.1,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//sky-2
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    GLfloat radius1 =.05f;
    glTranslatef(0.2,-0.25,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
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
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
	glTranslatef(0.25,-0.25,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
	glTranslatef(0.3,-0.25,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

    glTranslatef(0.25,-0.30,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

//sky-3

    glTranslatef(0.4,-0.04,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 209, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.5,-0.04,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 209, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.6,-0.04,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 209, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glTranslatef(0.5,0.05,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179,209,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//sky-3

    glTranslatef(-0.2,-0.15,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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

	glTranslatef(-0.25,-0.15,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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

	glTranslatef(-0.3,-0.15,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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


    glTranslatef(-0.25,-0.1,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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



//black part,b-1
    glBegin(GL_QUADS);
    glColor3ub(71,87,105);
    glVertex2d(0.8,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,1);
    glVertex2d(0.8,1);
    glEnd();
//shadow
    glBegin(GL_TRIANGLES);
    glColor3ub(52,62,73);
    glVertex2d(0.8,1);
    glVertex2d(1,0.6);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52,62,73);
    glVertex2d(0.8,0.2);
    glVertex2d(1,-0.4);
    glVertex2d(1,0.5);
    glVertex2d(0.8,0.4);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,1);
    glVertex2d(0.8,0.95);
    glVertex2d(1,0.95);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.8);
    glVertex2d(0.8,0.7);
    glVertex2d(1,0.7);
    glVertex2d(1,0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.5);
    glVertex2d(1,0.5);
    glVertex2d(1,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.4);
    glVertex2d(0.8,0.3);
    glVertex2d(1,0.3);
    glVertex2d(1,0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.1);
    glVertex2d(1,0.1);
    glVertex2d(1,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.2);
    glVertex2d(0.8,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.4);
    glVertex2d(0.8,-0.3);
    glVertex2d(1,-0.3);
    glVertex2d(1,-0.4);
    glEnd();
//light part
    glBegin(GL_QUADS);
    glColor3ub(159,177,191);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.8,-0.5);
    glVertex2d(0.8,1);
    glVertex2d(0.6,1);
    glEnd();
//floor border
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.8);
    glVertex2d(0.8,0.9);
    glVertex2d(0.8,0.93);
    glVertex2d(0.6,0.83);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.5);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.63);
    glVertex2d(0.6,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.2);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.23);
    glVertex2d(0.6,0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.8,-0.1);
    glVertex2d(0.8,-0.13);
    glVertex2d(0.6,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.3);
    glVertex2d(0.8,-0.3);
    glVertex2d(0.8,-0.33);
    glVertex2d(0.6,-0.33);
    glEnd();

//b2
    glBegin(GL_QUADS);
    glColor3ub(215,169,111);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.2,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.2);
    glVertex2d(0.6,-0.2);
    glVertex2d(0.6,-0.25);
    glVertex2d(0.2,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.4);
    glVertex2d(0.6,-0.4);
    glVertex2d(0.6,-0.45);
    glVertex2d(0.2,-0.45);
    glEnd();

//b-3
    glBegin(GL_QUADS);
    glColor3ub(174,186,226);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.2,0.7);
    glVertex2d(0.1,0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.2,-0.3);
    glVertex2d(0.2,-0.35);
    glVertex2d(0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,-0.15);
    glVertex2d(0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.12);
    glVertex2d(0.2,0.1);
    glVertex2d(0.2,0.15);
    glVertex2d(0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.32);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.35);
    glVertex2d(0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.52);
    glVertex2d(0.2,0.5);
    glVertex2d(0.2,0.55);
    glVertex2d(0.1,0.57);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(160,170,203);
    glVertex2d(0,-0.5);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.1,0.75);
    glVertex2d(0,0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.48);
    glVertex2d(0.1,0.52);
    glVertex2d(0.1,0.57);
    glVertex2d(0,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.30);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.1,-0.33);
    glVertex2d(0,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.2);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.1,-0.13);
    glVertex2d(0,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.10);
    glVertex2d(0.1,0.12);
    glVertex2d(0.1,0.17);
    glVertex2d(0,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.30);
    glVertex2d(0.1,0.32);
    glVertex2d(0.1,0.37);
    glVertex2d(0,0.35);
    glEnd();




//b-4

    glBegin(GL_QUADS);
    glColor3ub(182,205,228);
    glVertex2d(0,-0.5);
    glVertex2d(0.06,-0.5);
    glVertex2d(0.06,0.5);
    glVertex2d(0,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.01,-0.5);
    glVertex2d(0.02,-0.5);
    glVertex2d(0.02,0.45);
    glVertex2d(0.01,0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.03,-0.5);
    glVertex2d(0.04,-0.5);
    glVertex2d(0.04,0.45);
    glVertex2d(0.03,0.45);
    glEnd();

//b-5
     glBegin(GL_QUADS);
     glColor3ub(82,158,211);
     glVertex2d(-0.1,-0.5);
     glVertex2d(0,-0.5);
     glVertex2d(0,0.65);
     glVertex2d(-0.1,0.68);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.28);
    glVertex2d(0,-0.3);
    glVertex2d(0,-0.35);
    glVertex2d(-0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.08);
    glVertex2d(0,-0.1);
    glVertex2d(0,-0.15);
    glVertex2d(-0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.12);
    glVertex2d(0,0.1);
    glVertex2d(0,0.15);
    glVertex2d(-0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.32);
    glVertex2d(0,0.3);
    glVertex2d(0,0.35);
    glVertex2d(-0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.52);
    glVertex2d(0,0.5);
    glVertex2d(0,0.55);
    glVertex2d(-0.1,0.57);
    glEnd();
//side
     glBegin(GL_QUADS);
     glColor3ub(71,137,180);
     glVertex2d(-0.2,-0.5);
     glVertex2d(-0.1,-0.5);
     glVertex2d(-0.1,0.68);
     glVertex2d(-0.2,0.65);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.30);
    glVertex2d(-0.1,0.32);
    glVertex2d(-0.1,0.37);
    glVertex2d(-0.2,0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.48);
    glVertex2d(-0.1,0.52);
    glVertex2d(-0.1,0.57);
    glVertex2d(-0.2,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.30);
    glVertex2d(-0.1,-0.28);
    glVertex2d(-0.1,-0.33);
    glVertex2d(-0.2,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.10);
    glVertex2d(-0.1,-0.08);
    glVertex2d(-0.1,-0.13);
    glVertex2d(-0.2,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.10);
    glVertex2d(-0.1,0.12);
    glVertex2d(-0.1,0.17);
    glVertex2d(-0.2,0.15);
    glEnd();

//b-6
     glBegin(GL_QUADS);
     glColor3ub(113,70,99);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.18,-0.5);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.28,0.06);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.28);
    glVertex2d(-0.18,-0.30);
    glVertex2d(-0.18,-0.35);
    glVertex2d(-0.28,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.08);
    glVertex2d(-0.18,-0.1);
    glVertex2d(-0.18,-0.15);
    glVertex2d(-0.28,-0.13);
    glEnd();

//b-7
     glBegin(GL_QUADS);
     glColor3ub(113,143,181);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.33,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.28,-0.28);
     glVertex2d(-0.28,-0.33);
     glVertex2d(-0.33,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.28,-0.08);
     glVertex2d(-0.28,-0.13);
     glVertex2d(-0.33,-0.13);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(96,134,166);
     glVertex2d(-0.4,-0.5);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.33,0.08);
     glVertex2d(-0.4,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.29);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.33,-0.33);
     glVertex2d(-0.4,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.09);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.33,-0.13);
     glVertex2d(-0.4,-0.14);
     glEnd();

//b-8-white

     glBegin(GL_QUADS);
     glColor3ub(198,208,215);
     glVertex2d(-0.28,0.06);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.18,0.28);
     glVertex2d(-0.28,0.3);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.18,0.1);
    glVertex2d(-0.18,0.15);
    glVertex2d(-0.28,0.17);
    glEnd();

//b-9
     glBegin(GL_QUADS);
     glColor3ub(192,194,203);
     glVertex2d(-0.38,0.08);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.28,0.3);
     glVertex2d(-0.38,0.28);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.38,0.11);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.28,0.17);
    glVertex2d(-0.38,0.16);
    glEnd();
//b-10
     glBegin(GL_QUADS);
     glColor3ub(163,175,177);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.6,-0.5);
     glVertex2d(-0.6,0.5);
     glVertex2d(-0.75,0.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.35);
     glVertex2d(-0.6,-0.35);
     glVertex2d(-0.6,-0.4);
     glVertex2d(-0.75,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();

     glTranslatef(0,0.2,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.4,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.6,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

//b-11
     glBegin(GL_QUADS);
     glColor3ub(180,250,201);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.75,-0.15);
     glVertex2d(-0.9,-0.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.75,-0.4);
     glVertex2d(-0.75,-0.45);
     glVertex2d(-0.9,-0.43);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.75,-0.25);
     glVertex2d(-0.9,-0.23);
     glEnd();

//b-12
     glBegin(GL_QUADS);
     glColor3ub(172,219,201);
     glVertex2d(-1,-0.5);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.9,-0.1);
     glVertex2d(-1,-0.15);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.39);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.9,-0.43);
     glVertex2d(-1,-0.44);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.2);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.9,-0.23);
     glVertex2d(-1,-0.25);
     glEnd();
//flyover

    glBegin(GL_QUADS);
    glColor3ub(0,72,108);
    glVertex2d(-1,-0.28);
    glVertex2d(0.2,-0.28);
    glVertex2d(0.2,-0.38);
    glVertex2d(-1,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.34);
    glVertex2d(0.2,-0.34);
    glVertex2d(0.2,-0.36);
    glVertex2d(-1,-0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.31);
    glVertex2d(0.2,-0.31);
    glVertex2d(0.2,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.73,-0.5);
    glVertex2d(-0.73,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.64,-0.5);
    glVertex2d(-0.64,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glTranslatef(0.45,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();
//flyover car-1
    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    glTranslatef(-0.7,0.05,0);
    glScaled(0.8,0.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(148, 184, 184);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.78,-0.65);
    glVertex2d(0.72,-0.63);
    glVertex2d(0.72,-0.67);
    glEnd();
    glLoadIdentity();
//fly over car-2
    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    glTranslatef(-1.0,0.05,0);
    glScaled(0.8,0.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(0, 179, 0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.78,-0.65);
    glVertex2d(0.72,-0.63);
    glVertex2d(0.72,-0.67);
    glEnd();
    glLoadIdentity();

//metro


    glBegin(GL_QUADS);
    glColor3ub(225,208,182);
    glVertex2d(-1,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.06);
    glVertex2d(-1,-0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,33,45);
    glVertex2d(-1,-0.12);
    glVertex2d(1,-0.12);
    glVertex2d(1,-0.1);
    glVertex2d(-1,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

//road
    glBegin(GL_QUADS);
    glColor3ub(117,125,144);
    glVertex2d(-1,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,-0.7);
    glVertex2d(-1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();

    glTranslatef(0,-0.07,0);
    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();
    glLoadIdentity();

//pink field
    glBegin(GL_QUADS);
    glColor3ub(208,144,145);
    glVertex2d(1,-0.7);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.7,-1);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(234,151,165);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.1,-0.7);
    glVertex2d(0.4,-1);
    glVertex2d(0.7,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(237,166,174);
    glVertex2d(0.1,-0.7);
    glVertex2d(-0.3,-0.7);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(233,153,165);
    glVertex2d(-0.3,-0.7);
    glVertex2d(-0.4,-1);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237,166,174);
    glVertex2d(-0.35,-0.7);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.3,-0.7);
    glEnd();

//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();

//road side left
    glBegin(GL_QUADS);
    glColor3ub(54,42,51);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.35,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(121,99,52);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-1);
    glVertex2d(-0.55,-1);
    glVertex2d(-0.45,-0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230,222,214);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-1);
    glVertex2d(-0.65,-1);
    glVertex2d(-0.55,-0.8);
    glEnd();
//metro rail

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-1,-0.06);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.85,0.02);
    glVertex2d(-1,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.84,0.02);
    glVertex2d(-0.85,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.65,0.02);
    glVertex2d(-0.84,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.64,0.02);
    glVertex2d(-0.65,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8,191,218);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.25,-0.06);
    glVertex2d(-0.25,-0.02);
    glVertex2d(-0.28,0.02);
    glVertex2d(-0.44,0.02);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


//rail window
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.18,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glTranslatef(0.38,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslatef(0.58,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//truck-1
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,153);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();
//truck light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 212, 128);
    glVertex2d(-0.9,-0.66);
    glVertex2d(-0.95,-0.63);
    glVertex2d(-0.95,-0.67);
    glEnd();


//truck tier-1

    GLfloat x1=-0.81f; GLfloat y1=-0.68f; GLfloat radius2 =.02f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
	glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

    GLfloat radius3=0.01f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//tire-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
	glLoadIdentity();

//truck-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.4,0.04,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 204, 102);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();
//truck light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 212, 128);
    glVertex2d(-0.9,-0.66);
    glVertex2d(-0.95,-0.63);
    glVertex2d(-0.95,-0.67);
    glEnd();

//truck tier-1
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.4,0.04,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//tire-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.4,0.04,0);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//truck-3
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.8,0.04,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 102);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();
//truck light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 212, 128);
    glVertex2d(-0.9,-0.66);
    glVertex2d(-0.95,-0.63);
    glVertex2d(-0.95,-0.67);
    glEnd();

//truck tier-1
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
	glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

    glTranslatef(0.8,0.04,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//tire-2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.8,0.04,0);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();


//truck-4
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.2,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 51, 255);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();

//truck tier-1
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//tire-2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.2,0,0);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//car
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 179, 179);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.79,-0.65);
    glVertex2d(0.74,-0.63);
    glVertex2d(0.74,-0.67);
    glEnd();
//car tire
    glTranslatef(1.62,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 3
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.682,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.5,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(102, 153, 153);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.79,-0.65);
    glVertex2d(0.74,-0.63);
    glVertex2d(0.74,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//car tire
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.63,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.695,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//lamppost opposite side
//l-1
    glTranslatef(1.2,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-2
    glTranslatef(0.6,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(0.1,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(-0.5,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//car-3, l2r
    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    glTranslatef(0,0.1,0);
	glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.64);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.79,-0.62);
    glVertex2d(0.82,-0.62);
    glVertex2d(0.82,-0.59);
    glVertex2d(0.79,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.83,-0.62);
    glVertex2d(0.87,-0.62);
    glVertex2d(0.87,-0.59);
    glVertex2d(0.83,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.9,-0.65);
    glVertex2d(0.94,-0.63);
    glVertex2d(0.94,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
//car tier
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-4
    glTranslatef(-0.6,0.1,0);
    glTranslatef(position6,0.0f, 0.0f);
	glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.64);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.79,-0.62);
    glVertex2d(0.82,-0.62);
    glVertex2d(0.82,-0.59);
    glVertex2d(0.79,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.83,-0.62);
    glVertex2d(0.87,-0.62);
    glVertex2d(0.87,-0.59);
    glVertex2d(0.83,-0.59);
    glEnd();
//car light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.9,-0.65);
    glVertex2d(0.94,-0.63);
    glVertex2d(0.94,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
//car tier
    glTranslatef(-0.61,0.1,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glTranslatef(-0.61,0.1,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//truck 1 r2l
    glTranslatef(-1.1,0.09,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.62);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.86,-0.62);
    glVertex2d(0.88,-0.62);
    glVertex2d(0.88,-0.59);
    glVertex2d(0.86,-0.59);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102, 255, 102);
    glVertex2d(0.85,-0.66);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.78,-0.56);
    glVertex2d(0.85,-0.56);
    glEnd();

//truck light
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 247, 230);
    glVertex2d(0.9,-0.65);
    glVertex2d(0.94,-0.63);
    glVertex2d(0.94,-0.67);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//truck tire
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//tire 2
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//lamppost
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
//l-2
    glTranslatef(0.15,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(-0.3,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(0.8,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
    glLoadIdentity();
//    glutTimerFunc(3000,demo_night,0);
    glFlush();
}

//void demo_evening(int val){glutDisplayFunc(Evening);}
void day_rain()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0, 77, 153);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 89, 179);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 115, 230);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 128, 255);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(26, 140, 255);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 153, 255);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77, 166, 255);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 179, 255);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 191, 255);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 204, 255);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179, 217, 255);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 230, 255);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 242, 255);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 194, 255);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 204, 255);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//sun
    int i;

	GLfloat x=-.7f; GLfloat y=.85f; GLfloat radius =.1f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;

    glPushMatrix();
    glTranslatef(position,position, 0.0f);

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
	glPopMatrix();
//sky-1
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glTranslatef(1.0,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

	glTranslatef(1.1,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glPopMatrix();

	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

	glTranslatef(1.2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    glTranslatef(1.1,0.1,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//sky-2
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    GLfloat radius1 =.05f;
    glTranslatef(0.2,-0.25,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
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
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
	glTranslatef(0.25,-0.25,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
	glTranslatef(0.3,-0.25,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

    glTranslatef(0.25,-0.30,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

//sky-3

    glTranslatef(0.4,-0.04,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 209, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.5,-0.04,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 209, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.6,-0.04,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 209, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glTranslatef(0.5,0.05,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179,209,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//sky-3

    glTranslatef(-0.2,-0.15,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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

	glTranslatef(-0.25,-0.15,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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

	glTranslatef(-0.3,-0.15,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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


    glTranslatef(-0.25,-0.1,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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



//black part,b-1
    glBegin(GL_QUADS);
    glColor3ub(71,87,105);
    glVertex2d(0.8,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,1);
    glVertex2d(0.8,1);
    glEnd();
//shadow
    glBegin(GL_TRIANGLES);
    glColor3ub(52,62,73);
    glVertex2d(0.8,1);
    glVertex2d(1,0.6);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52,62,73);
    glVertex2d(0.8,0.2);
    glVertex2d(1,-0.4);
    glVertex2d(1,0.5);
    glVertex2d(0.8,0.4);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,1);
    glVertex2d(0.8,0.95);
    glVertex2d(1,0.95);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.8);
    glVertex2d(0.8,0.7);
    glVertex2d(1,0.7);
    glVertex2d(1,0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.5);
    glVertex2d(1,0.5);
    glVertex2d(1,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.4);
    glVertex2d(0.8,0.3);
    glVertex2d(1,0.3);
    glVertex2d(1,0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.1);
    glVertex2d(1,0.1);
    glVertex2d(1,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.2);
    glVertex2d(0.8,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.4);
    glVertex2d(0.8,-0.3);
    glVertex2d(1,-0.3);
    glVertex2d(1,-0.4);
    glEnd();
//light part
    glBegin(GL_QUADS);
    glColor3ub(159,177,191);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.8,-0.5);
    glVertex2d(0.8,1);
    glVertex2d(0.6,1);
    glEnd();
//floor border
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.8);
    glVertex2d(0.8,0.9);
    glVertex2d(0.8,0.93);
    glVertex2d(0.6,0.83);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.5);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.63);
    glVertex2d(0.6,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.2);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.23);
    glVertex2d(0.6,0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.8,-0.1);
    glVertex2d(0.8,-0.13);
    glVertex2d(0.6,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.3);
    glVertex2d(0.8,-0.3);
    glVertex2d(0.8,-0.33);
    glVertex2d(0.6,-0.33);
    glEnd();

//b2
    glBegin(GL_QUADS);
    glColor3ub(215,169,111);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.2,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.2);
    glVertex2d(0.6,-0.2);
    glVertex2d(0.6,-0.25);
    glVertex2d(0.2,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.4);
    glVertex2d(0.6,-0.4);
    glVertex2d(0.6,-0.45);
    glVertex2d(0.2,-0.45);
    glEnd();

//b-3
    glBegin(GL_QUADS);
    glColor3ub(174,186,226);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.2,0.7);
    glVertex2d(0.1,0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.2,-0.3);
    glVertex2d(0.2,-0.35);
    glVertex2d(0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,-0.15);
    glVertex2d(0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.12);
    glVertex2d(0.2,0.1);
    glVertex2d(0.2,0.15);
    glVertex2d(0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.32);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.35);
    glVertex2d(0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.52);
    glVertex2d(0.2,0.5);
    glVertex2d(0.2,0.55);
    glVertex2d(0.1,0.57);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(160,170,203);
    glVertex2d(0,-0.5);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.1,0.75);
    glVertex2d(0,0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.48);
    glVertex2d(0.1,0.52);
    glVertex2d(0.1,0.57);
    glVertex2d(0,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.30);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.1,-0.33);
    glVertex2d(0,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.2);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.1,-0.13);
    glVertex2d(0,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.10);
    glVertex2d(0.1,0.12);
    glVertex2d(0.1,0.17);
    glVertex2d(0,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.30);
    glVertex2d(0.1,0.32);
    glVertex2d(0.1,0.37);
    glVertex2d(0,0.35);
    glEnd();




//b-4

    glBegin(GL_QUADS);
    glColor3ub(182,205,228);
    glVertex2d(0,-0.5);
    glVertex2d(0.06,-0.5);
    glVertex2d(0.06,0.5);
    glVertex2d(0,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.01,-0.5);
    glVertex2d(0.02,-0.5);
    glVertex2d(0.02,0.45);
    glVertex2d(0.01,0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.03,-0.5);
    glVertex2d(0.04,-0.5);
    glVertex2d(0.04,0.45);
    glVertex2d(0.03,0.45);
    glEnd();

//b-5
     glBegin(GL_QUADS);
     glColor3ub(82,158,211);
     glVertex2d(-0.1,-0.5);
     glVertex2d(0,-0.5);
     glVertex2d(0,0.65);
     glVertex2d(-0.1,0.68);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.28);
    glVertex2d(0,-0.3);
    glVertex2d(0,-0.35);
    glVertex2d(-0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.08);
    glVertex2d(0,-0.1);
    glVertex2d(0,-0.15);
    glVertex2d(-0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.12);
    glVertex2d(0,0.1);
    glVertex2d(0,0.15);
    glVertex2d(-0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.32);
    glVertex2d(0,0.3);
    glVertex2d(0,0.35);
    glVertex2d(-0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.52);
    glVertex2d(0,0.5);
    glVertex2d(0,0.55);
    glVertex2d(-0.1,0.57);
    glEnd();
//side
     glBegin(GL_QUADS);
     glColor3ub(71,137,180);
     glVertex2d(-0.2,-0.5);
     glVertex2d(-0.1,-0.5);
     glVertex2d(-0.1,0.68);
     glVertex2d(-0.2,0.65);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.30);
    glVertex2d(-0.1,0.32);
    glVertex2d(-0.1,0.37);
    glVertex2d(-0.2,0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.48);
    glVertex2d(-0.1,0.52);
    glVertex2d(-0.1,0.57);
    glVertex2d(-0.2,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.30);
    glVertex2d(-0.1,-0.28);
    glVertex2d(-0.1,-0.33);
    glVertex2d(-0.2,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.10);
    glVertex2d(-0.1,-0.08);
    glVertex2d(-0.1,-0.13);
    glVertex2d(-0.2,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.10);
    glVertex2d(-0.1,0.12);
    glVertex2d(-0.1,0.17);
    glVertex2d(-0.2,0.15);
    glEnd();

//b-6
     glBegin(GL_QUADS);
     glColor3ub(113,70,99);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.18,-0.5);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.28,0.06);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.28);
    glVertex2d(-0.18,-0.30);
    glVertex2d(-0.18,-0.35);
    glVertex2d(-0.28,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.08);
    glVertex2d(-0.18,-0.1);
    glVertex2d(-0.18,-0.15);
    glVertex2d(-0.28,-0.13);
    glEnd();

//b-7
     glBegin(GL_QUADS);
     glColor3ub(113,143,181);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.33,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.28,-0.28);
     glVertex2d(-0.28,-0.33);
     glVertex2d(-0.33,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.28,-0.08);
     glVertex2d(-0.28,-0.13);
     glVertex2d(-0.33,-0.13);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(96,134,166);
     glVertex2d(-0.4,-0.5);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.33,0.08);
     glVertex2d(-0.4,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.29);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.33,-0.33);
     glVertex2d(-0.4,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.09);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.33,-0.13);
     glVertex2d(-0.4,-0.14);
     glEnd();

//b-8-white

     glBegin(GL_QUADS);
     glColor3ub(198,208,215);
     glVertex2d(-0.28,0.06);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.18,0.28);
     glVertex2d(-0.28,0.3);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.18,0.1);
    glVertex2d(-0.18,0.15);
    glVertex2d(-0.28,0.17);
    glEnd();

//b-9
     glBegin(GL_QUADS);
     glColor3ub(192,194,203);
     glVertex2d(-0.38,0.08);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.28,0.3);
     glVertex2d(-0.38,0.28);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.38,0.11);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.28,0.17);
    glVertex2d(-0.38,0.16);
    glEnd();
//b-10
     glBegin(GL_QUADS);
     glColor3ub(163,175,177);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.6,-0.5);
     glVertex2d(-0.6,0.5);
     glVertex2d(-0.75,0.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.35);
     glVertex2d(-0.6,-0.35);
     glVertex2d(-0.6,-0.4);
     glVertex2d(-0.75,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();

     glTranslatef(0,0.2,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.4,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.6,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

//b-11
     glBegin(GL_QUADS);
     glColor3ub(180,250,201);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.75,-0.15);
     glVertex2d(-0.9,-0.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.75,-0.4);
     glVertex2d(-0.75,-0.45);
     glVertex2d(-0.9,-0.43);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.75,-0.25);
     glVertex2d(-0.9,-0.23);
     glEnd();

//b-12
     glBegin(GL_QUADS);
     glColor3ub(172,219,201);
     glVertex2d(-1,-0.5);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.9,-0.1);
     glVertex2d(-1,-0.15);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.39);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.9,-0.43);
     glVertex2d(-1,-0.44);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.2);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.9,-0.23);
     glVertex2d(-1,-0.25);
     glEnd();
//flyover

    glBegin(GL_QUADS);
    glColor3ub(0,72,108);
    glVertex2d(-1,-0.28);
    glVertex2d(0.2,-0.28);
    glVertex2d(0.2,-0.38);
    glVertex2d(-1,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.34);
    glVertex2d(0.2,-0.34);
    glVertex2d(0.2,-0.36);
    glVertex2d(-1,-0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.31);
    glVertex2d(0.2,-0.31);
    glVertex2d(0.2,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.73,-0.5);
    glVertex2d(-0.73,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.64,-0.5);
    glVertex2d(-0.64,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glTranslatef(0.45,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();
//flyover car-1
    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    glTranslatef(-0.7,0.05,0);
    glScaled(0.8,0.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(148, 184, 184);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
    glLoadIdentity();
//fly over car-2
    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    glTranslatef(-1.0,0.05,0);
    glScaled(0.8,0.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(0, 179, 0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
    glLoadIdentity();

//metro


    glBegin(GL_QUADS);
    glColor3ub(225,208,182);
    glVertex2d(-1,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.06);
    glVertex2d(-1,-0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,33,45);
    glVertex2d(-1,-0.12);
    glVertex2d(1,-0.12);
    glVertex2d(1,-0.1);
    glVertex2d(-1,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

//road
    glBegin(GL_QUADS);
    glColor3ub(117,125,144);
    glVertex2d(-1,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,-0.7);
    glVertex2d(-1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();

    glTranslatef(0,-0.07,0);
    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();
    glLoadIdentity();

//pink field
    glBegin(GL_QUADS);
    glColor3ub(208,144,145);
    glVertex2d(1,-0.7);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.7,-1);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(234,151,165);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.1,-0.7);
    glVertex2d(0.4,-1);
    glVertex2d(0.7,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(237,166,174);
    glVertex2d(0.1,-0.7);
    glVertex2d(-0.3,-0.7);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(233,153,165);
    glVertex2d(-0.3,-0.7);
    glVertex2d(-0.4,-1);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237,166,174);
    glVertex2d(-0.35,-0.7);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.3,-0.7);
    glEnd();

//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();

//road side left
    glBegin(GL_QUADS);
    glColor3ub(54,42,51);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.35,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(121,99,52);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-1);
    glVertex2d(-0.55,-1);
    glVertex2d(-0.45,-0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230,222,214);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-1);
    glVertex2d(-0.65,-1);
    glVertex2d(-0.55,-0.8);
    glEnd();

//metro rail

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-1,-0.06);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.85,0.02);
    glVertex2d(-1,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.84,0.02);
    glVertex2d(-0.85,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.65,0.02);
    glVertex2d(-0.84,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.64,0.02);
    glVertex2d(-0.65,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8,191,218);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.25,-0.06);
    glVertex2d(-0.25,-0.02);
    glVertex2d(-0.28,0.02);
    glVertex2d(-0.44,0.02);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


//rail window
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.18,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glTranslatef(0.38,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslatef(0.58,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


//truck-1
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,153);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();


//truck tier-1

    GLfloat x1=-0.81f; GLfloat y1=-0.68f; GLfloat radius2 =.02f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
	glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

    GLfloat radius3=0.01f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//tire-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
	glLoadIdentity();

//truck-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.4,0.04,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 204, 102);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();

//truck tier-1
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.4,0.04,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//tire-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.4,0.04,0);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//truck-3
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.8,0.04,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 102);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();

//truck tier-1
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
	glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

    glTranslatef(0.8,0.04,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//tire-2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.8,0.04,0);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();


//truck-4
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.2,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 51, 255);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();

//truck tier-1
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//tire-2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.2,0,0);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//car
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 179, 179);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();

//car tire
    glTranslatef(1.62,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 3
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.682,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.5,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(102, 153, 153);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
   glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//car tire
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.63,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.695,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//lamppost opposite side
//l-1
    glTranslatef(1.2,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glLoadIdentity();
//l-2
    glTranslatef(0.6,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(0.1,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(-0.5,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glLoadIdentity();
//car-3, r2l
    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    glTranslatef(0,0.1,0);
	glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.64);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.79,-0.62);
    glVertex2d(0.82,-0.62);
    glVertex2d(0.82,-0.59);
    glVertex2d(0.79,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.83,-0.62);
    glVertex2d(0.87,-0.62);
    glVertex2d(0.87,-0.59);
    glVertex2d(0.83,-0.59);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
//car tier
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-4
    glTranslatef(-0.6,0.1,0);
    glTranslatef(position6,0.0f, 0.0f);
	glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.64);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.79,-0.62);
    glVertex2d(0.82,-0.62);
    glVertex2d(0.82,-0.59);
    glVertex2d(0.79,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.83,-0.62);
    glVertex2d(0.87,-0.62);
    glVertex2d(0.87,-0.59);
    glVertex2d(0.83,-0.59);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
//car tier
    glTranslatef(-0.61,0.1,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glTranslatef(-0.61,0.1,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//truck 1 r2l
    glTranslatef(-1.1,0.09,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.62);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.86,-0.62);
    glVertex2d(0.88,-0.62);
    glVertex2d(0.88,-0.59);
    glVertex2d(0.86,-0.59);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102, 255, 102);
    glVertex2d(0.85,-0.66);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.78,-0.56);
    glVertex2d(0.85,-0.56);
    glEnd();glPopMatrix();
    glLoadIdentity();

//truck tire
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//tire 2
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//lamppost
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
//l-2
    glTranslatef(0.15,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(-0.3,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(0.8,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
    //rain effect
    GLfloat x3= -1;
    GLfloat y3 = 1;
    glPushMatrix();
    glTranslatef(position4,position4,0.0f);
    glBegin(GL_LINES);
    for(int i=1;i<=10;i=i+2){

    glVertex2f(x3,y3);
    glVertex2f(x3-.04,y3-.04);

    x3 += .08;
    }
    glEnd();glPopMatrix();


    for(int j=0;j<=40;j++)
    {
    x3 = -1.05;
    y3= y3-.05;
    glPushMatrix();
     glTranslatef(position4,position4,0.0f);
    glBegin(GL_LINES);

    for(int i=0;i<=100;i++){

    glVertex2f(x3,y3);
    glVertex2f(x3-.04,y3-.04);

    x3 += .08;
    }
    glEnd();
    glPopMatrix();
    }
//    glutTimerFunc(3000,demo_evening,0);
    glFlush();
}
//void demo_day_rain(int val){glutDisplayFunc(day_rain);}
void day() {

    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0, 77, 153);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 89, 179);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 115, 230);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 128, 255);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(26, 140, 255);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 153, 255);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77, 166, 255);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 179, 255);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 191, 255);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 204, 255);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179, 217, 255);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 230, 255);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 242, 255);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 194, 255);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 204, 255);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//sun
    int i;

	GLfloat x=-.7f; GLfloat y=.85f; GLfloat radius =.1f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;

    glPushMatrix();
    glTranslatef(position,position, 0.0f);

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
	glPopMatrix();
//sky-1
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glTranslatef(1.0,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

	glTranslatef(1.1,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glPopMatrix();

	glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

	glTranslatef(1.2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);

    glTranslatef(1.1,0.1,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(51, 204, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//sky-2
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    GLfloat radius1 =.05f;
    glTranslatef(0.2,-0.25,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
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
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
	glTranslatef(0.25,-0.25,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
	glTranslatef(0.3,-0.25,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

    glTranslatef(0.25,-0.30,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 217, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

//sky-3

    glTranslatef(0.4,-0.04,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 209, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.5,-0.04,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 209, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

	glTranslatef(0.6,-0.04,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179, 209, 255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glTranslatef(0.5,0.05,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(179,209,255);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//sky-3

    glTranslatef(-0.2,-0.15,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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

	glTranslatef(-0.25,-0.15,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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

	glTranslatef(-0.3,-0.15,0);
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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


    glTranslatef(-0.25,-0.1,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
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



//black part,b-1
    glBegin(GL_QUADS);
    glColor3ub(71,87,105);
    glVertex2d(0.8,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,1);
    glVertex2d(0.8,1);
    glEnd();
//shadow
    glBegin(GL_TRIANGLES);
    glColor3ub(52,62,73);
    glVertex2d(0.8,1);
    glVertex2d(1,0.6);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52,62,73);
    glVertex2d(0.8,0.2);
    glVertex2d(1,-0.4);
    glVertex2d(1,0.5);
    glVertex2d(0.8,0.4);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,1);
    glVertex2d(0.8,0.95);
    glVertex2d(1,0.95);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.8);
    glVertex2d(0.8,0.7);
    glVertex2d(1,0.7);
    glVertex2d(1,0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.5);
    glVertex2d(1,0.5);
    glVertex2d(1,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.4);
    glVertex2d(0.8,0.3);
    glVertex2d(1,0.3);
    glVertex2d(1,0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.1);
    glVertex2d(1,0.1);
    glVertex2d(1,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.2);
    glVertex2d(0.8,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.4);
    glVertex2d(0.8,-0.3);
    glVertex2d(1,-0.3);
    glVertex2d(1,-0.4);
    glEnd();
//light part
    glBegin(GL_QUADS);
    glColor3ub(159,177,191);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.8,-0.5);
    glVertex2d(0.8,1);
    glVertex2d(0.6,1);
    glEnd();
//floor border
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.8);
    glVertex2d(0.8,0.9);
    glVertex2d(0.8,0.93);
    glVertex2d(0.6,0.83);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.5);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.63);
    glVertex2d(0.6,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.2);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.23);
    glVertex2d(0.6,0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.8,-0.1);
    glVertex2d(0.8,-0.13);
    glVertex2d(0.6,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.3);
    glVertex2d(0.8,-0.3);
    glVertex2d(0.8,-0.33);
    glVertex2d(0.6,-0.33);
    glEnd();

//b2
    glBegin(GL_QUADS);
    glColor3ub(215,169,111);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.2,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.2);
    glVertex2d(0.6,-0.2);
    glVertex2d(0.6,-0.25);
    glVertex2d(0.2,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.4);
    glVertex2d(0.6,-0.4);
    glVertex2d(0.6,-0.45);
    glVertex2d(0.2,-0.45);
    glEnd();

//b-3
    glBegin(GL_QUADS);
    glColor3ub(174,186,226);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.2,0.7);
    glVertex2d(0.1,0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.2,-0.3);
    glVertex2d(0.2,-0.35);
    glVertex2d(0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,-0.15);
    glVertex2d(0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.12);
    glVertex2d(0.2,0.1);
    glVertex2d(0.2,0.15);
    glVertex2d(0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.32);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.35);
    glVertex2d(0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.52);
    glVertex2d(0.2,0.5);
    glVertex2d(0.2,0.55);
    glVertex2d(0.1,0.57);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(160,170,203);
    glVertex2d(0,-0.5);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.1,0.75);
    glVertex2d(0,0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.48);
    glVertex2d(0.1,0.52);
    glVertex2d(0.1,0.57);
    glVertex2d(0,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.30);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.1,-0.33);
    glVertex2d(0,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.2);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.1,-0.13);
    glVertex2d(0,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.10);
    glVertex2d(0.1,0.12);
    glVertex2d(0.1,0.17);
    glVertex2d(0,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.30);
    glVertex2d(0.1,0.32);
    glVertex2d(0.1,0.37);
    glVertex2d(0,0.35);
    glEnd();




//b-4

    glBegin(GL_QUADS);
    glColor3ub(182,205,228);
    glVertex2d(0,-0.5);
    glVertex2d(0.06,-0.5);
    glVertex2d(0.06,0.5);
    glVertex2d(0,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.01,-0.5);
    glVertex2d(0.02,-0.5);
    glVertex2d(0.02,0.45);
    glVertex2d(0.01,0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.03,-0.5);
    glVertex2d(0.04,-0.5);
    glVertex2d(0.04,0.45);
    glVertex2d(0.03,0.45);
    glEnd();

//b-5
     glBegin(GL_QUADS);
     glColor3ub(82,158,211);
     glVertex2d(-0.1,-0.5);
     glVertex2d(0,-0.5);
     glVertex2d(0,0.65);
     glVertex2d(-0.1,0.68);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.28);
    glVertex2d(0,-0.3);
    glVertex2d(0,-0.35);
    glVertex2d(-0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.08);
    glVertex2d(0,-0.1);
    glVertex2d(0,-0.15);
    glVertex2d(-0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.12);
    glVertex2d(0,0.1);
    glVertex2d(0,0.15);
    glVertex2d(-0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.32);
    glVertex2d(0,0.3);
    glVertex2d(0,0.35);
    glVertex2d(-0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.52);
    glVertex2d(0,0.5);
    glVertex2d(0,0.55);
    glVertex2d(-0.1,0.57);
    glEnd();
//side
     glBegin(GL_QUADS);
     glColor3ub(71,137,180);
     glVertex2d(-0.2,-0.5);
     glVertex2d(-0.1,-0.5);
     glVertex2d(-0.1,0.68);
     glVertex2d(-0.2,0.65);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.30);
    glVertex2d(-0.1,0.32);
    glVertex2d(-0.1,0.37);
    glVertex2d(-0.2,0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.48);
    glVertex2d(-0.1,0.52);
    glVertex2d(-0.1,0.57);
    glVertex2d(-0.2,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.30);
    glVertex2d(-0.1,-0.28);
    glVertex2d(-0.1,-0.33);
    glVertex2d(-0.2,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.10);
    glVertex2d(-0.1,-0.08);
    glVertex2d(-0.1,-0.13);
    glVertex2d(-0.2,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.10);
    glVertex2d(-0.1,0.12);
    glVertex2d(-0.1,0.17);
    glVertex2d(-0.2,0.15);
    glEnd();

//b-6
     glBegin(GL_QUADS);
     glColor3ub(113,70,99);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.18,-0.5);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.28,0.06);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.28);
    glVertex2d(-0.18,-0.30);
    glVertex2d(-0.18,-0.35);
    glVertex2d(-0.28,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.08);
    glVertex2d(-0.18,-0.1);
    glVertex2d(-0.18,-0.15);
    glVertex2d(-0.28,-0.13);
    glEnd();

//b-7
     glBegin(GL_QUADS);
     glColor3ub(113,143,181);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.33,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.28,-0.28);
     glVertex2d(-0.28,-0.33);
     glVertex2d(-0.33,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.28,-0.08);
     glVertex2d(-0.28,-0.13);
     glVertex2d(-0.33,-0.13);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(96,134,166);
     glVertex2d(-0.4,-0.5);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.33,0.08);
     glVertex2d(-0.4,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.29);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.33,-0.33);
     glVertex2d(-0.4,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.09);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.33,-0.13);
     glVertex2d(-0.4,-0.14);
     glEnd();

//b-8-white

     glBegin(GL_QUADS);
     glColor3ub(198,208,215);
     glVertex2d(-0.28,0.06);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.18,0.28);
     glVertex2d(-0.28,0.3);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.18,0.1);
    glVertex2d(-0.18,0.15);
    glVertex2d(-0.28,0.17);
    glEnd();

//b-9
     glBegin(GL_QUADS);
     glColor3ub(192,194,203);
     glVertex2d(-0.38,0.08);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.28,0.3);
     glVertex2d(-0.38,0.28);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.38,0.11);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.28,0.17);
    glVertex2d(-0.38,0.16);
    glEnd();
//b-10
     glBegin(GL_QUADS);
     glColor3ub(163,175,177);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.6,-0.5);
     glVertex2d(-0.6,0.5);
     glVertex2d(-0.75,0.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.35);
     glVertex2d(-0.6,-0.35);
     glVertex2d(-0.6,-0.4);
     glVertex2d(-0.75,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();

     glTranslatef(0,0.2,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.4,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.6,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

//b-11
     glBegin(GL_QUADS);
     glColor3ub(180,250,201);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.75,-0.15);
     glVertex2d(-0.9,-0.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.75,-0.4);
     glVertex2d(-0.75,-0.45);
     glVertex2d(-0.9,-0.43);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.75,-0.25);
     glVertex2d(-0.9,-0.23);
     glEnd();

//b-12
     glBegin(GL_QUADS);
     glColor3ub(172,219,201);
     glVertex2d(-1,-0.5);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.9,-0.1);
     glVertex2d(-1,-0.15);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.39);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.9,-0.43);
     glVertex2d(-1,-0.44);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.2);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.9,-0.23);
     glVertex2d(-1,-0.25);
     glEnd();
//flyover

    glBegin(GL_QUADS);
    glColor3ub(0,72,108);
    glVertex2d(-1,-0.28);
    glVertex2d(0.2,-0.28);
    glVertex2d(0.2,-0.38);
    glVertex2d(-1,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.34);
    glVertex2d(0.2,-0.34);
    glVertex2d(0.2,-0.36);
    glVertex2d(-1,-0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.31);
    glVertex2d(0.2,-0.31);
    glVertex2d(0.2,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.73,-0.5);
    glVertex2d(-0.73,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.64,-0.5);
    glVertex2d(-0.64,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glTranslatef(0.45,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();
//flyover car-1
    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    glTranslatef(-0.7,0.05,0);
    glScaled(0.8,0.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(148, 184, 184);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
    glLoadIdentity();
//fly over car-2
    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
    glTranslatef(-1.0,0.05,0);
    glScaled(0.8,0.5,0);
    glBegin(GL_POLYGON);
    glColor3ub(0, 179, 0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
    glLoadIdentity();

//metro


    glBegin(GL_QUADS);
    glColor3ub(225,208,182);
    glVertex2d(-1,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.06);
    glVertex2d(-1,-0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,33,45);
    glVertex2d(-1,-0.12);
    glVertex2d(1,-0.12);
    glVertex2d(1,-0.1);
    glVertex2d(-1,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

//road
    glBegin(GL_QUADS);
    glColor3ub(117,125,144);
    glVertex2d(-1,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,-0.7);
    glVertex2d(-1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();

    glTranslatef(0,-0.07,0);
    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();
    glLoadIdentity();

//pink field
    glBegin(GL_QUADS);
    glColor3ub(208,144,145);
    glVertex2d(1,-0.7);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.7,-1);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(234,151,165);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.1,-0.7);
    glVertex2d(0.4,-1);
    glVertex2d(0.7,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(237,166,174);
    glVertex2d(0.1,-0.7);
    glVertex2d(-0.3,-0.7);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(233,153,165);
    glVertex2d(-0.3,-0.7);
    glVertex2d(-0.4,-1);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237,166,174);
    glVertex2d(-0.35,-0.7);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.3,-0.7);
    glEnd();

//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();

//road side left
    glBegin(GL_QUADS);
    glColor3ub(54,42,51);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.35,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(121,99,52);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-1);
    glVertex2d(-0.55,-1);
    glVertex2d(-0.45,-0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230,222,214);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-1);
    glVertex2d(-0.65,-1);
    glVertex2d(-0.55,-0.8);
    glEnd();

//metro rail

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-1,-0.06);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.85,0.02);
    glVertex2d(-1,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.84,0.02);
    glVertex2d(-0.85,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.65,0.02);
    glVertex2d(-0.84,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.64,0.02);
    glVertex2d(-0.65,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8,191,218);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.25,-0.06);
    glVertex2d(-0.25,-0.02);
    glVertex2d(-0.28,0.02);
    glVertex2d(-0.44,0.02);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


//rail window
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.18,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glTranslatef(0.38,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslatef(0.58,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


//truck-1
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,153);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();


//truck tier-1

    GLfloat x1=-0.81f; GLfloat y1=-0.68f; GLfloat radius2 =.02f;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
	glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

    GLfloat radius3=0.01f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//tire-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glPopMatrix();
	glLoadIdentity();

//truck-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.4,0.04,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 204, 102);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();

//truck tier-1
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.4,0.04,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//tire-2
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.4,0.04,0);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//truck-3
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.8,0.04,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 0, 102);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();

//truck tier-1
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
	glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);

    glTranslatef(0.8,0.04,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//tire-2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(0.8,0.04,0);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();


//truck-4
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.2,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(-0.9,-0.68);
    glVertex2d(-0.84,-0.68);
    glVertex2d(-0.84,-0.6);
    glVertex2d(-0.88,-0.6);
    glVertex2d(-0.9,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.86,-0.62);
    glVertex2d(-0.88,-0.62);
    glVertex2d(-0.88,-0.65);
    glVertex2d(-0.86,-0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 51, 255);
    glVertex2d(-0.85,-0.68);
    glVertex2d(-0.78,-0.68);
    glVertex2d(-0.78,-0.58);
    glVertex2d(-0.85,-0.58);
    glEnd();

//truck tier-1
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.2,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();
//tire-2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.2,0,0);
	glTranslatef(-0.062,0,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//car
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 179, 179);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();

//car tire
    glTranslatef(1.62,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 3
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(1.682,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.5,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(102, 153, 153);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.58);
    glVertex2d(0.80,-0.58);
    glVertex2d(0.78,-0.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.81,-0.62);
    glVertex2d(0.84,-0.62);
    glVertex2d(0.84,-0.59);
    glVertex2d(0.81,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
   glVertex2d(0.85,-0.62);
    glVertex2d(0.89,-0.62);
    glVertex2d(0.89,-0.59);
    glVertex2d(0.85,-0.59);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//car tire
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.63,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
    glTranslatef(-1.51,0,0);
    glTranslatef(1.695,0.02,0);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();
//lamppost opposite side
//l-1
    glTranslatef(1.2,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glLoadIdentity();
//l-2
    glTranslatef(0.6,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(0.1,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(-0.5,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glLoadIdentity();
//car-3, r2l
    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
    glTranslatef(0,0.1,0);
	glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.64);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.79,-0.62);
    glVertex2d(0.82,-0.62);
    glVertex2d(0.82,-0.59);
    glVertex2d(0.79,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.83,-0.62);
    glVertex2d(0.87,-0.62);
    glVertex2d(0.87,-0.59);
    glVertex2d(0.83,-0.59);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
//car tier
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glTranslatef(-0.01,0.11,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
	glLoadIdentity();

//car-4
    glTranslatef(-0.6,0.1,0);
    glTranslatef(position6,0.0f, 0.0f);
	glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.64);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.79,-0.62);
    glVertex2d(0.82,-0.62);
    glVertex2d(0.82,-0.59);
    glVertex2d(0.79,-0.59);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.83,-0.62);
    glVertex2d(0.87,-0.62);
    glVertex2d(0.87,-0.59);
    glVertex2d(0.83,-0.59);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
//car tier
    glTranslatef(-0.61,0.1,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//car-tire 2
    glTranslatef(-0.61,0.1,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//truck 1 r2l
    glTranslatef(-1.1,0.09,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 191,0);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.9,-0.66);
    glVertex2d(0.9,-0.62);
    glVertex2d(0.88,-0.58);
    glVertex2d(0.78,-0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(0.86,-0.62);
    glVertex2d(0.88,-0.62);
    glVertex2d(0.88,-0.59);
    glVertex2d(0.86,-0.59);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102, 255, 102);
    glVertex2d(0.85,-0.66);
    glVertex2d(0.78,-0.66);
    glVertex2d(0.78,-0.56);
    glVertex2d(0.85,-0.56);
    glEnd();glPopMatrix();
    glLoadIdentity();

//truck tire
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.63,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//tire 2
    glTranslatef(-1.11,0.09,0);
    glTranslatef(1.695,0.02,0);
    glTranslatef(position6,0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,255);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius2 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x1, y1);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius3 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();glPopMatrix();
	glLoadIdentity();

//lamppost
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
//l-2
    glTranslatef(0.15,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(-0.3,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(0.8,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//    glutTimerFunc(3000,demo_day_rain,0);
    glFlush();
}

//void demo_day(int val){glutDisplayFunc(day);}
void Morning_rain()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0, 77, 153);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 89, 179);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 115, 230);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 128, 255);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(26, 140, 255);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 153, 255);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77, 166, 255);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 179, 255);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 191, 255);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 204, 255);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179, 217, 255);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 230, 255);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 242, 255);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 194, 255);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 204, 255);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();

    //black part,b-1
    glBegin(GL_QUADS);
    glColor3ub(71,87,105);
    glVertex2d(0.8,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,1);
    glVertex2d(0.8,1);
    glEnd();
//shadow
    glBegin(GL_TRIANGLES);
    glColor3ub(52,62,73);
    glVertex2d(0.8,1);
    glVertex2d(1,0.6);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52,62,73);
    glVertex2d(0.8,0.2);
    glVertex2d(1,-0.4);
    glVertex2d(1,0.5);
    glVertex2d(0.8,0.4);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,1);
    glVertex2d(0.8,0.95);
    glVertex2d(1,0.95);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.8);
    glVertex2d(0.8,0.7);
    glVertex2d(1,0.7);
    glVertex2d(1,0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.5);
    glVertex2d(1,0.5);
    glVertex2d(1,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.4);
    glVertex2d(0.8,0.3);
    glVertex2d(1,0.3);
    glVertex2d(1,0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.1);
    glVertex2d(1,0.1);
    glVertex2d(1,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.2);
    glVertex2d(0.8,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.4);
    glVertex2d(0.8,-0.3);
    glVertex2d(1,-0.3);
    glVertex2d(1,-0.4);
    glEnd();
//light part
    glBegin(GL_QUADS);
    glColor3ub(159,177,191);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.8,-0.5);
    glVertex2d(0.8,1);
    glVertex2d(0.6,1);
    glEnd();
//floor border
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.8);
    glVertex2d(0.8,0.9);
    glVertex2d(0.8,0.93);
    glVertex2d(0.6,0.83);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.5);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.63);
    glVertex2d(0.6,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.2);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.23);
    glVertex2d(0.6,0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.8,-0.1);
    glVertex2d(0.8,-0.13);
    glVertex2d(0.6,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.3);
    glVertex2d(0.8,-0.3);
    glVertex2d(0.8,-0.33);
    glVertex2d(0.6,-0.33);
    glEnd();

//b2
    glBegin(GL_QUADS);
    glColor3ub(215,169,111);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.2,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.2);
    glVertex2d(0.6,-0.2);
    glVertex2d(0.6,-0.25);
    glVertex2d(0.2,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.4);
    glVertex2d(0.6,-0.4);
    glVertex2d(0.6,-0.45);
    glVertex2d(0.2,-0.45);
    glEnd();

//b-3
    glBegin(GL_QUADS);
    glColor3ub(174,186,226);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.2,0.7);
    glVertex2d(0.1,0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.2,-0.3);
    glVertex2d(0.2,-0.35);
    glVertex2d(0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,-0.15);
    glVertex2d(0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.12);
    glVertex2d(0.2,0.1);
    glVertex2d(0.2,0.15);
    glVertex2d(0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.32);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.35);
    glVertex2d(0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.52);
    glVertex2d(0.2,0.5);
    glVertex2d(0.2,0.55);
    glVertex2d(0.1,0.57);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(160,170,203);
    glVertex2d(0,-0.5);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.1,0.75);
    glVertex2d(0,0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.48);
    glVertex2d(0.1,0.52);
    glVertex2d(0.1,0.57);
    glVertex2d(0,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.30);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.1,-0.33);
    glVertex2d(0,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.2);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.1,-0.13);
    glVertex2d(0,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.10);
    glVertex2d(0.1,0.12);
    glVertex2d(0.1,0.17);
    glVertex2d(0,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.30);
    glVertex2d(0.1,0.32);
    glVertex2d(0.1,0.37);
    glVertex2d(0,0.35);
    glEnd();




//b-4

    glBegin(GL_QUADS);
    glColor3ub(182,205,228);
    glVertex2d(0,-0.5);
    glVertex2d(0.06,-0.5);
    glVertex2d(0.06,0.5);
    glVertex2d(0,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.01,-0.5);
    glVertex2d(0.02,-0.5);
    glVertex2d(0.02,0.45);
    glVertex2d(0.01,0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.03,-0.5);
    glVertex2d(0.04,-0.5);
    glVertex2d(0.04,0.45);
    glVertex2d(0.03,0.45);
    glEnd();

//b-5
     glBegin(GL_QUADS);
     glColor3ub(82,158,211);
     glVertex2d(-0.1,-0.5);
     glVertex2d(0,-0.5);
     glVertex2d(0,0.65);
     glVertex2d(-0.1,0.68);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.28);
    glVertex2d(0,-0.3);
    glVertex2d(0,-0.35);
    glVertex2d(-0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.08);
    glVertex2d(0,-0.1);
    glVertex2d(0,-0.15);
    glVertex2d(-0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.12);
    glVertex2d(0,0.1);
    glVertex2d(0,0.15);
    glVertex2d(-0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.32);
    glVertex2d(0,0.3);
    glVertex2d(0,0.35);
    glVertex2d(-0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.52);
    glVertex2d(0,0.5);
    glVertex2d(0,0.55);
    glVertex2d(-0.1,0.57);
    glEnd();
//side
     glBegin(GL_QUADS);
     glColor3ub(71,137,180);
     glVertex2d(-0.2,-0.5);
     glVertex2d(-0.1,-0.5);
     glVertex2d(-0.1,0.68);
     glVertex2d(-0.2,0.65);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.30);
    glVertex2d(-0.1,0.32);
    glVertex2d(-0.1,0.37);
    glVertex2d(-0.2,0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.48);
    glVertex2d(-0.1,0.52);
    glVertex2d(-0.1,0.57);
    glVertex2d(-0.2,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.30);
    glVertex2d(-0.1,-0.28);
    glVertex2d(-0.1,-0.33);
    glVertex2d(-0.2,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.10);
    glVertex2d(-0.1,-0.08);
    glVertex2d(-0.1,-0.13);
    glVertex2d(-0.2,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.10);
    glVertex2d(-0.1,0.12);
    glVertex2d(-0.1,0.17);
    glVertex2d(-0.2,0.15);
    glEnd();

//b-6
     glBegin(GL_QUADS);
     glColor3ub(113,70,99);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.18,-0.5);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.28,0.06);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.28);
    glVertex2d(-0.18,-0.30);
    glVertex2d(-0.18,-0.35);
    glVertex2d(-0.28,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.08);
    glVertex2d(-0.18,-0.1);
    glVertex2d(-0.18,-0.15);
    glVertex2d(-0.28,-0.13);
    glEnd();

//b-7
     glBegin(GL_QUADS);
     glColor3ub(113,143,181);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.33,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.28,-0.28);
     glVertex2d(-0.28,-0.33);
     glVertex2d(-0.33,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.28,-0.08);
     glVertex2d(-0.28,-0.13);
     glVertex2d(-0.33,-0.13);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(96,134,166);
     glVertex2d(-0.4,-0.5);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.33,0.08);
     glVertex2d(-0.4,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.29);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.33,-0.33);
     glVertex2d(-0.4,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.09);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.33,-0.13);
     glVertex2d(-0.4,-0.14);
     glEnd();

//b-8-white

     glBegin(GL_QUADS);
     glColor3ub(198,208,215);
     glVertex2d(-0.28,0.06);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.18,0.28);
     glVertex2d(-0.28,0.3);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.18,0.1);
    glVertex2d(-0.18,0.15);
    glVertex2d(-0.28,0.17);
    glEnd();

//b-9
     glBegin(GL_QUADS);
     glColor3ub(192,194,203);
     glVertex2d(-0.38,0.08);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.28,0.3);
     glVertex2d(-0.38,0.28);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.38,0.11);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.28,0.17);
    glVertex2d(-0.38,0.16);
    glEnd();
//b-10
     glBegin(GL_QUADS);
     glColor3ub(163,175,177);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.6,-0.5);
     glVertex2d(-0.6,0.5);
     glVertex2d(-0.75,0.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.35);
     glVertex2d(-0.6,-0.35);
     glVertex2d(-0.6,-0.4);
     glVertex2d(-0.75,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();

     glTranslatef(0,0.2,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.4,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.6,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

//b-11
     glBegin(GL_QUADS);
     glColor3ub(180,250,201);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.75,-0.15);
     glVertex2d(-0.9,-0.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.75,-0.4);
     glVertex2d(-0.75,-0.45);
     glVertex2d(-0.9,-0.43);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.75,-0.25);
     glVertex2d(-0.9,-0.23);
     glEnd();

//b-12
     glBegin(GL_QUADS);
     glColor3ub(172,219,201);
     glVertex2d(-1,-0.5);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.9,-0.1);
     glVertex2d(-1,-0.15);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.39);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.9,-0.43);
     glVertex2d(-1,-0.44);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.2);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.9,-0.23);
     glVertex2d(-1,-0.25);
     glEnd();
//flyover

    glBegin(GL_QUADS);
    glColor3ub(0,72,108);
    glVertex2d(-1,-0.28);
    glVertex2d(0.2,-0.28);
    glVertex2d(0.2,-0.38);
    glVertex2d(-1,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.34);
    glVertex2d(0.2,-0.34);
    glVertex2d(0.2,-0.36);
    glVertex2d(-1,-0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.31);
    glVertex2d(0.2,-0.31);
    glVertex2d(0.2,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.73,-0.5);
    glVertex2d(-0.73,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.64,-0.5);
    glVertex2d(-0.64,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glTranslatef(0.45,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();
    //metro


    glBegin(GL_QUADS);
    glColor3ub(225,208,182);
    glVertex2d(-1,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.06);
    glVertex2d(-1,-0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,33,45);
    glVertex2d(-1,-0.12);
    glVertex2d(1,-0.12);
    glVertex2d(1,-0.1);
    glVertex2d(-1,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();
//metro rail

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-1,-0.06);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.85,0.02);
    glVertex2d(-1,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.84,0.02);
    glVertex2d(-0.85,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.65,0.02);
    glVertex2d(-0.84,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.64,0.02);
    glVertex2d(-0.65,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8,191,218);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.25,-0.06);
    glVertex2d(-0.25,-0.02);
    glVertex2d(-0.28,0.02);
    glVertex2d(-0.44,0.02);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


//rail window
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.18,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glTranslatef(0.38,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslatef(0.58,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//road
    glBegin(GL_QUADS);
    glColor3ub(117,125,144);
    glVertex2d(-1,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,-0.7);
    glVertex2d(-1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();

    glTranslatef(0,-0.07,0);
    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();
    glLoadIdentity();

//pink field
    glBegin(GL_QUADS);
    glColor3ub(208,144,145);
    glVertex2d(1,-0.7);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.7,-1);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(234,151,165);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.1,-0.7);
    glVertex2d(0.4,-1);
    glVertex2d(0.7,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(237,166,174);
    glVertex2d(0.1,-0.7);
    glVertex2d(-0.3,-0.7);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(233,153,165);
    glVertex2d(-0.3,-0.7);
    glVertex2d(-0.4,-1);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237,166,174);
    glVertex2d(-0.35,-0.7);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.3,-0.7);
    glEnd();

//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();

//road side left
    glBegin(GL_QUADS);
    glColor3ub(54,42,51);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.35,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(121,99,52);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-1);
    glVertex2d(-0.55,-1);
    glVertex2d(-0.45,-0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230,222,214);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-1);
    glVertex2d(-0.65,-1);
    glVertex2d(-0.55,-0.8);
    glEnd();
//lamppost
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glTranslatef(0.15,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();

//l-3
    glTranslatef(-0.3,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(0.8,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();

    //lamppost opposite side
//l-1
    glTranslatef(1.2,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-2
    glTranslatef(0.6,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(0.1,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(-0.5,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
    //rain effect
    GLfloat x3= -1;
    GLfloat y3 = 1;
    glPushMatrix();
    glTranslatef(position4,position4,0.0f);
    glBegin(GL_LINES);
    for(int i=1;i<=10;i=i+2){

    glVertex2f(x3,y3);
    glVertex2f(x3-.04,y3-.04);

    x3 += .08;
    }
    glEnd();glPopMatrix();


    for(int j=0;j<=40;j++)
    {
    x3 = -1.05;
    y3= y3-.05;
    glPushMatrix();
     glTranslatef(position4,position4,0.0f);
    glBegin(GL_LINES);

    for(int i=0;i<=100;i++){

    glVertex2f(x3,y3);
    glVertex2f(x3-.04,y3-.04);

    x3 += .08;
    }
    glEnd();
    glPopMatrix();
    }
//    glutTimerFunc(3000,demo_day,0);
    glFlush();
}
//void demo_morning_rain(int val){glutDisplayFunc(Morning_rain);}
void Morning1()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0, 77, 153);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 89, 179);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 102, 204);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 115, 230);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 128, 255);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(26, 140, 255);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 153, 255);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(77, 166, 255);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 179, 255);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 191, 255);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 204, 255);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(179, 217, 255);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 230, 255);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 242, 255);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 194, 255);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 204, 255);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();

    //black part,b-1
    glBegin(GL_QUADS);
    glColor3ub(71,87,105);
    glVertex2d(0.8,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,1);
    glVertex2d(0.8,1);
    glEnd();
//shadow
    glBegin(GL_TRIANGLES);
    glColor3ub(52,62,73);
    glVertex2d(0.8,1);
    glVertex2d(1,0.6);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52,62,73);
    glVertex2d(0.8,0.2);
    glVertex2d(1,-0.4);
    glVertex2d(1,0.5);
    glVertex2d(0.8,0.4);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,1);
    glVertex2d(0.8,0.95);
    glVertex2d(1,0.95);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.8);
    glVertex2d(0.8,0.7);
    glVertex2d(1,0.7);
    glVertex2d(1,0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.5);
    glVertex2d(1,0.5);
    glVertex2d(1,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.4);
    glVertex2d(0.8,0.3);
    glVertex2d(1,0.3);
    glVertex2d(1,0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.1);
    glVertex2d(1,0.1);
    glVertex2d(1,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.2);
    glVertex2d(0.8,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.4);
    glVertex2d(0.8,-0.3);
    glVertex2d(1,-0.3);
    glVertex2d(1,-0.4);
    glEnd();
//light part
    glBegin(GL_QUADS);
    glColor3ub(159,177,191);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.8,-0.5);
    glVertex2d(0.8,1);
    glVertex2d(0.6,1);
    glEnd();
//floor border
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.8);
    glVertex2d(0.8,0.9);
    glVertex2d(0.8,0.93);
    glVertex2d(0.6,0.83);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.5);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.63);
    glVertex2d(0.6,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.2);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.23);
    glVertex2d(0.6,0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.8,-0.1);
    glVertex2d(0.8,-0.13);
    glVertex2d(0.6,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.3);
    glVertex2d(0.8,-0.3);
    glVertex2d(0.8,-0.33);
    glVertex2d(0.6,-0.33);
    glEnd();

//b2
    glBegin(GL_QUADS);
    glColor3ub(215,169,111);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.2,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.2);
    glVertex2d(0.6,-0.2);
    glVertex2d(0.6,-0.25);
    glVertex2d(0.2,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.4);
    glVertex2d(0.6,-0.4);
    glVertex2d(0.6,-0.45);
    glVertex2d(0.2,-0.45);
    glEnd();

//b-3
    glBegin(GL_QUADS);
    glColor3ub(174,186,226);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.2,0.7);
    glVertex2d(0.1,0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.2,-0.3);
    glVertex2d(0.2,-0.35);
    glVertex2d(0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,-0.15);
    glVertex2d(0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.12);
    glVertex2d(0.2,0.1);
    glVertex2d(0.2,0.15);
    glVertex2d(0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.32);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.35);
    glVertex2d(0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.52);
    glVertex2d(0.2,0.5);
    glVertex2d(0.2,0.55);
    glVertex2d(0.1,0.57);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(160,170,203);
    glVertex2d(0,-0.5);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.1,0.75);
    glVertex2d(0,0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.48);
    glVertex2d(0.1,0.52);
    glVertex2d(0.1,0.57);
    glVertex2d(0,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.30);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.1,-0.33);
    glVertex2d(0,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.2);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.1,-0.13);
    glVertex2d(0,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.10);
    glVertex2d(0.1,0.12);
    glVertex2d(0.1,0.17);
    glVertex2d(0,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.30);
    glVertex2d(0.1,0.32);
    glVertex2d(0.1,0.37);
    glVertex2d(0,0.35);
    glEnd();




//b-4

    glBegin(GL_QUADS);
    glColor3ub(182,205,228);
    glVertex2d(0,-0.5);
    glVertex2d(0.06,-0.5);
    glVertex2d(0.06,0.5);
    glVertex2d(0,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.01,-0.5);
    glVertex2d(0.02,-0.5);
    glVertex2d(0.02,0.45);
    glVertex2d(0.01,0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.03,-0.5);
    glVertex2d(0.04,-0.5);
    glVertex2d(0.04,0.45);
    glVertex2d(0.03,0.45);
    glEnd();

//b-5
     glBegin(GL_QUADS);
     glColor3ub(82,158,211);
     glVertex2d(-0.1,-0.5);
     glVertex2d(0,-0.5);
     glVertex2d(0,0.65);
     glVertex2d(-0.1,0.68);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.28);
    glVertex2d(0,-0.3);
    glVertex2d(0,-0.35);
    glVertex2d(-0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.08);
    glVertex2d(0,-0.1);
    glVertex2d(0,-0.15);
    glVertex2d(-0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.12);
    glVertex2d(0,0.1);
    glVertex2d(0,0.15);
    glVertex2d(-0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.32);
    glVertex2d(0,0.3);
    glVertex2d(0,0.35);
    glVertex2d(-0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.52);
    glVertex2d(0,0.5);
    glVertex2d(0,0.55);
    glVertex2d(-0.1,0.57);
    glEnd();
//side
     glBegin(GL_QUADS);
     glColor3ub(71,137,180);
     glVertex2d(-0.2,-0.5);
     glVertex2d(-0.1,-0.5);
     glVertex2d(-0.1,0.68);
     glVertex2d(-0.2,0.65);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.30);
    glVertex2d(-0.1,0.32);
    glVertex2d(-0.1,0.37);
    glVertex2d(-0.2,0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.48);
    glVertex2d(-0.1,0.52);
    glVertex2d(-0.1,0.57);
    glVertex2d(-0.2,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.30);
    glVertex2d(-0.1,-0.28);
    glVertex2d(-0.1,-0.33);
    glVertex2d(-0.2,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.10);
    glVertex2d(-0.1,-0.08);
    glVertex2d(-0.1,-0.13);
    glVertex2d(-0.2,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.10);
    glVertex2d(-0.1,0.12);
    glVertex2d(-0.1,0.17);
    glVertex2d(-0.2,0.15);
    glEnd();

//b-6
     glBegin(GL_QUADS);
     glColor3ub(113,70,99);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.18,-0.5);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.28,0.06);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.28);
    glVertex2d(-0.18,-0.30);
    glVertex2d(-0.18,-0.35);
    glVertex2d(-0.28,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.08);
    glVertex2d(-0.18,-0.1);
    glVertex2d(-0.18,-0.15);
    glVertex2d(-0.28,-0.13);
    glEnd();

//b-7
     glBegin(GL_QUADS);
     glColor3ub(113,143,181);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.33,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.28,-0.28);
     glVertex2d(-0.28,-0.33);
     glVertex2d(-0.33,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.28,-0.08);
     glVertex2d(-0.28,-0.13);
     glVertex2d(-0.33,-0.13);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(96,134,166);
     glVertex2d(-0.4,-0.5);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.33,0.08);
     glVertex2d(-0.4,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.29);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.33,-0.33);
     glVertex2d(-0.4,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.09);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.33,-0.13);
     glVertex2d(-0.4,-0.14);
     glEnd();

//b-8-white

     glBegin(GL_QUADS);
     glColor3ub(198,208,215);
     glVertex2d(-0.28,0.06);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.18,0.28);
     glVertex2d(-0.28,0.3);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.18,0.1);
    glVertex2d(-0.18,0.15);
    glVertex2d(-0.28,0.17);
    glEnd();

//b-9
     glBegin(GL_QUADS);
     glColor3ub(192,194,203);
     glVertex2d(-0.38,0.08);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.28,0.3);
     glVertex2d(-0.38,0.28);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.38,0.11);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.28,0.17);
    glVertex2d(-0.38,0.16);
    glEnd();
//b-10
     glBegin(GL_QUADS);
     glColor3ub(163,175,177);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.6,-0.5);
     glVertex2d(-0.6,0.5);
     glVertex2d(-0.75,0.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.35);
     glVertex2d(-0.6,-0.35);
     glVertex2d(-0.6,-0.4);
     glVertex2d(-0.75,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();

     glTranslatef(0,0.2,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.4,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.6,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

//b-11
     glBegin(GL_QUADS);
     glColor3ub(180,250,201);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.75,-0.15);
     glVertex2d(-0.9,-0.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.75,-0.4);
     glVertex2d(-0.75,-0.45);
     glVertex2d(-0.9,-0.43);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.75,-0.25);
     glVertex2d(-0.9,-0.23);
     glEnd();

//b-12
     glBegin(GL_QUADS);
     glColor3ub(172,219,201);
     glVertex2d(-1,-0.5);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.9,-0.1);
     glVertex2d(-1,-0.15);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.39);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.9,-0.43);
     glVertex2d(-1,-0.44);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.2);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.9,-0.23);
     glVertex2d(-1,-0.25);
     glEnd();
//flyover

    glBegin(GL_QUADS);
    glColor3ub(0,72,108);
    glVertex2d(-1,-0.28);
    glVertex2d(0.2,-0.28);
    glVertex2d(0.2,-0.38);
    glVertex2d(-1,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.34);
    glVertex2d(0.2,-0.34);
    glVertex2d(0.2,-0.36);
    glVertex2d(-1,-0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.31);
    glVertex2d(0.2,-0.31);
    glVertex2d(0.2,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.73,-0.5);
    glVertex2d(-0.73,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.64,-0.5);
    glVertex2d(-0.64,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glTranslatef(0.45,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

//metro
    glBegin(GL_QUADS);
    glColor3ub(225,208,182);
    glVertex2d(-1,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.06);
    glVertex2d(-1,-0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,33,45);
    glVertex2d(-1,-0.12);
    glVertex2d(1,-0.12);
    glVertex2d(1,-0.1);
    glVertex2d(-1,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();
//metro rail

    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-1,-0.06);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.85,0.02);
    glVertex2d(-1,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.85,-0.06);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.84,0.02);
    glVertex2d(-0.85,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.84,-0.06);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.65,0.02);
    glVertex2d(-0.84,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.65,-0.06);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.64,0.02);
    glVertex2d(-0.65,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,191,218);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(12,206,180);
    glVertex2d(-0.64,-0.06);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.45,0.02);
    glVertex2d(-0.64,0.02);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,61,60);
    glVertex2d(-0.45,-0.06);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.44,0.02);
    glVertex2d(-0.45,0.02);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(8,191,218);
    glVertex2d(-0.44,-0.06);
    glVertex2d(-0.25,-0.06);
    glVertex2d(-0.25,-0.02);
    glVertex2d(-0.28,0.02);
    glVertex2d(-0.44,0.02);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


//rail window
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.18,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();


    glTranslatef(0.38,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glTranslatef(0.58,0,0);
    glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();

    glTranslatef(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.98,-0.04);
    glVertex2d(-0.94,-0.04);
    glVertex2d(-0.94,-0.01);
    glVertex2d(-0.98,-0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-0.92,-0.04);
    glVertex2d(-0.88,-0.04);
    glVertex2d(-0.88,-0.01);
    glVertex2d(-0.92,-0.01);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

//road
    glBegin(GL_QUADS);
    glColor3ub(117,125,144);
    glVertex2d(-1,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,-0.7);
    glVertex2d(-1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();

    glTranslatef(0,-0.07,0);
    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();
    glLoadIdentity();

//pink field
    glBegin(GL_QUADS);
    glColor3ub(208,144,145);
    glVertex2d(1,-0.7);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.7,-1);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(234,151,165);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.1,-0.7);
    glVertex2d(0.4,-1);
    glVertex2d(0.7,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(237,166,174);
    glVertex2d(0.1,-0.7);
    glVertex2d(-0.3,-0.7);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(233,153,165);
    glVertex2d(-0.3,-0.7);
    glVertex2d(-0.4,-1);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237,166,174);
    glVertex2d(-0.35,-0.7);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.3,-0.7);
    glEnd();

//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();

//road side left
    glBegin(GL_QUADS);
    glColor3ub(54,42,51);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.35,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(121,99,52);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-1);
    glVertex2d(-0.55,-1);
    glVertex2d(-0.45,-0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230,222,214);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-1);
    glVertex2d(-0.65,-1);
    glVertex2d(-0.55,-0.8);
    glEnd();
//lamppost
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glTranslatef(0.15,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();

//l-3
    glTranslatef(-0.3,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(0.8,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();

    //lamppost opposite side
//l-1
    glTranslatef(1.2,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-2
    glTranslatef(0.6,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(0.1,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(-0.5,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//    glutTimerFunc(3000,demo_morning_rain,0);
    glFlush();
}

//void demo_morning1(int val){glutDisplayFunc(Morning1);}
void Morning0()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,1);
    glVertex2d(-1,0.90);
    glVertex2d(1,0.90);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(8,8,8);
    glVertex2d(-1,0.90);
    glVertex2d(-1,0.80);
    glVertex2d(1,0.80);
    glVertex2d(1,0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(16,16,16);
    glVertex2d(-1,0.80);
    glVertex2d(-1,0.70);
    glVertex2d(1,0.70);
    glVertex2d(1,0.80);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(24,24,24);
    glVertex2d(-1,0.70);
    glVertex2d(-1,0.60);
    glVertex2d(1,0.60);
    glVertex2d(1,0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(32,32,32);
    glVertex2d(-1,0.60);
    glVertex2d(-1,0.50);
    glVertex2d(1,0.50);
    glVertex2d(1,0.60);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(40,40,40);
    glVertex2d(-1,0.50);
    glVertex2d(-1,0.40);
    glVertex2d(1,0.40);
    glVertex2d(1,0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(48,48,48);
    glVertex2d(-1,0.40);
    glVertex2d(-1,0.30);
    glVertex2d(1,0.30);
    glVertex2d(1,0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,56,56);
    glVertex2d(-1,0.30);
    glVertex2d(-1,0.20);
    glVertex2d(1,0.20);
    glVertex2d(1,0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64,64,64);
    glVertex2d(-1,0.20);
    glVertex2d(-1,0.10);
    glVertex2d(1,0.10);
    glVertex2d(1,0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,72,72);
    glVertex2d(-1,0.10);
    glVertex2d(-1,0.0);
    glVertex2d(1,0.0);
    glVertex2d(1,0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(80,80,80);
    glVertex2d(-1,0.0);
    glVertex2d(-1,-0.10);
    glVertex2d(1,-0.10);
    glVertex2d(1,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(88,88,88);
    glVertex2d(-1,-0.10);
    glVertex2d(-1,-0.20);
    glVertex2d(1,-0.20);
    glVertex2d(1,-0.10);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(96,96,96);
    glVertex2d(-1,-0.20);
    glVertex2d(-1,-0.30);
    glVertex2d(1,-0.30);
    glVertex2d(1,-0.20);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(104,104,104);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.40);
    glVertex2d(1,-0.40);
    glVertex2d(1,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2d(-1,-0.40);
    glVertex2d(-1,-0.50);
    glVertex2d(1,-0.50);
    glVertex2d(1,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(112,112,112);
    glVertex2d(-1,-0.50);
    glVertex2d(-1,-0.60);
    glVertex2d(1,-0.60);
    glVertex2d(1,-0.50);
    glEnd();
//moon
    int i;

	GLfloat x=-.8f; GLfloat y=.85f; GLfloat radius =.1f;
	int triangleAmount = 27;


	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 236, 179);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glTranslatef(0.05,0,0);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    //black part,b-1
    glBegin(GL_QUADS);
    glColor3ub(71,87,105);
    glVertex2d(0.8,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,1);
    glVertex2d(0.8,1);
    glEnd();
//shadow
    glBegin(GL_TRIANGLES);
    glColor3ub(52,62,73);
    glVertex2d(0.8,1);
    glVertex2d(1,0.6);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(52,62,73);
    glVertex2d(0.8,0.2);
    glVertex2d(1,-0.4);
    glVertex2d(1,0.5);
    glVertex2d(0.8,0.4);
    glEnd();

//windows
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,1);
    glVertex2d(0.8,0.95);
    glVertex2d(1,0.95);
    glVertex2d(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.8);
    glVertex2d(0.8,0.7);
    glVertex2d(1,0.7);
    glVertex2d(1,0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.5);
    glVertex2d(1,0.5);
    glVertex2d(1,0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.4);
    glVertex2d(0.8,0.3);
    glVertex2d(1,0.3);
    glVertex2d(1,0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.1);
    glVertex2d(1,0.1);
    glVertex2d(1,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.2);
    glVertex2d(0.8,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.8,-0.4);
    glVertex2d(0.8,-0.3);
    glVertex2d(1,-0.3);
    glVertex2d(1,-0.4);
    glEnd();
//light part
    glBegin(GL_QUADS);
    glColor3ub(159,177,191);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.8,-0.5);
    glVertex2d(0.8,1);
    glVertex2d(0.6,1);
    glEnd();
//floor border
    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.8);
    glVertex2d(0.8,0.9);
    glVertex2d(0.8,0.93);
    glVertex2d(0.6,0.83);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.5);
    glVertex2d(0.8,0.6);
    glVertex2d(0.8,0.63);
    glVertex2d(0.6,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,0.2);
    glVertex2d(0.8,0.2);
    glVertex2d(0.8,0.23);
    glVertex2d(0.6,0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.8,-0.1);
    glVertex2d(0.8,-0.13);
    glVertex2d(0.6,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(56,73,89);
    glVertex2d(0.6,-0.3);
    glVertex2d(0.8,-0.3);
    glVertex2d(0.8,-0.33);
    glVertex2d(0.6,-0.33);
    glEnd();

//b2
    glBegin(GL_QUADS);
    glColor3ub(215,169,111);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.6,-0.5);
    glVertex2d(0.6,-0.1);
    glVertex2d(0.2,-0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.2);
    glVertex2d(0.6,-0.2);
    glVertex2d(0.6,-0.25);
    glVertex2d(0.2,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194,91,17);
    glVertex2d(0.2,-0.4);
    glVertex2d(0.6,-0.4);
    glVertex2d(0.6,-0.45);
    glVertex2d(0.2,-0.45);
    glEnd();

//b-3
    glBegin(GL_QUADS);
    glColor3ub(174,186,226);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.2,-0.5);
    glVertex2d(0.2,0.7);
    glVertex2d(0.1,0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.2,-0.3);
    glVertex2d(0.2,-0.35);
    glVertex2d(0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.2,-0.1);
    glVertex2d(0.2,-0.15);
    glVertex2d(0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.12);
    glVertex2d(0.2,0.1);
    glVertex2d(0.2,0.15);
    glVertex2d(0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.32);
    glVertex2d(0.2,0.3);
    glVertex2d(0.2,0.35);
    glVertex2d(0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0.1,0.52);
    glVertex2d(0.2,0.5);
    glVertex2d(0.2,0.55);
    glVertex2d(0.1,0.57);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(160,170,203);
    glVertex2d(0,-0.5);
    glVertex2d(0.1,-0.5);
    glVertex2d(0.1,0.75);
    glVertex2d(0,0.65);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.48);
    glVertex2d(0.1,0.52);
    glVertex2d(0.1,0.57);
    glVertex2d(0,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.30);
    glVertex2d(0.1,-0.28);
    glVertex2d(0.1,-0.33);
    glVertex2d(0,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,-0.2);
    glVertex2d(0.1,-0.08);
    glVertex2d(0.1,-0.13);
    glVertex2d(0,-0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.10);
    glVertex2d(0.1,0.12);
    glVertex2d(0.1,0.17);
    glVertex2d(0,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(154,152,220);
    glVertex2d(0,0.30);
    glVertex2d(0.1,0.32);
    glVertex2d(0.1,0.37);
    glVertex2d(0,0.35);
    glEnd();




//b-4

    glBegin(GL_QUADS);
    glColor3ub(182,205,228);
    glVertex2d(0,-0.5);
    glVertex2d(0.06,-0.5);
    glVertex2d(0.06,0.5);
    glVertex2d(0,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.01,-0.5);
    glVertex2d(0.02,-0.5);
    glVertex2d(0.02,0.45);
    glVertex2d(0.01,0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168,228,255);
    glVertex2d(0.03,-0.5);
    glVertex2d(0.04,-0.5);
    glVertex2d(0.04,0.45);
    glVertex2d(0.03,0.45);
    glEnd();

//b-5
     glBegin(GL_QUADS);
     glColor3ub(82,158,211);
     glVertex2d(-0.1,-0.5);
     glVertex2d(0,-0.5);
     glVertex2d(0,0.65);
     glVertex2d(-0.1,0.68);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.28);
    glVertex2d(0,-0.3);
    glVertex2d(0,-0.35);
    glVertex2d(-0.1,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,-0.08);
    glVertex2d(0,-0.1);
    glVertex2d(0,-0.15);
    glVertex2d(-0.1,-0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.12);
    glVertex2d(0,0.1);
    glVertex2d(0,0.15);
    glVertex2d(-0.1,0.17);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.32);
    glVertex2d(0,0.3);
    glVertex2d(0,0.35);
    glVertex2d(-0.1,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.1,0.52);
    glVertex2d(0,0.5);
    glVertex2d(0,0.55);
    glVertex2d(-0.1,0.57);
    glEnd();
//side
     glBegin(GL_QUADS);
     glColor3ub(71,137,180);
     glVertex2d(-0.2,-0.5);
     glVertex2d(-0.1,-0.5);
     glVertex2d(-0.1,0.68);
     glVertex2d(-0.2,0.65);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.30);
    glVertex2d(-0.1,0.32);
    glVertex2d(-0.1,0.37);
    glVertex2d(-0.2,0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.48);
    glVertex2d(-0.1,0.52);
    glVertex2d(-0.1,0.57);
    glVertex2d(-0.2,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.30);
    glVertex2d(-0.1,-0.28);
    glVertex2d(-0.1,-0.33);
    glVertex2d(-0.2,-0.35);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,-0.10);
    glVertex2d(-0.1,-0.08);
    glVertex2d(-0.1,-0.13);
    glVertex2d(-0.2,-0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72,87,104);
    glVertex2d(-0.2,0.10);
    glVertex2d(-0.1,0.12);
    glVertex2d(-0.1,0.17);
    glVertex2d(-0.2,0.15);
    glEnd();

//b-6
     glBegin(GL_QUADS);
     glColor3ub(113,70,99);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.18,-0.5);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.28,0.06);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.28);
    glVertex2d(-0.18,-0.30);
    glVertex2d(-0.18,-0.35);
    glVertex2d(-0.28,-0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(233,105,165);
    glVertex2d(-0.28,-0.08);
    glVertex2d(-0.18,-0.1);
    glVertex2d(-0.18,-0.15);
    glVertex2d(-0.28,-0.13);
    glEnd();

//b-7
     glBegin(GL_QUADS);
     glColor3ub(113,143,181);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.28,-0.5);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.33,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.28,-0.28);
     glVertex2d(-0.28,-0.33);
     glVertex2d(-0.33,-0.33);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.28,-0.08);
     glVertex2d(-0.28,-0.13);
     glVertex2d(-0.33,-0.13);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(96,134,166);
     glVertex2d(-0.4,-0.5);
     glVertex2d(-0.33,-0.5);
     glVertex2d(-0.33,0.08);
     glVertex2d(-0.4,0.08);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.29);
     glVertex2d(-0.33,-0.28);
     glVertex2d(-0.33,-0.33);
     glVertex2d(-0.4,-0.34);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(60,70,85);
     glVertex2d(-0.4,-0.09);
     glVertex2d(-0.33,-0.08);
     glVertex2d(-0.33,-0.13);
     glVertex2d(-0.4,-0.14);
     glEnd();

//b-8-white

     glBegin(GL_QUADS);
     glColor3ub(198,208,215);
     glVertex2d(-0.28,0.06);
     glVertex2d(-0.18,0.04);
     glVertex2d(-0.18,0.28);
     glVertex2d(-0.28,0.3);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.18,0.1);
    glVertex2d(-0.18,0.15);
    glVertex2d(-0.28,0.17);
    glEnd();

//b-9
     glBegin(GL_QUADS);
     glColor3ub(192,194,203);
     glVertex2d(-0.38,0.08);
     glVertex2d(-0.28,0.07);
     glVertex2d(-0.28,0.3);
     glVertex2d(-0.38,0.28);
     glEnd();

    glBegin(GL_QUADS);
    glColor3ub(146,171,186);
    glVertex2d(-0.38,0.11);
    glVertex2d(-0.28,0.12);
    glVertex2d(-0.28,0.17);
    glVertex2d(-0.38,0.16);
    glEnd();
//b-10
     glBegin(GL_QUADS);
     glColor3ub(163,175,177);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.6,-0.5);
     glVertex2d(-0.6,0.5);
     glVertex2d(-0.75,0.5);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.35);
     glVertex2d(-0.6,-0.35);
     glVertex2d(-0.6,-0.4);
     glVertex2d(-0.75,-0.4);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();

     glTranslatef(0,0.2,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.4,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

     glTranslatef(0,0.6,0);
     glBegin(GL_QUADS);
     glColor3ub(227,219,212);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.6,-0.2);
     glVertex2d(-0.6,-0.15);
     glVertex2d(-0.75,-0.15);
     glEnd();
     glLoadIdentity();

//b-11
     glBegin(GL_QUADS);
     glColor3ub(180,250,201);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.75,-0.5);
     glVertex2d(-0.75,-0.15);
     glVertex2d(-0.9,-0.1);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.75,-0.4);
     glVertex2d(-0.75,-0.45);
     glVertex2d(-0.9,-0.43);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.75,-0.2);
     glVertex2d(-0.75,-0.25);
     glVertex2d(-0.9,-0.23);
     glEnd();

//b-12
     glBegin(GL_QUADS);
     glColor3ub(172,219,201);
     glVertex2d(-1,-0.5);
     glVertex2d(-0.9,-0.5);
     glVertex2d(-0.9,-0.1);
     glVertex2d(-1,-0.15);
     glEnd();

     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.39);
     glVertex2d(-0.9,-0.38);
     glVertex2d(-0.9,-0.43);
     glVertex2d(-1,-0.44);
     glEnd();


     glBegin(GL_QUADS);
     glColor3ub(93,141,131);
     glVertex2d(-1,-0.2);
     glVertex2d(-0.9,-0.18);
     glVertex2d(-0.9,-0.23);
     glVertex2d(-1,-0.25);
     glEnd();
//flyover

    glBegin(GL_QUADS);
    glColor3ub(0,72,108);
    glVertex2d(-1,-0.28);
    glVertex2d(0.2,-0.28);
    glVertex2d(0.2,-0.38);
    glVertex2d(-1,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.34);
    glVertex2d(0.2,-0.34);
    glVertex2d(0.2,-0.36);
    glVertex2d(-1,-0.36);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2d(-1,-0.30);
    glVertex2d(-1,-0.31);
    glVertex2d(0.2,-0.31);
    glVertex2d(0.2,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.73,-0.5);
    glVertex2d(-0.73,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.70,-0.5);
    glVertex2d(-0.64,-0.5);
    glVertex2d(-0.64,-0.38);
    glVertex2d(-0.70,-0.38);
    glEnd();

    glTranslatef(0.45,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();

    glTranslatef(0.8,0,0);
    glBegin(GL_QUADS);
    glColor3ub(2,70,107);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.7,-0.5);
    glVertex2d(-0.7,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(4,18,57);
    glVertex2d(-0.67,-0.5);
    glVertex2d(-0.63,-0.5);
    glVertex2d(-0.63,-0.38);
    glVertex2d(-0.67,-0.38);
    glEnd();
    glLoadIdentity();
//metro
    glBegin(GL_QUADS);
    glColor3ub(225,208,182);
    glVertex2d(-1,-0.1);
    glVertex2d(1,-0.1);
    glVertex2d(1,-0.06);
    glVertex2d(-1,-0.06);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(25,33,45);
    glVertex2d(-1,-0.12);
    glVertex2d(1,-0.12);
    glVertex2d(1,-0.1);
    glVertex2d(-1,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();

    glTranslatef(0.6,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

    glTranslatef(1.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(162,121,102);
    glVertex2d(-0.55,-0.5);
    glVertex2d(-0.65,-0.5);
    glVertex2d(-0.65,-0.12);
    glVertex2d(-0.55,-0.12);
    glEnd();
    glLoadIdentity();

//road
    glBegin(GL_QUADS);
    glColor3ub(117,125,144);
    glVertex2d(-1,-0.5);
    glVertex2d(1,-0.5);
    glVertex2d(1,-0.7);
    glVertex2d(-1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();

    glTranslatef(0,-0.07,0);
    glBegin(GL_QUADS);
    glColor3ub(174,171,182);
    glVertex2d(-1,-0.55);
    glVertex2d(1,-0.55);
    glVertex2d(1,-0.58);
    glVertex2d(-1,-0.58);
    glEnd();
    glLoadIdentity();

//pink field
    glBegin(GL_QUADS);
    glColor3ub(96, 83, 57);
    glVertex2d(1,-0.7);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.7,-1);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(111, 88, 42);
    glVertex2d(0.4,-0.7);
    glVertex2d(0.1,-0.7);
    glVertex2d(0.4,-1);
    glVertex2d(0.7,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(96, 83, 57);
    glVertex2d(0.1,-0.7);
    glVertex2d(-0.3,-0.7);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(111, 88, 42);
    glVertex2d(-0.3,-0.7);
    glVertex2d(-0.4,-1);
    glVertex2d(0.4,-1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(96, 83, 57);
    glVertex2d(-0.35,-0.7);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.3,-0.7);
    glEnd();

//rode side-right
    glBegin(GL_POLYGON);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(0.7,-0.82);
    glVertex2d(1,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(121,99,52);
    glVertex2d(1,-0.7);
    glVertex2d(0.7,-0.7);
    glVertex2d(1,-0.9);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(54,42,51);
    glVertex2d(1,-0.75);
    glVertex2d(0.8,-0.74);
    glVertex2d(1,-0.85);
    glEnd();

//road side left
    glBegin(GL_QUADS);
    glColor3ub(54,42,51);
    glVertex2d(-1,-0.7);
    glVertex2d(-1,-1);
    glVertex2d(-0.45,-1);
    glVertex2d(-0.35,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(121,99,52);
    glVertex2d(-1,-0.75);
    glVertex2d(-1,-1);
    glVertex2d(-0.55,-1);
    glVertex2d(-0.45,-0.75);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230,222,214);
    glVertex2d(-1,-0.8);
    glVertex2d(-1,-1);
    glVertex2d(-0.65,-1);
    glVertex2d(-0.55,-0.8);
    glEnd();

//lamppost
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
//l-2
    glTranslatef(0.15,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(-0.3,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(0.8,-0.08,0);
    glScalef(0.7,0.62,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-1);
    glVertex2d(-0.43,-1);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.45,0.09);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.2,0.15);
    glVertex2d(-0.45,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.2,0.14);
    glVertex2d(-0.25,0.14);
    glVertex2d(-0.25,0.10);
    glVertex2d(-0.2,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.225,0.1);
    glVertex2d(-0.3,-0.05);
    glVertex2d(-0.1,-0.05);
    glEnd();
    glLoadIdentity();
//lamppost opposite side
//l-1
    glTranslatef(1.2,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-2
    glTranslatef(0.6,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-3
    glTranslatef(0.1,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//l-4
    glTranslatef(-0.5,-0.032,0);
    glScalef(0.7,0.52,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.4,-0.9);
    glVertex2d(-0.43,-0.9);
    glVertex2d(-0.42,0.1);
    glVertex2d(-0.4,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.37,0.09);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.65,0.15);
    glVertex2d(-0.37,0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2d(-0.65,0.14);
    glVertex2d(-0.60,0.14);
    glVertex2d(-0.60,0.10);
    glVertex2d(-0.65,0.09);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 223, 128);
    glVertex2d(-0.625,0.1);
    glVertex2d(-0.7,-0.05);
    glVertex2d(-0.5,-0.05);
    glEnd();
    glLoadIdentity();
//    glutTimerFunc(3000,demo_morning1,0);
    glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case '0':
    glutDisplayFunc(Morning0);
    glutPostRedisplay();
    break;
case '1':
    glutDisplayFunc(Morning1);
    sound();
    glutPostRedisplay();
    break;
case '2':
    glutDisplayFunc(Morning_rain);
    sound1();
    glutPostRedisplay();
    break;
case '3':
    glutDisplayFunc(day);
    sound3();
    glutPostRedisplay();
    break;
case '4':
    glutDisplayFunc(day_rain);
    sound2();
    glutPostRedisplay();
    break;
case '5':
    glutDisplayFunc(Evening);
    sound3();
    glutPostRedisplay();
    break;
case '6':
    glutDisplayFunc(night);
    glutPostRedisplay();
    break;
case '7':
    glutDisplayFunc(night_rain);
    sound2();
    glutPostRedisplay();
    break;
    glutPostRedisplay();
	}
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed1 += 0.3f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed1 -= 0.2f;
			}
	glutPostRedisplay();
	}

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed1=0;
break;
case GLUT_KEY_DOWN:
speed1=0.05f;
break;
case GLUT_KEY_LEFT:
speed = 0;
break;
case GLUT_KEY_RIGHT:
speed = 0.005f;
break;}
glutPostRedisplay();}
//void demo_start(){glutDisplayFunc(Morning0);}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Dhaka Metro City");
	glutInitWindowSize(1280,960);
	glutDisplayFunc(Morning0);
    glutIdleFunc(Idle);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutSpecialFunc(SpecialInput);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
    glutTimerFunc(100, update5, 0);
    glutTimerFunc(100, update6, 0);
    glutTimerFunc(100, update7, 0);
	glutMainLoop();
	return 0;
}
