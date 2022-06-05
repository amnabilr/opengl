#include <Windows.h>
#include <GL\glew.h>
#include <GL\freeglut.h>
#include <cstdlib>
#include <Windows.h>
#include <iostream>

using namespace std;

void Diagonal() {
	float a, b, c, d;
	cout << "Masukab X0 : ";cin >> a;
	cout << "Masukab Y0 : ";cin >> b;
	cout << "Masukab X1 : ";cin >> c;
	cout << "Masukab Y1 : ";cin >> d;
	glPushMatrix();
	glBegin(GL_LINES);
	glVertex3f(a + 0.5, b + 0.5, 0.0);
	glVertex3f(c + 0.5, d + 0.5, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPopMatrix();
	glEnd();
	glFlush();
}
