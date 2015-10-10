//#include <windows.h>  // Untuk Windows
#include <GL/glut.h>  // GLUT library, isinya glu.h dan gl.h

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS); // 4 Vertex
		 glColor3f(1.0f, 0.0f, 0.0f); // Merah
		 glVertex2f(-0.5f, -0.5f);
		 glVertex2f( 0.5f, -0.5f);
		 glVertex2f( 0.5f,  0.5f);
		 glVertex2f(-0.5f,  0.5f);
	glEnd();

	glFlush();
}

void init()
{
	// glClearColor(1.0, 0.0, 0.0, 0.0); // Merah
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Hitam
	// glOrtho(0.0, 100.0, 0.0, 100.0, 0.0, 100.0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(150, 150);
	glutCreateWindow("Kotak Kotak");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
