#include "Main.h"
const int ALTO = 150;
const int ANCHO = 258;

void InitGL(GLvoid) {
	glClearColor(0.5294, 0.8078, 1, 0);
}

void arboles( ){
	GLint tronco[10][2] = {
		2, 35,
		2, 82,
		15, 82,
		15, 35,
		34, 32,
		34, 56,
		47, 56,
		47, 32
	};
	glBegin(GL_QUADS);
	glColor3f(0.5451, 0.2706, 0.0745);
	for (int i = 0; i < 10; i++) {
		glVertex2iv(tronco[i]);
	}
	glEnd( );
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity( );

	arboles( );

	glPushMatrix( );
		glTranslatef(165, 0, 0);
		glRotatef(180, 0, 1, 0);
		arboles( );
	glPopMatrix( );

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
	glutInitWindowSize(ANCHO*2, ALTO*2);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tarea 2 - Pocky & Rocky");
	InitGL( );
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop( );
	return 0;
}