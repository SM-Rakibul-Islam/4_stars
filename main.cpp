#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{

    glClear (GL_COLOR_BUFFER_BIT);

    //X & Y Axis
    glColor3ub(0, 0, 255) ;
    glBegin(GL_LINES);

    //X axis
    glVertex2d(700, 0);
    glVertex2d(-700, 0);

    //Y axis
    glVertex2d(0, -700);
    glVertex2d(0, 700);
    glEnd();


    //Green star
    glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);
    glVertex2d(-5, 10);
    glVertex2d(-15, 15);
    glVertex2d(-5, 20);
    glVertex2d(0, 30);
    glVertex2d(5, 20);
    glVertex2d(15, 15);
    glVertex2d(5, 10);
    glVertex2d(0, 0);
    glEnd();

    glFlush ();
}

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1000, 1000, -1000, 1000);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (700, 700);
    glutInitWindowPosition (1000, 1000);
    glutCreateWindow ("181-15-10869 S. M. Rakibul Islam G");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

