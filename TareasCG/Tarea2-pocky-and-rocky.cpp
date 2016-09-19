#include "Main.h"
const int ALTO = 106;
const int ANCHO = 135;

void InitGL(GLvoid) {
	glClearColor(0.5294, 0.8078, 1, 0);
}

void arboles( ) {
	GLint hojasi[62][2]{
		1, 27,
		1, 106,
		18, 106,
		19, 105,
		24, 105,
		28, 101,
		30, 101,
		32, 99,
		33, 100,
		34, 98,
		35, 97,
		35, 95,
		36, 94,
		37, 94,
		38, 93,
		39, 94,
		40, 94,
		41, 93,
		42, 94,
		43, 94,
		43, 93,
		44, 92,
		45, 93,
		45, 38,
		26, 38,
		25, 39,
		25, 40,
		23, 42,
		22, 41,
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
		10, 29,
		9, 28,
		9, 27,
		6, 30,
		6, 32,
		7, 33,
		7, 35,
		6, 35,
		4, 33,
		4, 32,
		2, 30,
		2, 29,
		1, 28
	};

	GLint hojasd[17][2]{
		119, 92,
		123, 92,
		124, 93,
		125, 93,
		126, 92,
		127, 93,
		128, 93,
		129, 94,
		129, 96,
		130, 97,
		130, 99,
		131, 98,
		133, 100,
		135, 100,
		135, 50,
		119, 50,
		119, 92
	};

	glBegin(GL_LINE);
		glColor3f(0.3804, 0.2745, 0.1922);
		glVertex3i(1, 6, 0);
		glVertex3i(1, 18, 0);
	glEnd( );

	glBegin(GL_LINE_STRIP);
		glColor3f(0.2, 0.3922, 0.2);
		glClearColor(0.2, 0.3922, 0.2, 0);
		for (int i = 0; i < 62; i++) {
			glVertex2iv(hojasi[i]);
		}
	glEnd( );

	glBegin(GL_LINE_STRIP);
		glColor3f(0.2, 0.3922, 0.2);
		for (int i = 0; i < 17; i++) {
			glVertex2iv(hojasd[i]);
		}
	glEnd( );
}

void pocky_rocky( ) {
	GLint cabello_pocky[63][2]{
		36, 59,
		36, 60,
		35, 61,
		35, 75,
		36, 76,
		36, 80,
		37, 81,
		37, 82,
		38, 83,
		38, 84,
		39, 85,
		39, 86,
		46, 93,
		47, 93,
		48, 94,
		50, 94,
		51, 95,
		63, 95,
		64, 94,
		66, 94,
		67, 93,
		68, 93,
		76, 85,
		76, 83,
		77, 82,
		77, 80,
		78, 79,
		78, 77,
		79, 76,
		79, 62,
		78, 61,
		78, 58,
		76, 58,
		76, 61,
		77, 62,
		77, 64,
		74, 67,
		74, 72,
		73, 73,
		73, 74,
		72, 75,
		72, 76,
		66, 82,
		65, 82,
		64, 83,
		62, 83,
		61, 84,
		53, 84,
		52, 83,
		50, 83,
		49, 82,
		48, 82,
		42, 76,
		42, 75,
		41, 74,
		41, 73,
		40, 72,
		40, 66,
		38, 64,
		38, 62,
		39, 61,
		39, 59,
		36, 59
	};

	glBegin(GL_LINE_LOOP);
		glColor3f(0, 0, 0);
		for (int i = 0; i < 62; i++) {
			glVertex2iv(cabello_pocky[i]);
		}
	glEnd( );
}

void display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity( );

	arboles( );
	pocky_rocky( );

	glFlush( );
}

void reshape(int width, int height) {
	if (height == 0) {
		height = 1;
	}
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity( );
	glOrtho(1, ANCHO, 1, ALTO, -1, 1);
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