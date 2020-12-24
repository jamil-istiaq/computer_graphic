
/*#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <GL/glut.h>
#include <GL/gl.h>


#define MAX_PARTICLES 1000
#define WCX		640
#define WCY		480
#define RAIN	0
#define SNOW	1
#define	HAIL	2


float slowdown = 2.0;
float velocity = 0.0;
float zoom = -40.0;
float pan = 0.0;
float tilt = 0.0;
float hailsize = 0.1;

int loop;
int fall;

//floor colors
float r = 0.0;
float g = 1.0;
float b = 0.0;
float ground_points[21][21][3];
float ground_colors[21][21][4];
float accum = -10.0;

typedef struct {
  // Life
  bool alive;	// is the particle alive?
  float life;	// particle lifespan
  float fade; // decay
  // color
  float red;
  float green;
  float blue;
  // Position/direction
  float xpos;
  float ypos;
  float zpos;
  // Velocity/Direction, only goes down in y dir
  float vel;
  // Gravity
  float gravity;
}particles;

// Paticle System
particles par_sys[MAX_PARTICLES];

void normal_keys(unsigned char key, int x, int y) {
  if (key == 'r') { // Rain
    fall = RAIN;
    glutPostRedisplay();
  }
  if (key == 'h') { // Hail
    fall = HAIL;
    glutPostRedisplay();
  }
  if (key == 's') { // Snow
    fall = SNOW;
    glutPostRedisplay();
  }
  if (key == '=') { //really '+' - make hail bigger
    hailsize += 0.01;
  }
  if (key == '-') { // make hail smaller
    if (hailsize > 0.1) hailsize -= 0.01;
  }
  if (key == ',') { // really '<' slow down
    if (slowdown > 4.0) slowdown += 0.01;
  }
  if (key == '.') { // really '>' speed up
    if (slowdown > 1.0) slowdown -= 0.01;
  }
  if (key == 'q') { // QUIT
    exit(0);
  }
}

void special_keys(int key, int x, int y) {
  if (key == GLUT_KEY_UP) {
    zoom += 1.0;
  }
  if (key == GLUT_KEY_DOWN) {
    zoom -= 1.0;
  }
  if (key == GLUT_KEY_RIGHT) {
    pan += 1.0;
  }
  if (key == GLUT_KEY_LEFT) {
    pan -= 1.0;
  }
  if (key == GLUT_KEY_PAGE_UP) {
    tilt -= 1.0;
  }
  if (key == GLUT_KEY_PAGE_DOWN) {
    tilt += 1.0;
  }
}


// Initialize/Reset Particles - give them their attributes
void initParticles(int i) {
    par_sys[i].alive = true;
    par_sys[i].life = 1.0;
    par_sys[i].fade = float(rand()%100)/1000.0f+0.003f;

    par_sys[i].xpos = (float) (rand() % 21) - 10;
    par_sys[i].ypos = 10.0;
    par_sys[i].zpos = (float) (rand() % 21) - 10;

    par_sys[i].red = 0.5;
    par_sys[i].green = 0.5;
    par_sys[i].blue = 1.0;

    par_sys[i].vel = velocity;
    par_sys[i].gravity = -0.8;//-0.8;

}

void init( ) {
  int x, z;

    glShadeModel(GL_SMOOTH);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClearDepth(1.0);
    glEnable(GL_DEPTH_TEST);

  // Ground Verticies
    // Ground Colors
    for (z = 0; z < 21; z++) {
      for (x = 0; x < 21; x++) {
        ground_points[x][z][0] = x - 10.0;
        ground_points[x][z][1] = accum;
        ground_points[x][z][2] = z - 10.0;

        ground_colors[z][x][0] = r; // red value
        ground_colors[z][x][1] = g; // green value
        ground_colors[z][x][2] = b; // blue value
        ground_colors[z][x][3] = 0.0; // acummulation factor
      }
    }

    // Initialize particles
    for (loop = 0; loop < MAX_PARTICLES; loop++) {
        initParticles(loop);
    }
}

// For Rain
void drawRain() {
  float x, y, z;
  for (loop = 0; loop < MAX_PARTICLES; loop=loop+2) {
    if (par_sys[loop].alive == true) {
      x = par_sys[loop].xpos;
      y = par_sys[loop].ypos;
      z = par_sys[loop].zpos + zoom;

      // Draw particles
      glColor3f(0.5, 0.5, 1.0);
      glBegin(GL_LINES);
        glVertex3f(x, y, z);
        glVertex3f(x, y+0.5, z);
      glEnd();

      // Update values
      //Move
      // Adjust slowdown for speed!
      par_sys[loop].ypos += par_sys[loop].vel / (slowdown*1000);
      par_sys[loop].vel += par_sys[loop].gravity;
      // Decay
      par_sys[loop].life -= par_sys[loop].fade;

      if (par_sys[loop].ypos <= -10) {
        par_sys[loop].life = -1.0;
      }
      //Revive
      if (par_sys[loop].life < 0.0) {
        initParticles(loop);
      }
    }
  }
}

// For Hail
void drawHail() {
  float x, y, z;

  for (loop = 0; loop < MAX_PARTICLES; loop=loop+2) {
    if (par_sys[loop].alive == true) {
      x = par_sys[loop].xpos;
      y = par_sys[loop].ypos;
      z = par_sys[loop].zpos + zoom;

      // Draw particles
      glColor3f(0.8, 0.8, 0.9);
      glBegin(GL_QUADS);
        // Front
        glVertex3f(x-hailsize, y-hailsize, z+hailsize); // lower left
        glVertex3f(x-hailsize, y+hailsize, z+hailsize); // upper left
        glVertex3f(x+hailsize, y+hailsize, z+hailsize); // upper right
        glVertex3f(x+hailsize, y-hailsize, z+hailsize); // lower left
        //Left
        glVertex3f(x-hailsize, y-hailsize, z+hailsize);
        glVertex3f(x-hailsize, y-hailsize, z-hailsize);
        glVertex3f(x-hailsize, y+hailsize, z-hailsize);
        glVertex3f(x-hailsize, y+hailsize, z+hailsize);
        // Back
        glVertex3f(x-hailsize, y-hailsize, z-hailsize);
        glVertex3f(x-hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z-hailsize);
        //Right
        glVertex3f(x+hailsize, y+hailsize, z+hailsize);
        glVertex3f(x+hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z+hailsize);
        //Top
        glVertex3f(x-hailsize, y+hailsize, z+hailsize);
        glVertex3f(x-hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y+hailsize, z-hailsize);
        glVertex3f(x+hailsize, y+hailsize, z+hailsize);
        //Bottom
        glVertex3f(x-hailsize, y-hailsize, z+hailsize);
        glVertex3f(x-hailsize, y-hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z-hailsize);
        glVertex3f(x+hailsize, y-hailsize, z+hailsize);
      glEnd();

      // Update values
      //Move
      if (par_sys[loop].ypos <= -10) {
        par_sys[loop].vel = par_sys[loop].vel * -1.0;
      }
      par_sys[loop].ypos += par_sys[loop].vel / (slowdown*1000); // * 1000
      par_sys[loop].vel += par_sys[loop].gravity;

      // Decay
      par_sys[loop].life -= par_sys[loop].fade;

      //Revive
      if (par_sys[loop].life < 0.0) {
        initParticles(loop);
      }
    }
  }
}

// For Snow
void drawSnow() {
  float x, y, z;
  for (loop = 0; loop < MAX_PARTICLES; loop=loop+2) {
    if (par_sys[loop].alive == true) {
      x = par_sys[loop].xpos;
      y = par_sys[loop].ypos;
      z = par_sys[loop].zpos + zoom;

      // Draw particles
      glColor3f(1.0, 1.0, 1.0);
      glPushMatrix();
      glTranslatef(x, y, z);
      glutSolidSphere(0.2, 16, 16);
      glPopMatrix();

      // Update values
      //Move
      par_sys[loop].ypos += par_sys[loop].vel / (slowdown*1000);
      par_sys[loop].vel += par_sys[loop].gravity;
      // Decay
      par_sys[loop].life -= par_sys[loop].fade;

      if (par_sys[loop].ypos <= -10) {
        int zi = z - zoom + 10;
        int xi = x + 10;
        ground_colors[zi][xi][0] = 1.0;
        ground_colors[zi][xi][2] = 1.0;
        ground_colors[zi][xi][3] += 1.0;
        if (ground_colors[zi][xi][3] > 1.0) {
          ground_points[xi][zi][1] += 0.1;
        }
        par_sys[loop].life = -1.0;
      }

      //Revive
      if (par_sys[loop].life < 0.0) {
        initParticles(loop);
      }
    }
  }
}

// Draw Particles
void drawScene( ) {
  int i, j;
  float x, y, z;

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_MODELVIEW);

  glLoadIdentity();


  glRotatef(pan, 0.0, 1.0, 0.0);
  glRotatef(tilt, 1.0, 0.0, 0.0);

  // GROUND?!
  glColor3f(r, g, b);
  glBegin(GL_QUADS);
    // along z - y const
    for (i = -10; i+1 < 11; i++) {
      // along x - y const
      for (j = -10; j+1 < 11; j++) {
        glColor3fv(ground_colors[i+10][j+10]);
        glVertex3f(ground_points[j+10][i+10][0],
              ground_points[j+10][i+10][1],
              ground_points[j+10][i+10][2] + zoom);
        glColor3fv(ground_colors[i+10][j+1+10]);
        glVertex3f(ground_points[j+1+10][i+10][0],
              ground_points[j+1+10][i+10][1],
              ground_points[j+1+10][i+10][2] + zoom);
        glColor3fv(ground_colors[i+1+10][j+1+10]);
        glVertex3f(ground_points[j+1+10][i+1+10][0],
              ground_points[j+1+10][i+1+10][1],
              ground_points[j+1+10][i+1+10][2] + zoom);
        glColor3fv(ground_colors[i+1+10][j+10]);
        glVertex3f(ground_points[j+10][i+1+10][0],
              ground_points[j+10][i+1+10][1],
              ground_points[j+10][i+1+10][2] + zoom);
      }

    }
  glEnd();
  // Which Particles
  if (fall == RAIN) {
    drawRain();
  }else if (fall == HAIL) {
    drawHail();
  }else if (fall == SNOW) {
    drawSnow();
  }

  glutSwapBuffers();
}

void reshape(int w, int h) {
    if (h == 0) h = 1;

    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(45, (float) w / (float) h, .1, 200);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void idle ( ) {
  glutPostRedisplay();
}

int main (int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_RGB | GLUT_DOUBLE);
  glutInitWindowSize(WCX, WCY);
  glutCreateWindow("CMPS 161 - Final Project");
  init();
  glutDisplayFunc(drawScene);
  glutReshapeFunc(reshape);
  glutKeyboardFunc(normal_keys);
  glutSpecialFunc(special_keys);
  glutIdleFunc(idle);
  glutMainLoop();
  return 0;
}*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
#include<cstdio>
#include <GL/gl.h>

# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

GLfloat position = 0.0f;
GLfloat speed = 0.09f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;

void sound()
{

    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
    PlaySound("a.wav", NULL,SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void display() {


    glClearColor(135/ 255.0, 245/ 255.0, 240/ 255.0,255/255.0); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	int i;
	glColor3f(0.9,0.5,0);

	GLfloat x=0.8f;
	GLfloat y=0.7f;
	GLfloat radius =0.1f;
	int triangleAmount = 100000; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 glTranslatef(0,0.4,0);

	  glBegin(GL_QUAD_STRIP);
        glColor3f(0.6,0.5,0.3);
        glVertex2f(-1,-0.5);
        glVertex2f(-1,-1);
        glVertex2f(-0.2,-0.5);
        glVertex2f(-0.2,-1);

        glEnd();





        glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();


         glBegin(GL_QUAD_STRIP);
        glColor3f(0.4,0.5,0.6);
        glVertex2f(0.1,-0.7);
        glVertex2f(0.8,-0.7);
        glVertex2f(0.1,-0.8);
        glVertex2f(0.8,-0.8);
        glEnd();

         glBegin(GL_QUAD_STRIP);
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.3,-0.5);
        glVertex2f(0.7,-0.5);
        glVertex2f(0.3,-0.7);
        glVertex2f(0.7,-0.7);
        glEnd();

        glBegin(GL_QUAD_STRIP);
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.5,-0.4);
        glVertex2f(0.8,-0.4);
        glVertex2f(0.5,-0.7);
        glVertex2f(0.8,-0.7);
        glEnd();


        glBegin(GL_QUAD_STRIP);
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.5,-0.4);
        glVertex2f(0.8,-0.4);
        glVertex2f(0.5,-0.7);
        glVertex2f(0.8,-0.7);
        glEnd();

      glBegin(GL_TRIANGLES);

      glColor3f(0.4,0.5,0.6);
      glVertex2f(0.8,-0.7);
      glVertex2f(0.8,-0.8);
      glVertex2f(1,-0.6);

      glEnd();


     glBegin(GL_TRIANGLES);

      glColor3f(0.4,0.5,0.6);
     glVertex2f(0.1,-0.7);
      glVertex2f(0.1,-0.8);
      glVertex2f(-0.1,-0.6);

      glEnd();


        x=0.1;
        y=-0.35;
        radius=0.05;
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();


	glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();

    glTranslatef(0,0.2,0);
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();
        glLoadIdentity();

        glTranslatef(-0.8,0,0);
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();
        glLoadIdentity();

         glTranslatef(-0.8,0.2,0);
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();
        glLoadIdentity();




glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
        glScalef(0.8,0.8,0);
        glTranslatef(0.0,-0.37,0);


           glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.2,0.2);
        glVertex2f(0.1,-0.7);
        glVertex2f(0.8,-0.7);
        glVertex2f(0.1,-0.8);
        glVertex2f(0.8,-0.8);
        glEnd();
        glBegin(GL_TRIANGLES);

      glColor3f(0,0,0);
     glVertex2f(0.1,-0.7);
      glVertex2f(0.1,-0.8);
      glVertex2f(-0.1,-0.6);

      glEnd();


      glBegin(GL_TRIANGLES);

      glColor3f(0,0,0);
      glVertex2f(0.8,-0.7);
      glVertex2f(0.8,-0.8);
      glVertex2f(1,-0.6);

      glEnd();

       glBegin(GL_QUAD_STRIP);
        glColor3f(0,0,0);
        glVertex2f(0.15,-0.57);
        glVertex2f(0.2,-0.57);
        glVertex2f(0.15,-0.7);
        glVertex2f(0.2,-0.7);
        glEnd();

         glBegin(GL_QUAD_STRIP);
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.4,-0.5);
        glVertex2f(0.8,-0.5);
        glVertex2f(0.4,-0.7);
        glVertex2f(0.8,-0.7);
        glEnd();
        glLoadIdentity();


        glPopMatrix();
        glLoadIdentity();





        //ship 3
glPushMatrix();
glTranslatef(position1,0.0f, 0.0f);
         glScalef(0.6,0.6,0);
        glTranslatef(-1.2,-0.6,0);




      glColor3f(0,0,0);
     glVertex2f(0.1,-0.7);
      glVertex2f(0.1,-0.8);
      glVertex2f(-0.1,-0.6);

      glEnd();


      glBegin(GL_TRIANGLES);

      glColor3f(0,0,0);
      glVertex2f(0.8,-0.7);
      glVertex2f(0.8,-0.8);
      glVertex2f(1,-0.6);

      glEnd();



         glBegin(GL_QUAD_STRIP);
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.4,-0.5);
        glVertex2f(0.8,-0.5);
        glVertex2f(0.4,-0.7);
        glVertex2f(0.8,-0.7);
        glEnd();
        glLoadIdentity();
         glPopMatrix();
        glLoadIdentity();



      glPushMatrix();
glTranslatef(position,0.0f, 0.0f);

         glBegin(GL_POLYGON);
        glColor3f(0.8,0,0.4);
        glVertex2f(-0.3,0.8);
        glVertex2f(-0.35,0.82);
        glVertex2f(-0.35,0.85);
        glColor3f(0.3,0.6,0.2);
        glVertex2f(-0.3,0.8);
        glVertex2f(-0.35,0.82);
        glVertex2f(-0.3,0.85);
        glEnd();




        glBegin(GL_POLYGON);
        glColor3f(0.8,0,0.4);
        glVertex2f(-0.3,0.71);
        glVertex2f(-0.35,0.72);
        glVertex2f(-0.35,0.78);
        glColor3f(0.3,0.6,0.2);
        glVertex2f(-0.3,0.71);
        glVertex2f(-0.35,0.72);
        glVertex2f(-0.3,0.78);
        glEnd();



        glPopMatrix();
        glLoadIdentity();




        glFlush();





	  // Render now
}

void display1()
{
    sound();
    glClearColor(48/ 255.0, 56/ 255.0, 59/ 255.0,255/255.0); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	int i;
	glColor3f(0.9,0.5,0);

	GLfloat x=0.8f;
	GLfloat y=0.7f;
	GLfloat radius =0.1f;
	int triangleAmount = 100000; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 glTranslatef(0,0.4,0);

	  glBegin(GL_QUAD_STRIP);
        glColor3f(0.6,0.5,0.3);
        glVertex2f(-1,-0.5);
        glVertex2f(-1,-1);
        glVertex2f(-0.2,-0.5);
        glVertex2f(-0.2,-1);

        glEnd();


        glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();


         glBegin(GL_QUAD_STRIP);
        glColor3f(0.4,0.5,0.6);
        glVertex2f(0.1,-0.7);
        glVertex2f(0.8,-0.7);
        glVertex2f(0.1,-0.8);
        glVertex2f(0.8,-0.8);
        glEnd();

         glBegin(GL_QUAD_STRIP);
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.3,-0.5);
        glVertex2f(0.7,-0.5);
        glVertex2f(0.3,-0.7);
        glVertex2f(0.7,-0.7);
        glEnd();

        glBegin(GL_QUAD_STRIP);
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.5,-0.4);
        glVertex2f(0.8,-0.4);
        glVertex2f(0.5,-0.7);
        glVertex2f(0.8,-0.7);
        glEnd();


        glBegin(GL_QUAD_STRIP);
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.5,-0.4);
        glVertex2f(0.8,-0.4);
        glVertex2f(0.5,-0.7);
        glVertex2f(0.8,-0.7);
        glEnd();

      glBegin(GL_TRIANGLES);

      glColor3f(0.4,0.5,0.6);
      glVertex2f(0.8,-0.7);
      glVertex2f(0.8,-0.8);
      glVertex2f(1,-0.6);

      glEnd();


     glBegin(GL_TRIANGLES);

      glColor3f(0.4,0.5,0.6);
     glVertex2f(0.1,-0.7);
      glVertex2f(0.1,-0.8);
      glVertex2f(-0.1,-0.6);

      glEnd();



        x=0.1;
        y=-0.35;
        radius=0.05;
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();


	glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();

    glTranslatef(0,0.2,0);
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();
        glLoadIdentity();

        glTranslatef(-0.8,0,0);
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();
        glLoadIdentity();

         glTranslatef(-0.8,0.2,0);
    glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.5,0.8);
        glVertex2f(-0.2,-0.8);
        glVertex2f(1,-0.8);
        glVertex2f(-0.2,-1);
        glVertex2f(1,-1);
        glEnd();
        glLoadIdentity();





        //ship two


        glScalef(0.8,0.8,0);
        glTranslatef(0.0,-0.37,0);


           glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.2,0.2);
        glVertex2f(0.1,-0.7);
        glVertex2f(0.8,-0.7);
        glVertex2f(0.1,-0.8);
        glVertex2f(0.8,-0.8);
        glEnd();
        glBegin(GL_TRIANGLES);

      glColor3f(0,0,0);
     glVertex2f(0.1,-0.7);
      glVertex2f(0.1,-0.8);
      glVertex2f(-0.1,-0.6);

      glEnd();


      glBegin(GL_TRIANGLES);

      glColor3f(0,0,0);
      glVertex2f(0.8,-0.7);
      glVertex2f(0.8,-0.8);
      glVertex2f(1,-0.6);

      glEnd();



         glBegin(GL_QUAD_STRIP);//flat2-2
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.4,-0.5);
        glVertex2f(0.8,-0.5);
        glVertex2f(0.4,-0.7);
        glVertex2f(0.8,-0.7);
        glEnd();
        glLoadIdentity();








        //ship 3

         glScalef(0.6,0.6,0);
        glTranslatef(-1.2,-0.6,0);


           glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.2,0.2);
        glVertex2f(0.1,-0.7);
        glVertex2f(0.8,-0.7);
        glVertex2f(0.1,-0.8);
        glVertex2f(0.8,-0.8);
        glEnd();

        glBegin(GL_TRIANGLES);
      glColor3f(0,0,0);
      glVertex2f(0.1,-0.7);
      glVertex2f(0.1,-0.8);
      glVertex2f(-0.1,-0.6);

      glEnd();


      glBegin(GL_TRIANGLES);

      glColor3f(0,0,0);
      glVertex2f(0.8,-0.7);
      glVertex2f(0.8,-0.8);
      glVertex2f(1,-0.6);

      glEnd();

       glBegin(GL_QUAD_STRIP);
        glColor3f(0,0,0);
        glVertex2f(0.15,-0.57);
        glVertex2f(0.2,-0.57);
        glVertex2f(0.15,-0.7);
        glVertex2f(0.2,-0.7);
        glEnd();

         glBegin(GL_QUAD_STRIP);
        glColor3f(0.3,0.3,0.3);
        glVertex2f(0.4,-0.5);
        glVertex2f(0.8,-0.5);
        glVertex2f(0.4,-0.7);
        glVertex2f(0.8,-0.7);
        glEnd();
        glLoadIdentity();






         glBegin(GL_POLYGON);
        glColor3f(0.8,0,0.4);
        glVertex2f(-0.3,0.8);
        glVertex2f(-0.35,0.82);
        glVertex2f(-0.35,0.85);
        glColor3f(0.3,0.6,0.2);
        glVertex2f(-0.3,0.8);
        glVertex2f(-0.35,0.82);
        glVertex2f(-0.3,0.85);
        glEnd();


        glFlush();

}
void update(int value) {

    if(position <-1.0)
        position = 1.8f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(500, update, 0);
}




void update1(int value1) {

    if(position1 <-1.0)
        position1 = 1.8f;

    position1 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(800, update1, 0);
}

void update2(int value1) {

    if(position1 <-1.0)
        position1 = 1.9f;

    position1 -= speed1;

	glutPostRedisplay();


	glutTimerFunc(2000, update1, 0);
}

void handleMouse(int button, int state, int x, int y) {


		if (button == GLUT_RIGHT_BUTTON)
	{

			glutDisplayFunc(display1);


	}

		if (button == GLUT_LEFT_BUTTON)
	{

			glutDisplayFunc(display);


	}

	glutPostRedisplay();
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("PORT VIEW"); // Create a window with the given title
	 glutInitWindowSize(800,800);   // Set the window's initial width & height
	glutDisplayFunc(display);
	glutMouseFunc(handleMouse);
	glutTimerFunc(500, update, 0);
	glutTimerFunc(800, update1, 0);
	glutTimerFunc(2000, update2, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

