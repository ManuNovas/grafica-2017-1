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
		1, 27
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
	GLint cabello_pocky[85][2]{
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
		75, 57,
		75, 55,
		71, 51,
		71, 49,
		70, 49,
		69, 50,
		69, 52,
		70, 53,
		70, 54,
		71, 55,
		71, 62,
		72, 63,
		72, 66,
		71, 67,
		70, 67,
		69, 68,
		66, 68,
		66, 70,
		64, 72,
		64, 73,
		63, 74,
		63, 75,
		62, 76,
		61, 75,
		61, 71,
		60, 70,
		53, 70,
		52, 71,
		52, 75,
		51, 76,
		50, 75,
		50, 74,
		49, 73,
		49, 71,
		46, 68,
		45, 68,
		44, 67,
		43, 67,
		42, 66,
		42, 63,
		43, 62,
		43, 53,
		42, 52,
		38, 52,
		37, 53,
		36, 53,
		35, 54,
		38, 56,
		38, 57,
		39, 58,
		39, 59,
		36, 59
	};

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
		glColor3f(0, 0, 0);
		for (int i = 0; i < 85; i++) {
			glVertex2iv(cabello_pocky[i]);
		}
	glEnd( );

	//Diadema
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
		glColor3f(0.9725, 0.9725, 0.9725);
		glVertex2i(40, 70);
		glVertex2i(40, 72);
		glVertex2i(41, 73);
		glVertex2i(41, 74);
		glVertex2i(42, 75);
		glVertex2i(42, 76);
		glVertex2i(47, 81);
		glVertex2i(48, 81);
		glVertex2i(49, 82);
		glVertex2i(51, 82);
		glVertex2i(52, 83);
		glVertex2i(61, 83);
		glVertex2i(62, 82);
		glVertex2i(64, 82);
		glVertex2i(65, 81);
		glVertex2i(66, 81);
		glVertex2i(71, 76);
		glVertex2i(71, 75);
		glVertex2i(72, 74);
		glVertex2i(72, 73);
		glVertex2i(73, 72);
		glVertex2i(73, 71);
		glVertex2i(67, 76);
		glVertex2i(66, 76);
		glVertex2i(65, 77);
		glVertex2i(63, 77);
		glVertex2i(62, 78);
		glVertex2i(52, 78);
		glVertex2i(51, 77);
		glVertex2i(49, 77);
		glVertex2i(48, 76);
		glVertex2i(47, 76);
		glVertex2i(40, 70);
	glEnd( );

	//Oreja Izquierda
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
		glColor3f(0.9725, 0.7529, 0.5961);
		glVertex2i(40, 61);
		glVertex2i(40, 63);
		glVertex2i(41, 64);
		glVertex2i(41, 60);
	glEnd( );

	//Oreja Derecha
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
		glColor3f(0.9725, 0.7529, 0.5961);
		glVertex2i(75, 63);
		glVertex2i(74, 63);
		glVertex2i(74, 64);
		glVertex2i(75, 65);
		glVertex2i(76, 64);
		glVertex2i(76, 62);
		glVertex2i(75, 61);
	glEnd( );

	//Rostro
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBegin(GL_POLYGON);
		glColor3f(0.9725, 0.7529, 0.5961);
		glVertex2i(56, 46);
		glVertex2i(54, 46);
		glVertex2i(53, 47);
		glVertex2i(52, 47);
		glVertex2i(51, 48);
		glVertex2i(50, 48);
		glVertex2i(49, 49);
		glVertex2i(48, 49);
		glVertex2i(47, 50);
		glVertex2i(46, 51);
		glVertex2i(44, 53);
		glVertex2i(44, 54);
		glVertex2i(43, 55);
		glVertex2i(43, 62);
		glVertex2i(42, 63);
		glVertex2i(42, 66);
		glVertex2i(43, 67);
		glVertex2i(44, 67);
		glVertex2i(45, 68);
		glVertex2i(46, 68);
		glVertex2i(49, 71);
		glVertex2i(49, 73);
		glVertex2i(50, 74);
		glVertex2i(50, 75);
		glVertex2i(51, 76);
		glVertex2i(52, 75);
		glVertex2i(52, 71);
		glVertex2i(53, 70);
		glVertex2i(60, 70);
		glVertex2i(61, 71);
		glVertex2i(61, 75);
		glVertex2i(62, 76);
		glVertex2i(63, 75);
		glVertex2i(63, 74);
		glVertex2i(64, 73);
		glVertex2i(64, 72);
		glVertex2i(66, 70);
		glVertex2i(66, 68);
		glVertex2i(69, 68);
		glVertex2i(70, 67);
		glVertex2i(71, 67);
		glVertex2i(72, 66);
		glVertex2i(72, 63);
		glVertex2i(71, 62);
		glVertex2i(71, 55);
		glVertex2i(70, 54);
		glVertex2i(70, 53);
		glVertex2i(69, 52);
		glVertex2i(69, 50);
		glVertex2i(68, 50);
		glVertex2i(67, 49);
		glVertex2i(66, 49);
		glVertex2i(65, 47);
		glVertex2i(64, 47);
		glVertex2i(63, 46);
	glEnd();
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