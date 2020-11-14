#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
using namespace std;

float boat = 0.0;
float vehicle = 0.0;
float plane = 0.0;
float cloud = 0.0;
float rain = 0.0;
float night = 0.0;

bool rainTime = false;
bool nightTime = false;

void init(){

	glClearColor(0.0,0.5,0.8,1.0);
	glColor3f(0.0,255.0,255.0);
	glPointSize(4.0);
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);

	///*****************************************************************************Sky Start**/
    ///Sun
    glPushMatrix();
    glTranslatef(150, 850, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    ///Cloud 1
    glPushMatrix(); ///cloud 1 & 2 push
    glTranslatef(cloud, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(200, 800, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(180, 750, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(250, 800, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(230, 750, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    ///cloud 2
    glPushMatrix();
    glTranslatef(350, 100, 0);

    glPushMatrix();
    glTranslatef(200, 800, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(180, 750, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(250, 800, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(230, 750, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(300, 800, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(290, 760, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();

    glPopMatrix(); ///cloud 1 & 2 pop


    ///Plane
    glPushMatrix();
	glTranslatef(plane, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(20, 80, 0.0);
    glColor3ub(255,0,0); ///left wing
    glBegin(GL_POLYGON);
    glVertex2i(130,850);
    glVertex2i(140,850);
    glVertex2i(180,805);
    glVertex2i(160,805);
    glEnd();
    glColor3ub(75,0,130); ///body
    glBegin(GL_POLYGON);
    glVertex2i(120,835);
    glVertex2i(180,835);
    glVertex2i(200,800);
    glVertex2i(100,800);
    glEnd();
    glColor3ub(75,0,130); ///back wing
    glBegin(GL_POLYGON);
    glVertex2i(90,860);
    glVertex2i(100,860);
    glVertex2i(120,835);
    glVertex2i(105,800);
    glEnd();
    glColor3ub(255,0,0); ///right wing
    glBegin(GL_POLYGON);
    glVertex2i(150,805);
    glVertex2i(170,805);
    glVertex2i(140,770);
    glVertex2i(130,770);
    glEnd();
    glColor3ub(255,255,255); ///window
    glBegin(GL_POLYGON);
    glVertex2i(160,835);
    glVertex2i(181,835);
    glVertex2i(186,825);
    glVertex2i(160,825);
    glEnd();
    glPopMatrix();
    glPopMatrix();

	///Hill
    ///hill 1,2 middle
    glColor3ub(50,155,50);
    glBegin(GL_TRIANGLES);
    glVertex2i(50,550);
    glVertex2i(200,670);
    glVertex2i(300,550);
    glEnd();
    ///hill 2,3 middle
    glColor3ub(50,155,50);
    glBegin(GL_TRIANGLES);
    glVertex2i(250,550);
    glVertex2i(400,690);
    glVertex2i(550,550);
    glEnd();
    ///hill 3,4 middle
    glColor3ub(50,155,50);
    glBegin(GL_TRIANGLES);
    glVertex2i(500,550);
    glVertex2i(600,700);
    glVertex2i(700,550);
    glEnd();
    ///hill 4,5 middle
    glColor3ub(50,155,50);
    glBegin(GL_TRIANGLES);
    glVertex2i(580,550);
    glVertex2i(770,700);
    glVertex2i(900,550);
    glEnd();
    ///hill 5,6 middle
    glColor3ub(50,155,50);
    glBegin(GL_TRIANGLES);
    glVertex2i(850,550);
    glVertex2i(950,700);
    glVertex2i(1000,550);
    glEnd();
    ///hill 1
	glColor3ub(0, 155, 0);
    glBegin(GL_QUADS);
    glVertex2i(0,550);
    glVertex2i(0,560);
    glVertex2i(100,650);
    glVertex2i(200,550);
    glEnd();
    ///hill 2
    glColor3ub(0, 155, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(100,550);
    glVertex2i(300,680);
    glVertex2i(500,550);
    glEnd();
    ///hill 3
    glColor3ub(0, 155, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(300,550);
    glVertex2i(500,650);
    glVertex2i(600,550);
    glEnd();
    ///hill 4
    glColor3ub(0, 155, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(500,550);
    glVertex2i(650,650);
    glVertex2i(800,550);
    glEnd();
    ///hill 5
    glColor3ub(0, 155, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(700,550);
    glVertex2i(850,700);
    glVertex2i(1000,550);
    glEnd();
    ///hill 6
    glColor3ub(0, 155, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(800,550);
    glVertex2i(1000,650);
    glVertex2i(1000,550);
    glEnd();

    ///*****************************************************************************Soil Start**/
    ///Soil
    glBegin(GL_QUADS);
	glColor3ub(155,188,83);
	glVertex2i(0,550);
	glVertex2i(1000,550);
	glVertex2i(1000,400);
	glVertex2i(0,400);
	glEnd();

	///tree 1
    glPushMatrix();
    glScalef(0.30, 0.66, 0.50);
    glTranslatef(-400, 500, 0);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();
    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();
	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();
    glPopMatrix();
    ///tree 2
    glPushMatrix();
    glScalef(0.55, 0.60, 0.25);
    glTranslatef(-250, 600, 0);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();
    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();
	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();
    glPopMatrix();
    ///tree 4
    glPushMatrix();
    glScalef(0.50, 0.50, 0.25);
    glTranslatef(710, 790, 0);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();
    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();
	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();
    glPopMatrix();
    ///tree 7
    glPushMatrix();
    glScalef(0.50, 0.70, 0.25);
    glTranslatef(1450, 500, 0);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();
    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();
	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();
    glPopMatrix();

    ///*****************Building Start*******************
	///Building 1 Red
	glBegin(GL_QUADS); ///front left
	glColor3ub(128,0,0);
	glVertex2i(200,620);
	glVertex2i(350,620);
	glVertex2i(350,420);
	glVertex2i(200,420);
	glEnd();
    glBegin(GL_QUADS);  ///left windows
	glColor3ub(255,250,240);
	glVertex2i(220,460);
	glVertex2i(240,460);
	glVertex2i(240,440);
	glVertex2i(220,440);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(220,500);
	glVertex2i(240,500);
	glVertex2i(240,480);
	glVertex2i(220,480);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(220,540);
	glVertex2i(240,540);
	glVertex2i(240,520);
	glVertex2i(220,520);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(220,580);
	glVertex2i(240,580);
	glVertex2i(240,560);
	glVertex2i(220,560);
	glEnd();
    glBegin(GL_QUADS); ///middle left Windows
	glColor3ub(255,250,240);
	glVertex2i(265,540);
	glVertex2i(285,540);
	glVertex2i(285,520);
	glVertex2i(265,520);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(265,580);
	glVertex2i(285,580);
	glVertex2i(285,560);
	glVertex2i(265,560);
	glEnd();
	glBegin(GL_QUADS); ///door left
	glColor3ub(255,250,240);
	glVertex2i(265,480);
	glVertex2i(285,480);
	glVertex2i(285,420);
	glVertex2i(265,420);
	glEnd();
	glBegin(GL_QUADS); ///top left
	glColor3ub(165,42,42);
	glVertex2i(250,670);
	glVertex2i(400,670);
	glVertex2i(350,620);
	glVertex2i(200,620);
	glEnd();

	glBegin(GL_QUADS); ///front right
	glColor3ub(128,0,0);
	glVertex2i(350,620);
	glVertex2i(450,620);
	glVertex2i(450,420);
	glVertex2i(350,420);
	glEnd();
    glBegin(GL_QUADS);  ///left windows
	glColor3ub(255,250,240);
	glVertex2i(320,460);
	glVertex2i(340,460);
	glVertex2i(340,440);
	glVertex2i(320,440);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(320,500);
	glVertex2i(340,500);
	glVertex2i(340,480);
	glVertex2i(320,480);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(320,540);
	glVertex2i(340,540);
	glVertex2i(340,520);
	glVertex2i(320,520);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(320,580);
	glVertex2i(340,580);
	glVertex2i(340,560);
	glVertex2i(320,560);
	glEnd();
    glBegin(GL_QUADS); ///middle right Windows
	glColor3ub(255,250,240);
	glVertex2i(365,540);
	glVertex2i(385,540);
	glVertex2i(385,520);
	glVertex2i(365,520);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(365,580);
	glVertex2i(385,580);
	glVertex2i(385,560);
	glVertex2i(365,560);
	glEnd();
	glBegin(GL_QUADS); ///door right
	glColor3ub(255,250,240);
	glVertex2i(365,480);
	glVertex2i(385,480);
	glVertex2i(385,420);
	glVertex2i(365,420);
	glEnd();
	glBegin(GL_QUADS); ///right windows
	glColor3ub(255,250,240);
	glVertex2i(410,460);
	glVertex2i(430,460);
	glVertex2i(430,440);
	glVertex2i(410,440);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(410,500);
	glVertex2i(430,500);
	glVertex2i(430,480);
	glVertex2i(410,480);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(410,540);
	glVertex2i(430,540);
	glVertex2i(430,520);
	glVertex2i(410,520);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(410,580);
	glVertex2i(430,580);
	glVertex2i(430,560);
	glVertex2i(410,560);
	glEnd();
	glBegin(GL_QUADS); ///top right
	glColor3ub(165,42,42);
	glVertex2i(350,670);
	glVertex2i(500,670);
	glVertex2i(450,620);
	glVertex2i(300,620);
	glEnd();

    glBegin(GL_QUADS); ///side
	glColor3ub(139,0,0);
	glVertex2i(450,620);
	glVertex2i(500,670);
	glVertex2i(500,470);
	glVertex2i(450,420);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(470,480);
	glVertex2i(490,500);
	glVertex2i(490,480);
	glVertex2i(470,460);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(470,520);
	glVertex2i(490,540);
	glVertex2i(490,520);
	glVertex2i(470,500);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(470,560);
	glVertex2i(490,580);
	glVertex2i(490,560);
	glVertex2i(470,540);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(470,600);
	glVertex2i(490,620);
	glVertex2i(490,600);
	glVertex2i(470,580);
	glEnd();

	///Building 2 orange
	glBegin(GL_QUADS); ///front
	glColor3ub(204,102,0);
	glVertex2i(700,680);
	glVertex2i(800,680);
	glVertex2i(800,420);
	glVertex2i(700,420);
	glEnd();
	glBegin(GL_QUADS); ///left windows
	glColor3ub(255,250,240);
	glVertex2i(720,520);
	glVertex2i(740,520);
	glVertex2i(740,500);
	glVertex2i(720,500);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(720,560);
	glVertex2i(740,560);
	glVertex2i(740,540);
	glVertex2i(720,540);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(720,600);
	glVertex2i(740,600);
	glVertex2i(740,580);
	glVertex2i(720,580);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(720,640);
	glVertex2i(740,640);
	glVertex2i(740,620);
	glVertex2i(720,620);
	glEnd();
	glBegin(GL_QUADS); ///right windows
	glColor3ub(255,250,240);
	glVertex2i(760,520);
	glVertex2i(780,520);
	glVertex2i(780,500);
	glVertex2i(760,500);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(760,560);
	glVertex2i(780,560);
	glVertex2i(780,540);
	glVertex2i(760,540);
	glEnd();
    glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(760,600);
	glVertex2i(780,600);
	glVertex2i(780,580);
	glVertex2i(760,580);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(760,640);
	glVertex2i(780,640);
	glVertex2i(780,620);
	glVertex2i(760,620);
	glEnd();
	glBegin(GL_QUADS);  ///door
	glColor3ub(255,250,240);
	glVertex2i(730,470);
	glVertex2i(770,470);
	glVertex2i(770,420);
	glVertex2i(730,420);
	glEnd();

	glBegin(GL_QUADS); ///side
	glColor3ub(255,128,0);
	glVertex2i(800,680);
	glVertex2i(850,750);
	glVertex2i(850,480);
	glVertex2i(800,420);
	glEnd();
	glBegin(GL_QUADS); ///windows
	glColor3ub(255,250,240);
	glVertex2i(810,460);
	glVertex2i(840,500);
	glVertex2i(840,480);
	glVertex2i(810,440);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(810,500);
	glVertex2i(840,540);
	glVertex2i(840,520);
	glVertex2i(810,480);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(810,540);
	glVertex2i(840,580);
	glVertex2i(840,560);
	glVertex2i(810,520);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(810,580);
	glVertex2i(840,620);
	glVertex2i(840,600);
	glVertex2i(810,560);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,250,240);
	glVertex2i(810,620);
	glVertex2i(840,660);
	glVertex2i(840,640);
	glVertex2i(810,600);
	glEnd();

	glBegin(GL_QUADS); ///top
	glColor3ub(255,178,102);
	glVertex2i(750,750);
	glVertex2i(850,750);
	glVertex2i(800,680);
	glVertex2i(700,680);
	glEnd();

    ///Small building 1 & 2 left
    glPushMatrix();
    glTranslatef(-60, 120, 0.0);
    glColor3ub(182, 163, 240); ///front
    glBegin(GL_QUADS);
    glVertex2i(80,400);
    glVertex2i(130,400);
    glVertex2i(130,300);
    glVertex2i(80,300);
    glEnd();
    glColor3ub(255, 255, 255); ///window
    glBegin(GL_QUADS);
    glVertex2i(90,390);
    glVertex2i(120,390);
    glVertex2i(120,370);
    glVertex2i(90,370);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2i(90,360);
    glVertex2i(120,360);
    glVertex2i(120,340);
    glVertex2i(90,340);
    glEnd();
    glColor3ub(255, 255, 255); ///door
    glBegin(GL_QUADS);
    glVertex2i(95,320);
    glVertex2i(115,320);
    glVertex2i(115,300);
    glVertex2i(95,300);
    glEnd();
    glColor3ub(255, 163, 240); ///side
    glBegin(GL_QUADS);
    glVertex2i(130,400);
    glVertex2i(150,420);
    glVertex2i(150,320);
    glVertex2i(130,300);
    glEnd();
    glColor3ub(255, 255, 240); ///top
    glBegin(GL_QUADS);
    glVertex2i(100,420);
    glVertex2i(150,420);
    glVertex2i(130,400);
    glVertex2i(80,400);
    glEnd();
    glPopMatrix();
    ///Small building 1 & 2 right
    glPushMatrix();
    glTranslatef(-10, 120, 0.0);
    glColor3ub(182, 163, 240); ///front
    glBegin(GL_QUADS);
    glVertex2i(80,400);
    glVertex2i(130,400);
    glVertex2i(130,300);
    glVertex2i(80,300);
    glEnd();
    glColor3ub(255, 255, 255); ///window
    glBegin(GL_QUADS);
    glVertex2i(90,390);
    glVertex2i(120,390);
    glVertex2i(120,370);
    glVertex2i(90,370);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2i(90,360);
    glVertex2i(120,360);
    glVertex2i(120,340);
    glVertex2i(90,340);
    glEnd();
    glColor3ub(255, 255, 255); ///door
    glBegin(GL_QUADS);
    glVertex2i(95,320);
    glVertex2i(115,320);
    glVertex2i(115,300);
    glVertex2i(95,300);
    glEnd();
    glColor3ub(255, 163, 240); ///side
    glBegin(GL_QUADS);
    glVertex2i(130,400);
    glVertex2i(150,420);
    glVertex2i(150,320);
    glVertex2i(130,300);
    glEnd();
    glColor3ub(255, 255, 240); ///top
    glBegin(GL_QUADS);
    glVertex2i(100,420);
    glVertex2i(150,420);
    glVertex2i(130,400);
    glVertex2i(80,400);
    glEnd();
    glPopMatrix();
    ///Small Building 3
    glPushMatrix();
    glTranslatef(530, 170, 0.0);
    glColor3ub(182, 163, 240); ///front
    glBegin(GL_QUADS);
    glVertex2i(80,400);
    glVertex2i(130,400);
    glVertex2i(130,300);
    glVertex2i(80,300);
    glEnd();
    glColor3ub(255, 255, 255); ///window
    glBegin(GL_QUADS);
    glVertex2i(90,390);
    glVertex2i(120,390);
    glVertex2i(120,370);
    glVertex2i(90,370);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2i(90,360);
    glVertex2i(120,360);
    glVertex2i(120,340);
    glVertex2i(90,340);
    glEnd();
    glColor3ub(255, 255, 255); ///door
    glBegin(GL_QUADS);
    glVertex2i(95,320);
    glVertex2i(115,320);
    glVertex2i(115,300);
    glVertex2i(95,300);
    glEnd();
    glColor3ub(255, 163, 240); ///side
    glBegin(GL_QUADS);
    glVertex2i(130,400);
    glVertex2i(150,420);
    glVertex2i(150,320);
    glVertex2i(130,300);
    glEnd();
    glColor3ub(255, 255, 240); ///top
    glBegin(GL_QUADS);
    glVertex2i(100,420);
    glVertex2i(150,420);
    glVertex2i(130,400);
    glVertex2i(80,400);
    glEnd();
    glPopMatrix();
    ///Small Building 4
    glPushMatrix();
    glTranslatef(430, 170, 0.0);
    glColor3ub(182, 163, 240); ///front
    glBegin(GL_QUADS);
    glVertex2i(80,400);
    glVertex2i(130,400);
    glVertex2i(130,300);
    glVertex2i(80,300);
    glEnd();
    glColor3ub(255, 255, 255); ///window
    glBegin(GL_QUADS);
    glVertex2i(90,390);
    glVertex2i(120,390);
    glVertex2i(120,370);
    glVertex2i(90,370);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2i(90,360);
    glVertex2i(120,360);
    glVertex2i(120,340);
    glVertex2i(90,340);
    glEnd();
    glColor3ub(255, 255, 255); ///door
    glBegin(GL_QUADS);
    glVertex2i(95,320);
    glVertex2i(115,320);
    glVertex2i(115,300);
    glVertex2i(95,300);
    glEnd();
    glColor3ub(255, 163, 240); ///side
    glBegin(GL_QUADS);
    glVertex2i(130,400);
    glVertex2i(150,420);
    glVertex2i(150,320);
    glVertex2i(130,300);
    glEnd();
    glColor3ub(255, 255, 240); ///top
    glBegin(GL_QUADS);
    glVertex2i(100,420);
    glVertex2i(150,420);
    glVertex2i(130,400);
    glVertex2i(80,400);
    glEnd();
    glPopMatrix();
    ///Small Building 5
    glPushMatrix();
    glTranslatef(450, 130, 0.0);
    glColor3ub(182, 163, 240); ///front
    glBegin(GL_QUADS);
    glVertex2i(80,400);
    glVertex2i(130,400);
    glVertex2i(130,300);
    glVertex2i(80,300);
    glEnd();
    glColor3ub(255, 255, 255); ///window
    glBegin(GL_QUADS);
    glVertex2i(90,390);
    glVertex2i(120,390);
    glVertex2i(120,370);
    glVertex2i(90,370);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2i(90,360);
    glVertex2i(120,360);
    glVertex2i(120,340);
    glVertex2i(90,340);
    glEnd();
    glColor3ub(255, 255, 255); ///door
    glBegin(GL_QUADS);
    glVertex2i(95,320);
    glVertex2i(115,320);
    glVertex2i(115,300);
    glVertex2i(95,300);
    glEnd();
    glColor3ub(255, 163, 240); ///side
    glBegin(GL_QUADS);
    glVertex2i(130,400);
    glVertex2i(150,420);
    glVertex2i(150,320);
    glVertex2i(130,300);
    glEnd();
    glColor3ub(255, 255, 240); ///top
    glBegin(GL_QUADS);
    glVertex2i(100,420);
    glVertex2i(150,420);
    glVertex2i(130,400);
    glVertex2i(80,400);
    glEnd();
    glPopMatrix();
    ///Small Building 6
    glPushMatrix();
    glTranslatef(800, 190, 0.0);
    glColor3ub(182, 163, 240); ///front
    glBegin(GL_QUADS);
    glVertex2i(80,400);
    glVertex2i(130,400);
    glVertex2i(130,300);
    glVertex2i(80,300);
    glEnd();
    glColor3ub(255, 255, 255); ///window
    glBegin(GL_QUADS);
    glVertex2i(90,390);
    glVertex2i(120,390);
    glVertex2i(120,370);
    glVertex2i(90,370);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2i(90,360);
    glVertex2i(120,360);
    glVertex2i(120,340);
    glVertex2i(90,340);
    glEnd();
    glColor3ub(255, 255, 255); ///door
    glBegin(GL_QUADS);
    glVertex2i(95,320);
    glVertex2i(115,320);
    glVertex2i(115,300);
    glVertex2i(95,300);
    glEnd();
    glColor3ub(255, 163, 240); ///side
    glBegin(GL_QUADS);
    glVertex2i(130,400);
    glVertex2i(150,420);
    glVertex2i(150,320);
    glVertex2i(130,300);
    glEnd();
    glColor3ub(255, 255, 240); ///top
    glBegin(GL_QUADS);
    glVertex2i(100,420);
    glVertex2i(150,420);
    glVertex2i(130,400);
    glVertex2i(80,400);
    glEnd();
    glPopMatrix();
    ///Small Building 7
    glPushMatrix();
    glTranslatef(850, 130, 0.0);
    glColor3ub(182, 163, 240); ///front
    glBegin(GL_QUADS);
    glVertex2i(80,400);
    glVertex2i(130,400);
    glVertex2i(130,300);
    glVertex2i(80,300);
    glEnd();
    glColor3ub(255, 255, 255); ///window
    glBegin(GL_QUADS);
    glVertex2i(90,390);
    glVertex2i(120,390);
    glVertex2i(120,370);
    glVertex2i(90,370);
    glEnd();
    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2i(90,360);
    glVertex2i(120,360);
    glVertex2i(120,340);
    glVertex2i(90,340);
    glEnd();
    glColor3ub(255, 255, 255); ///door
    glBegin(GL_QUADS);
    glVertex2i(95,320);
    glVertex2i(115,320);
    glVertex2i(115,300);
    glVertex2i(95,300);
    glEnd();
    glColor3ub(255, 163, 240); ///side
    glBegin(GL_QUADS);
    glVertex2i(130,400);
    glVertex2i(150,420);
    glVertex2i(150,320);
    glVertex2i(130,300);
    glEnd();
    glColor3ub(255, 255, 240); ///top
    glBegin(GL_QUADS);
    glVertex2i(100,420);
    glVertex2i(150,420);
    glVertex2i(130,400);
    glVertex2i(80,400);
    glEnd();
    glPopMatrix();
    ///*****************Building End*******************

    ///tree 3
    glPushMatrix();
    glScalef(0.50, 0.50, 0.25);
    glTranslatef(500, 600, 0);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();
    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();
	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();
    glPopMatrix();
    ///tree 5
    glPushMatrix();
    glScalef(0.50, 0.50, 0.25);
    glTranslatef(1200, 600, 0);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();
    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();
	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();
    glPopMatrix();
    ///tree 6
    glPushMatrix();
    glScalef(0.50, 0.50, 0.25);
    glTranslatef(1300, 580, 0);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(445, 340);
    glVertex2i(492, 440);
	glVertex2i(540, 340);
	glEnd();
    glColor3f(0, 0.8, 0.5);
	glBegin(GL_TRIANGLES);
    glVertex2i(445, 360);
    glVertex2i(492, 460);
	glVertex2i(540, 360);
	glEnd();
	glColor3f(0.4, 0, 0.5);
	glBegin(GL_QUADS);
    glVertex2i(497, 340);
    glVertex2i(486, 340);
    glVertex2i(486, 250);
    glVertex2i(497, 250);
    glEnd();
    glPopMatrix();

    ///circle tree 1
    glPushMatrix();
    glTranslatef(-30, 60, 0);

    glPushMatrix(); ///left circle
    glTranslatef(190, 438, 0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); ///top circle
    glTranslatef(200, 450, 0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); ///right circle
    glTranslatef(210, 438, 0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();

    glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();
    glPopMatrix();

    ///circle tree 2
    glPushMatrix();
    glTranslatef(460, 60, 0);

    glPushMatrix(); ///left circle
    glTranslatef(190, 438, 0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); ///top circle
    glTranslatef(200, 450, 0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix(); ///right circle
    glTranslatef(210, 438, 0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.5);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();

    glColor3f(0.4, 0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(198, 380);
    glVertex2i(198, 425);
	glVertex2i(203, 425);
	glVertex2i(203, 380);
	glEnd();
    glPopMatrix();

	///*****************************************************************************Road Start**/
    ///Road
    glColor3ub(66, 66, 49);
	glBegin(GL_QUADS);
	glVertex2i(0,400);
	glVertex2i(1000,400);
	glVertex2i(1000,250);
	glVertex2i(0,250);
	glEnd();
    ///Road Stripe 1
    glColor3ub(255, 255, 0);
	glBegin(GL_QUADS);
	glVertex2i(40,350);
	glVertex2i(140,350);
	glVertex2i(120,330);
	glVertex2i(20,330);
	glEnd();
	///Road Stripe 2
	glColor3ub(255, 255, 0);
	glBegin(GL_QUADS);
	glVertex2i(240,350);
	glVertex2i(340,350);
	glVertex2i(320,330);
	glVertex2i(220,330);
	glEnd();
    ///Road Stripe 3
	glColor3ub(255, 255, 0);
	glBegin(GL_QUADS);
	glVertex2i(440,350);
	glVertex2i(540,350);
	glVertex2i(520,330);
	glVertex2i(420,330);
	glEnd();
    ///Road Stripe 4
    glColor3ub(255, 255, 0);
	glBegin(GL_QUADS);
	glVertex2i(640,350);
	glVertex2i(740,350);
	glVertex2i(720,330);
	glVertex2i(620,330);
    ///Road Stripe 5
    glColor3ub(255, 255, 0);
	glBegin(GL_QUADS);
	glVertex2i(840,350);
	glVertex2i(940,350);
	glVertex2i(920,330);
	glVertex2i(820,330);
	glEnd();

	///Railing 1 near soil
	glColor3ub(211,211,211);
	glBegin(GL_LINES);
    glVertex2i(0,410);
    glVertex2i(1000,410);
    glEnd();
    glColor3ub(211,211,211);
	glBegin(GL_LINES);
    glVertex2i(0,420);
    glVertex2i(1000,420);
    glEnd();
    glColor3ub(211,211,211);
	glBegin(GL_LINES);
    glVertex2i(0,430);
    glVertex2i(1000,430);
    glEnd();

    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(5,440);
    glVertex2i(10,440);
    glVertex2i(10,400);
    glVertex2i(5,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(55,440);
    glVertex2i(60,440);
    glVertex2i(60,400);
    glVertex2i(55,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(105,440);
    glVertex2i(110,440);
    glVertex2i(110,400);
    glVertex2i(105,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(155,440);
    glVertex2i(160,440);
    glVertex2i(160,400);
    glVertex2i(155,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(205,440);
    glVertex2i(210,440);
    glVertex2i(210,400);
    glVertex2i(205,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(255,440);
    glVertex2i(260,440);
    glVertex2i(260,400);
    glVertex2i(255,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(305,440);
    glVertex2i(310,440);
    glVertex2i(310,400);
    glVertex2i(305,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(355,440);
    glVertex2i(360,440);
    glVertex2i(360,400);
    glVertex2i(355,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(405,440);
    glVertex2i(410,440);
    glVertex2i(410,400);
    glVertex2i(405,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(455,440);
    glVertex2i(460,440);
    glVertex2i(460,400);
    glVertex2i(455,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(505,440);
    glVertex2i(510,440);
    glVertex2i(510,400);
    glVertex2i(505,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(555,440);
    glVertex2i(560,440);
    glVertex2i(560,400);
    glVertex2i(555,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(605,440);
    glVertex2i(610,440);
    glVertex2i(610,400);
    glVertex2i(605,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(655,440);
    glVertex2i(660,440);
    glVertex2i(660,400);
    glVertex2i(655,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(705,440);
    glVertex2i(710,440);
    glVertex2i(710,400);
    glVertex2i(705,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(755,440);
    glVertex2i(760,440);
    glVertex2i(760,400);
    glVertex2i(755,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(805,440);
    glVertex2i(810,440);
    glVertex2i(810,400);
    glVertex2i(805,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(855,440);
    glVertex2i(860,440);
    glVertex2i(860,400);
    glVertex2i(855,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(905,440);
    glVertex2i(910,440);
    glVertex2i(910,400);
    glVertex2i(905,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(955,440);
    glVertex2i(960,440);
    glVertex2i(960,400);
    glVertex2i(955,400);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(995,440);
    glVertex2i(999,440);
    glVertex2i(999,400);
    glVertex2i(995,400);
    glEnd();

    glColor3ub(128,128,128); ///railing border
    glBegin(GL_QUADS);
    glVertex2i(0,400);
    glVertex2i(1000,400);
    glVertex2i(1000,390);
    glVertex2i(0,390);
    glEnd();
	///Railing 2 near river
	glColor3ub(211,211,211);
	glBegin(GL_LINES);
    glVertex2i(0,260);
    glVertex2i(1000,260);
    glEnd();
    glColor3ub(211,211,211);
	glBegin(GL_LINES);
    glVertex2i(0,270);
    glVertex2i(1000,270);
    glEnd();
    glColor3ub(211,211,211);
	glBegin(GL_LINES);
    glVertex2i(0,280);
    glVertex2i(1000,280);
    glEnd();

    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(5,290);
    glVertex2i(10,290);
    glVertex2i(10,250);
    glVertex2i(5,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(55,290);
    glVertex2i(60,290);
    glVertex2i(60,250);
    glVertex2i(55,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(105,290);
    glVertex2i(110,290);
    glVertex2i(110,250);
    glVertex2i(105,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(155,290);
    glVertex2i(160,290);
    glVertex2i(160,250);
    glVertex2i(155,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(205,290);
    glVertex2i(210,290);
    glVertex2i(210,250);
    glVertex2i(205,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(255,290);
    glVertex2i(260,290);
    glVertex2i(260,250);
    glVertex2i(255,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(305,290);
    glVertex2i(310,290);
    glVertex2i(310,250);
    glVertex2i(305,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(355,290);
    glVertex2i(360,290);
    glVertex2i(360,250);
    glVertex2i(355,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(405,290);
    glVertex2i(410,290);
    glVertex2i(410,250);
    glVertex2i(405,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(455,290);
    glVertex2i(460,290);
    glVertex2i(460,250);
    glVertex2i(455,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(505,290);
    glVertex2i(510,290);
    glVertex2i(510,250);
    glVertex2i(505,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(555,290);
    glVertex2i(560,290);
    glVertex2i(560,250);
    glVertex2i(555,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(605,290);
    glVertex2i(610,290);
    glVertex2i(610,250);
    glVertex2i(605,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(655,290);
    glVertex2i(660,290);
    glVertex2i(660,250);
    glVertex2i(655,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(705,290);
    glVertex2i(710,290);
    glVertex2i(710,250);
    glVertex2i(705,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(755,290);
    glVertex2i(760,290);
    glVertex2i(760,250);
    glVertex2i(755,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(805,290);
    glVertex2i(810,290);
    glVertex2i(810,250);
    glVertex2i(805,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(855,290);
    glVertex2i(860,290);
    glVertex2i(860,250);
    glVertex2i(855,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(905,290);
    glVertex2i(910,290);
    glVertex2i(910,250);
    glVertex2i(905,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(955,290);
    glVertex2i(960,290);
    glVertex2i(960,250);
    glVertex2i(955,250);
    glEnd();
    glColor3ub(211,211,211);
    glBegin(GL_QUADS);
    glVertex2i(995,290);
    glVertex2i(999,290);
    glVertex2i(999,250);
    glVertex2i(995,250);
    glEnd();

    glColor3ub(128,128,128); ///railing border
    glBegin(GL_QUADS);
    glVertex2i(0,250);
    glVertex2i(1000,250);
    glVertex2i(1000,240);
    glVertex2i(0,240);
    glEnd();

    ///Vehicle 2
    glPushMatrix();
	glTranslatef(-vehicle, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(800, 140, 0.0);
    glColor3ub(211,0,211); ///lower body
    glBegin(GL_QUADS);
    glVertex2i(100,250);
    glVertex2i(200,250);
    glVertex2i(200,220);
    glVertex2i(100,220);
    glEnd();
    glColor3ub(211,0,211); ///upper body
    glBegin(GL_QUADS);
    glVertex2i(140,270);
    glVertex2i(160,270);
    glVertex2i(180,250);
    glVertex2i(120,250);
    glEnd();
    glColor3ub(255,255,255); ///window right
    glBegin(GL_QUADS);
    glVertex2i(152,268);
    glVertex2i(158,268);
    glVertex2i(175,252);
    glVertex2i(152,252);
    glEnd();
    glColor3ub(255,255,255); ///window left
    glBegin(GL_QUADS);
    glVertex2i(142,268);
    glVertex2i(148,268);
    glVertex2i(148,252);
    glVertex2i(125,252);
    glEnd();
    glPushMatrix(); ///tire 1
    glTranslatef(120, 220, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(50, 120, 223);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPushMatrix(); ///tire 2
    glTranslatef(180, 220, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(50, 120, 223);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    ///Vehicle 1
    glPushMatrix();
	glTranslatef(-vehicle, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(20, 80, 0.0);
    glColor3ub(211,0,0); ///lower body
    glBegin(GL_QUADS);
    glVertex2i(100,250);
    glVertex2i(200,250);
    glVertex2i(200,220);
    glVertex2i(100,220);
    glEnd();
    glColor3ub(211,0,0); ///upper body
    glBegin(GL_QUADS);
    glVertex2i(140,270);
    glVertex2i(160,270);
    glVertex2i(180,250);
    glVertex2i(120,250);
    glEnd();
    glColor3ub(255,255,255); ///window right
    glBegin(GL_QUADS);
    glVertex2i(152,268);
    glVertex2i(158,268);
    glVertex2i(175,252);
    glVertex2i(152,252);
    glEnd();
    glColor3ub(255,255,255); ///window left
    glBegin(GL_QUADS);
    glVertex2i(142,268);
    glVertex2i(148,268);
    glVertex2i(148,252);
    glVertex2i(125,252);
    glEnd();
    glPushMatrix(); ///tire 1
    glTranslatef(120, 220, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(225, 245, 93);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPushMatrix(); ///tire 2
    glTranslatef(180, 220, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(225, 245, 93);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();




    ///*****************************************************************************River Start**/
    ///River
    glColor3ub(152,222,245);
    glBegin(GL_QUADS);
    glVertex2i(0,240);
    glVertex2i(1000, 240);
	glVertex2i(1000, 0);
	glVertex2i(0, 0);
	glEnd();

	///Ship 1
    glPushMatrix();
	glTranslatef(boat, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(500,75, 0);
    glColor3ub(188,121,255);
    glBegin(GL_QUADS); ///body
    glVertex2i(70,70);
    glVertex2i(330,70);
	glVertex2i(300,20);
	glVertex2i(100,20);
	glEnd();
	glColor3ub(255,0,188); ///low
	glBegin(GL_QUADS);
    glVertex2i(90,90);
    glVertex2i(310,90);
	glVertex2i(310,70);
	glVertex2i(90,70);
	glEnd();
	glColor3ub(255,122,188);  ///high
	glBegin(GL_QUADS);
    glVertex2i(110,150);
    glVertex2i(290,150);
	glVertex2i(290,90);
	glVertex2i(110,90);
	glEnd();
	glColor3ub(255,255,255); ///window low
	glBegin(GL_QUADS);
    glVertex2i(115,115);
    glVertex2i(135,115);
	glVertex2i(135,95);
	glVertex2i(115,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(140,115);
    glVertex2i(160,115);
	glVertex2i(160,95);
	glVertex2i(140,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(165,115);
    glVertex2i(185,115);
	glVertex2i(185,95);
	glVertex2i(165,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(190,115);
    glVertex2i(210,115);
	glVertex2i(210,95);
	glVertex2i(190,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(215,115);
    glVertex2i(235,115);
	glVertex2i(235,95);
	glVertex2i(215,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(240,115);
    glVertex2i(260,115);
	glVertex2i(260,95);
	glVertex2i(240,95);
	glEnd();
    glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(265,115);
    glVertex2i(285,115);
	glVertex2i(285,95);
	glVertex2i(265,95);
	glEnd();
    glColor3ub(255,255,255); ///window high
	glBegin(GL_QUADS);
    glVertex2i(115,145);
    glVertex2i(135,145);
	glVertex2i(135,125);
	glVertex2i(115,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(140,145);
    glVertex2i(160,145);
	glVertex2i(160,125);
	glVertex2i(140,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(165,145);
    glVertex2i(185,145);
	glVertex2i(185,125);
	glVertex2i(165,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(190,145);
    glVertex2i(210,145);
	glVertex2i(210,125);
	glVertex2i(190,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(215,145);
    glVertex2i(235,145);
	glVertex2i(235,125);
	glVertex2i(215,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(240,145);
    glVertex2i(260,145);
	glVertex2i(260,125);
	glVertex2i(240,125);
	glEnd();
    glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(265,145);
    glVertex2i(285,145);
	glVertex2i(285,125);
	glVertex2i(265,125);
	glEnd();
	glColor3ub(255,14,188); ///smoker
	glBegin(GL_QUADS);
    glVertex2i(153,190);
    glVertex2i(167,190);
	glVertex2i(170,150);
	glVertex2i(150,150);
	glEnd();
    glPopMatrix();
    glPopMatrix();

    ///Boat 1 left
    glPushMatrix();
	glTranslatef(-boat, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(500,40,0);
    glColor3f(0.423, 0.329, 0.588);
    glBegin(GL_QUADS);
    glVertex2i(130,40);
    glVertex2i(110,60);
	glVertex2i(190,60);
	glVertex2i(170,40);
	glEnd();
	glColor3f(0.329, 0.517, 0.588);
    glBegin(GL_QUADS);
    glVertex2i(150,80);
    glVertex2i(170,80);
	glVertex2i(170,60);
	glVertex2i(150,60);
	glEnd();
    glPopMatrix();
    glPopMatrix();
    ///Boat 1 right
    glPushMatrix();
	glTranslatef(boat, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(80, 15, 0);
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(130, 40);
    glVertex2i(110, 60);
	glVertex2i(190, 60);
	glVertex2i(170, 40);
	glEnd();
	glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
    glVertex2i(130, 80);
    glVertex2i(150, 80);
	glVertex2i(150, 60);
	glVertex2i(130, 60);
	glEnd();
    glPopMatrix();
    glPopMatrix();
    ///Boat 2 right
    glPushMatrix();
	glTranslatef(boat, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(300, 15, 0);
    glColor3f(0.5, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2i(130, 40);
    glVertex2i(110, 60);
	glVertex2i(190, 60);
	glVertex2i(170, 40);
	glEnd();
	glColor3f(0.5, 0.0, 0.5);
    glBegin(GL_QUADS);
    glVertex2i(130, 80);
    glVertex2i(150, 80);
	glVertex2i(150, 60);
	glVertex2i(130, 60);
	glEnd();
    glPopMatrix();
    glPopMatrix();
    ///Boat 3 right
    glPushMatrix();
	glTranslatef(boat, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(500, 0, 0);
    glColor3f(1, 0, 1);
    glBegin(GL_QUADS);
    glVertex2i(130, 40);
    glVertex2i(110, 60);
	glVertex2i(190, 60);
	glVertex2i(170, 40);
	glEnd();
	glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
    glVertex2i(130, 80);
    glVertex2i(150, 80);
	glVertex2i(150, 60);
	glVertex2i(130, 60);
	glEnd();
    glPopMatrix();
    glPopMatrix();
    ///Boat 2 left
    glPushMatrix();
	glTranslatef(-boat, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(700, -30, 0);
    glColor3f(0.247, 0.505, 0.231);
    glBegin(GL_QUADS);
    glVertex2i(130, 40);
    glVertex2i(100, 65);
	glVertex2i(220, 65);
	glVertex2i(190, 40);
	glEnd();
	glColor3f(0.145, 0.156, 0.337);
    glBegin(GL_QUADS);
    glVertex2i(190, 88);
    glVertex2i(150, 88);
	glVertex2i(150, 65);
	glVertex2i(190, 65);
	glEnd();
    glPopMatrix();
    glPopMatrix();

	///Ship 2
    glPushMatrix();
	glTranslatef(-boat, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(200,0, 0);
    glColor3ub(188,12,255);
    glBegin(GL_QUADS); ///body
    glVertex2i(70,70);
    glVertex2i(330,70);
	glVertex2i(300,20);
	glVertex2i(100,20);
	glEnd();
	glColor3ub(255,150,188); ///low
	glBegin(GL_QUADS);
    glVertex2i(90,90);
    glVertex2i(310,90);
	glVertex2i(310,70);
	glVertex2i(90,70);
	glEnd();
	glColor3ub(0,122,188);  ///high
	glBegin(GL_QUADS);
    glVertex2i(110,150);
    glVertex2i(290,150);
	glVertex2i(290,90);
	glVertex2i(110,90);
	glEnd();
	glColor3ub(255,255,255); ///window low
	glBegin(GL_QUADS);
    glVertex2i(115,115);
    glVertex2i(135,115);
	glVertex2i(135,95);
	glVertex2i(115,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(140,115);
    glVertex2i(160,115);
	glVertex2i(160,95);
	glVertex2i(140,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(165,115);
    glVertex2i(185,115);
	glVertex2i(185,95);
	glVertex2i(165,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(190,115);
    glVertex2i(210,115);
	glVertex2i(210,95);
	glVertex2i(190,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(215,115);
    glVertex2i(235,115);
	glVertex2i(235,95);
	glVertex2i(215,95);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(240,115);
    glVertex2i(260,115);
	glVertex2i(260,95);
	glVertex2i(240,95);
	glEnd();
    glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(265,115);
    glVertex2i(285,115);
	glVertex2i(285,95);
	glVertex2i(265,95);
	glEnd();
    glColor3ub(255,255,255); ///window high
	glBegin(GL_QUADS);
    glVertex2i(115,145);
    glVertex2i(135,145);
	glVertex2i(135,125);
	glVertex2i(115,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(140,145);
    glVertex2i(160,145);
	glVertex2i(160,125);
	glVertex2i(140,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(165,145);
    glVertex2i(185,145);
	glVertex2i(185,125);
	glVertex2i(165,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(190,145);
    glVertex2i(210,145);
	glVertex2i(210,125);
	glVertex2i(190,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(215,145);
    glVertex2i(235,145);
	glVertex2i(235,125);
	glVertex2i(215,125);
	glEnd();
	glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(240,145);
    glVertex2i(260,145);
	glVertex2i(260,125);
	glVertex2i(240,125);
	glEnd();
    glColor3ub(255,255,255);
	glBegin(GL_QUADS);
    glVertex2i(265,145);
    glVertex2i(285,145);
	glVertex2i(285,125);
	glVertex2i(265,125);
	glEnd();
	glColor3ub(255,14,188); ///smoker
	glBegin(GL_QUADS);
    glVertex2i(243,190);
    glVertex2i(257,190);
	glVertex2i(260,150);
	glVertex2i(240,150);
	glEnd();
    glPopMatrix();
    glPopMatrix();





    ///**********************END DISPLAY****************///
    glFlush();
	glutSwapBuffers();
}

void update(int value) {

	boat += 1.0f;
	if (boat > 1000)
    {
        boat -= 1700;
    }

    vehicle += 3.0f;
	if (vehicle > 1000)
    {
        vehicle -= 1300;
    }

    plane += 3.0f;
	if (plane > 1000)
    {
        plane -= 1300;
    }

     cloud += 1.0f;
	if (cloud > 1000)
    {
        cloud -= 1700;
    }

	glutPostRedisplay(); //Tell GLUT that the display has changed
	glutTimerFunc(25, update, 0);
}

void Rain(int value){

if(rainTime){

    rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1000; y%=1000;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();
    }
}


void Night(int value){

if(nightTime){
	glPushMatrix(); ///Moon
    glTranslatef(150, 850, 0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();

    glutTimerFunc(5, Night, 0);
    glFlush();
    }
}


void myKeyboard(unsigned char key, int x, int y){
	switch (key)
	{

    case 'r':
        rainTime = true;
        Rain(rain);
        break;

    case 't':
        rainTime = false;
        break;

    case 'n':
        nightTime = true;
        Night(night);
        glClearColor(0.0,0.0,0.0,0.0);
        break;

    case 'm':
        nightTime = false;
        glClearColor(0.0,0.5,0.8,1.0);
        break;

    case 27: /// ESC key
        exit(0);
        break;

	default:
	break;
	}
}


int main(int argc,char **argv)
{
    cout << endl << "*********** Busy City ********************" << endl << endl;

    cout << "Press R : For Rain " << endl << endl;
    cout << "Press T : For Stop Rain" << endl << endl;

    cout << "Press N : For Night " << endl << endl;
    cout << "Press M : For Day" << endl << endl;


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("Busy City");
	glutDisplayFunc(display);
	glutKeyboardFunc(myKeyboard);
	glutTimerFunc(25, update, 0);
	init();
	glutMainLoop();
	return 0;
}
