#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(0.0f,1.0f,1.0f,1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    GLfloat x=.6f; GLfloat y=.6f; GLfloat radius =.2f;
    int i;
    int triangleAmount = 50;  //# of triangles used to draw circle



    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(230, 46, 0);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius* sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();





glBegin(GL_QUADS);
glColor3ub(153, 255, 153);
glVertex2f(90,120);
glVertex2f(250,120);
glVertex2f(250,220);
glVertex2f(90,220);
glEnd();




glBegin(GL_QUADS);
glColor3ub(102, 153, 0);
glVertex2f(60,90);
glVertex2f(580,90);
glVertex2f(580,120);
glVertex2f(60,120);
glEnd();




glBegin(GL_QUADS);
glColor3ub(255, 0, 102);
glVertex2f(60,40);
glVertex2f(580,90);
glVertex2f(580,80);
glVertex2f(60,80);
glEnd();




glBegin(GL_QUADS);
glColor3ub(255, 0, 102);
glVertex2f(270,120);
glVertex2f(320,120);
glVertex2f(320,220);
glVertex2f(270,220);
glEnd();




glBegin(GL_QUADS);
glColor3ub(255, 0, 102);
glVertex2f(340,120);
glVertex2f(440,120);
glVertex2f(440,220);
glVertex2f(340,220);
glEnd();



glBegin(GL_QUADS);
glColor3ub(255, 153, 204);
glVertex2f(0.460,0.120);
glVertex2f(0.480,0.120);
glVertex2f(0.480,0.220);
glVertex2f(0.460,0.220);
glEnd();






    glFlush();  // Render now
    }



int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Test");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
