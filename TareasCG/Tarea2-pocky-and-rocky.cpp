#include "Main.h"
const int ALTO = 106;
const int ANCHO = 135;

void InitGL(GLvoid) {
	glClearColor(0.5294, 0.8078, 1, 0);
}

void arboles( ){
	GLint hojas[62][2]{
		1, 27,
		1, 106,
		19, 106,
		18, 105,
		24, 105,
		28, 101,
		31, 101,
		33, 99,
		34, 100,
		34, 98,
		35, 97,
		35, 95,
		36, 94,
		37, 94,
		38, 93,
		39, 94,
		40, 94,
		41, 93,
		42, 93,
		42, 91,
		43, 91,
		44, 92,
		45, 92,
		45, 38,
		26, 38,
		25, 39,
		25, 40,
		23, 42,
		22, 42,
		22, 40,
		23, 39,
		23, 37,
		20, 34,
		20, 36,
		18, 36,
		16, 34,
		16, 33,
		18, 31,
		18, 29,
		17, 28,
		17, 27,
		14, 30,
		14, 32,
		15, 33,
		15, 35,
		14, 35,
		12, 33,
		12, 32,
		10, 30,
		9, 29,
		9, 28,
		6, 31,
		6, 33,
		7, 34,
		7, 36,
		6, 36,
		5, 34,
		5, 33,
		3, 31,
		3, 30,
		2, 29,
		2, 27
	};

	glBegin(GL_LINE);
		glColor3f(0.3804, 0.2745, 0.1922);
		glVertex2i(1, 6);
		glVertex2i(1, 18);
	glEnd( );

	glBegin(GL_POLYGON);
		glColor3f(0.2, 0.3922, 0.2);
		for (int i = 0; i < 62; i++) {
			glVertex2iv(hojas[i]);
		}
	glEnd( );
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity( );

	arboles( );

	glFlush( );
}

void reshape(int width, int height) {
	if (height == 0) {
		height = 1;
	}
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity( );
	glOrtho(0, ANCHO, 0, ALTO, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity( );
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
		case 27:
			exit(0);
			break;
	}
	glutPostRedisplay( );
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
	glutInitWindowSize(ANCHO*4, ALTO*4);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tarea 2 - Pocky & Rocky");
	InitGL( );
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop( );
	return 0;
}