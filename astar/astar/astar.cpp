// astar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <GL/freeglut.h>
#include "astar.h"
#include "Player.h"

const int TILE_WIDTH = 32;
const int TILE_HEIGHT = 32;
const int TILE_COLS = 20;
const int TILE_ROWS = 20;

Player *player;

void ChangeSize(int w, int h) {
    GLfloat nRange = 100.0f;
    if (h == 0)
        h = 1;

    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0f, TILE_COLS * TILE_WIDTH, TILE_ROWS * TILE_HEIGHT, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void RenderScene() {
	// Clear the window with current clearing color
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

	glPointSize(TILE_HEIGHT);
	glBegin(GL_POINTS);
	glVertex3f(player->Positon.x + TILE_WIDTH / 2, player->Positon.y + TILE_HEIGHT / 2, 0.0f);
	glEnd();

	//draw grid
	glColor3f(1.0f, 1.0f, 1.0f);
	for (float line_y = 0; line_y <= TILE_ROWS * TILE_HEIGHT; line_y += TILE_HEIGHT)
	{
		glBegin(GL_LINES);
		glVertex2f(0.0f, line_y);
		glVertex2f(TILE_COLS * TILE_WIDTH, line_y);
		glEnd();
	}
	for (float line_x = 0; line_x <= TILE_COLS * TILE_WIDTH; line_x += TILE_WIDTH)
	{
		glBegin(GL_LINES);
		glVertex2f(line_x, 0.0f);
		glVertex2f(line_x, TILE_COLS * TILE_WIDTH);
		glEnd();
	}
	glPopMatrix();
	glutSwapBuffers();
}

void init() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	player = new Player();
}

int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH | GLUT_STENCIL);
    glutInitWindowSize(TILE_COLS * TILE_WIDTH, TILE_ROWS * TILE_HEIGHT);
    glutCreateWindow("The Display Astar Window");
    glutReshapeFunc(ChangeSize);
    glutDisplayFunc(RenderScene);
    init();
    glutMainLoop();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
