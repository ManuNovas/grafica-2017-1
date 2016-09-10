#include "Main.h"
const int ALTO=672;
const int ANCHO = 768;

void InitGL(GLvoid) {
	glClearColor(0.5294, 0.8078, 1, 0);
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity( );
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
	glutInitWindowSize(ANCHO, ALTO);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tarea 2 - Pocky & Rocky");
	InitGL( );
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop( );
	return 0;
}