#include <GL/glut.h>

using namespace std;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glColor3f(4, 6, 6);
    glBegin(GL_QUADS); //mulai menggambar line loop 
    glVertex2f(-0.5, 0.5); //ukuran vertex bagian kiri 
    glVertex2f(0.5, 0.5); //ukuran vertex bagian bawah 
    glVertex2f(0.5, -0.5); //ukuran vertex bagian kanan
    glVertex2f(-0.5, -0.5); //ukuran vertex bagian atas
    glEnd(); //akhir menggambar line loop

    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Kotak Berwarna Putih");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}