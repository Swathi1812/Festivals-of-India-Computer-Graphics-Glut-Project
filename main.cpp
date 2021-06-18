#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <mmsystem.h>

GLint x=0,y=0;
int window=0;
int win;
void window0();
void window1();
void window2();
void window3();
void window4();
void window5();
void window6();
void window7();
void window8();
void window9();
void window10();
void window11();
void myReshape(int w,int h);

GLfloat vertices1[][3]={{-0.075,0.525,-0.075},{-0.075,0.675,-0.075},{0.075,0.675,-0.075},{0.075,0.525,-0.075},
{-0.075,0.525,0.075},{-0.075,0.675,0.075},{0.075,0.675,0.075},{0.075,0.525,0.075}};
GLfloat vertices2[][3]={{-0.075,-0.075,-0.075},{-0.075,0.075,-0.075},{0.075,0.075,-0.075},{0.075,-0.075,-0.075},
{-0.075,-0.075,0.075},{-0.075,0.075,0.075},{0.075,0.075,0.075},{0.075,-0.075,0.075}};
GLfloat vertices3[][3]={{-0.075,-0.525,-0.075},{-0.075,-0.675,-0.075},{0.075,-0.675,-0.075},{0.075,-0.525,-0.075},
{-0.075,-0.525,0.075},{-0.075,-0.675,0.075},{0.075,-0.675,0.075},{0.075,-0.525,0.075}};

GLfloat colors[][3]={{0.0,0.0,0.0},{0.0,1.0,0.0},{0.0,1.0,1.0},{0.0,0.0,1.0},{1.0,0.0,0.0},{1.0,1.0,0.0},{1.0,1.0,1.0},{1.0,0.0,1.0}};


void setup()
{
    glClearColor(0.0,0.0,0.0,0.0);
}

void bitmap_output(int x,int y,int z,char *str,void *font)
{
    int len,i;
    glRasterPos3f(x,y,0);
    len=(int)strlen(str);
    for(i=0;i<len;i++)
        glutBitmapCharacter(font,str[i]);
}


void display0()
{
    glClear(GL_COLOR_BUFFER_BIT );
    glPushMatrix();
    glColor3f(0.80,0.0,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(1.0,1.0);
    glColor3f(0.90,0.4,0.0);
    glVertex2f(1.0,-1.0);
    glColor3f(0.60,0.10,0.0);
    glVertex2f(-1.0,-1.0);
    glColor3f(0.90,0.0,0.40);
    glVertex2f(-1.0,1.0);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(1.25,-0.85,0.0);
    glVertex3f(1.25,-0.95,0.0);
    glVertex3f(1.55,-0.95,0.0);
    glVertex3f(1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(1.31,-0.92,0.0);
    bitmap_output(0,0,0,"NEXT",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.6,0.8,0);
    bitmap_output(0,0,0,"COMPUTER GRAPHICS MINI PROJECT ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.5,0.6,0);
    bitmap_output(0,0,0,"FESTIVALS OF INDIA",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.0,0.5,0);
    bitmap_output(0,0,0,"************************************************************",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7,0.1,0);
    bitmap_output(0,0,0,"SUBMITTED BY:",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glPushMatrix();
    glTranslatef(-0.7,0.08,0);
    bitmap_output(0,0,0,"________________",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7,-0.1,0);
    bitmap_output(0,0,0,"Swathi Mithanthaya",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7,-0.2,0);
    bitmap_output(0,0,0,"U Raksha Shenoy",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.2,-0.1,0);
    bitmap_output(0,0,0,"4NM18CS200",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.2,-0.2,0);
    bitmap_output(0,0,0,"4NM18CS204",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7,-0.3,0);
    bitmap_output(0,0,0,"Sushmitha M Achar",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.2,-0.3,0);
    bitmap_output(0,0,0,"4NM18CS198",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7,-0.4,0);
    bitmap_output(0,0,0,"UNDER THE GUIDANCE OF:",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7,-0.42,0);
    bitmap_output(0,0,0,"________________________",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7,-0.6,0);
    bitmap_output(0,0,0,"Mr.Pradeep Kanchan",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7,-0.7,0);
    bitmap_output(0,0,0,"Assistant Professor Gd III",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.7,-0.8,0);
    bitmap_output(0,0,0,"Department of CSE, NMAMIT",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPopMatrix();

    glFlush();
    glPopMatrix();
    glutPostRedisplay();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT );
    glPushMatrix();
    glColor3f(0.80,0.0,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(1.0,1.0);
    glColor3f(0.90,0.4,0.0);
    glVertex2f(1.0,-1.0);
    glColor3f(0.60,0.10,0.0);
    glVertex2f(-1.0,-1.0);
    glColor3f(0.90,0.0,0.40);
    glVertex2f(-1.0,1.0);
    glEnd();

    glColor3f(1.0,1.0,1.0);


    glPushMatrix();
    glTranslatef(-0.6,0.8,0);
    bitmap_output(0,0,0,"Press c for Christmas ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.6,0.7,0);
    bitmap_output(0,0,0,"Press k for Kumbha Mela",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.6,0.6,0);
    bitmap_output(0,0,0,"Press g for Guru poornima",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.6,0.5,0);
    bitmap_output(0,0,0,"Press m for Makar Sankranthi",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glPushMatrix();
    glTranslatef(-0.6,0.4,0);
    bitmap_output(0,0,0,"Press d for Diwali",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glFlush();
    glPopMatrix();
    glutPostRedisplay();
}

void display1()
{
    glClear(GL_COLOR_BUFFER_BIT );
    glPushMatrix();
    glColor3f(0.80,0.0,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(1.0,1.0);
    glColor3f(0.90,0.4,0.0);
    glVertex2f(1.0,-1.0);
    glColor3f(0.60,0.10,0.0);
    glVertex2f(-1.0,-1.0);
    glColor3f(0.90,0.0,0.40);
    glVertex2f(-1.0,1.0);
    glEnd();

    glColor3f(1.0,1.0,1.0);
    /*glBegin(GL_LINE_LOOP);
    glVertex3f(1.25,-0.85,0.0);
    glVertex3f(1.25,-0.95,0.0);
    glVertex3f(1.55,-0.95,0.0);
    glVertex3f(1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(1.31,-0.92,0.0);
    bitmap_output(0,0,0,"NEXT",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.25,-0.85,0.0);
    glVertex3f(-1.25,-0.95,0.0);
    glVertex3f(-1.55,-0.95,0.0);
    glVertex3f(-1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(-1.49,-0.92,0.0);
    bitmap_output(0,0,0,"BACK",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
*/
    glPushMatrix();
    glTranslatef(-0.25,0.8,0);
    bitmap_output(0,0,0,"Merry Christmas",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0,-0.85,0.0);
    glVertex3f(0.0,-0.95,0.0);
    glVertex3f(0.2,-0.95,0.0);
    glVertex3f(0.2,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0,-0.92,0.0);
    bitmap_output(0,0,0,"Click",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-1.0,0.6,0);
    bitmap_output(0,0,0,"************************************************************",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.4,0);
    bitmap_output(0,0,0,"Christmas is celebrated on December 25 every year, and it is a",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.3,0);
    bitmap_output(0,0,0,"cultural festival of the Christian community It marks the birth ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.2,0);
    bitmap_output(0,0,0,"of Jesus to Mother Mary It is said that Jesus was born in a stable",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.1,0);
    bitmap_output(0,0,0,"and was a good shepherd. The life of Jesus was one of hardships",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
      glPushMatrix();
    glTranslatef(-0.8,0,0);
    bitmap_output(0,0,0,"and sacrifices, and Christmas aims to acknowledge that fact ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
      glPushMatrix();
    glTranslatef(-0.8,-0.1,0);
    bitmap_output(0,0,0,"Christmas is a public holiday in all the countries and is celebrated",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
      glPushMatrix();
    glTranslatef(-0.8,-0.2,0);
    bitmap_output(0,0,0,"by non-Christians too as it is a festival that integrates people of ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
      glPushMatrix();
    glTranslatef(-0.8,-0.3,0);
    bitmap_output(0,0,0,"all cultures The central theme of Christmas celebrations is to have",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
      glPushMatrix();
    glTranslatef(-0.8,-0.4,0);
    bitmap_output(0,0,0,"a spirit of sharing, kindness, and empathy towards one another",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
      glPushMatrix();
    glTranslatef(-0.8,-0.6,0);
    bitmap_output(0,0,0,"Here is the simple simulation of christmas festival,",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.7,0);
    bitmap_output(0,0,0,"Press on click to view the festival:",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();


    glFlush();
    glPopMatrix();
    glutPostRedisplay();
}

void display2()
{
    glClear(GL_COLOR_BUFFER_BIT );
    glPushMatrix();
    glColor3f(0.80,0.0,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(1.0,1.0);
    glColor3f(0.90,0.4,0.0);
    glVertex2f(1.0,-1.0);
    glColor3f(0.60,0.10,0.0);
    glVertex2f(-1.0,-1.0);
    glColor3f(0.90,0.0,0.40);
    glVertex2f(-1.0,1.0);
    glEnd();

    glColor3f(1.0,1.0,1.0);


   /* glPushMatrix();
    glTranslatef(1.31,-0.92,0.0);
    bitmap_output(0,0,0,"NEXT",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.25,-0.85,0.0);
    glVertex3f(-1.25,-0.95,0.0);
    glVertex3f(-1.55,-0.95,0.0);
    glVertex3f(-1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(-1.49,-0.92,0.0);
    bitmap_output(0,0,0,"BACK",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
*/
    glPushMatrix();
    glTranslatef(-0.25,0.8,0);
    bitmap_output(0,0,0,"Happy Diwali",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0,-0.85,0.0);
    glVertex3f(0.0,-0.95,0.0);
    glVertex3f(0.2,-0.95,0.0);
    glVertex3f(0.2,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0,-0.92,0.0);
    bitmap_output(0,0,0,"Click",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.0,0.6,0);
    bitmap_output(0,0,0,"************************************************************",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.4,0);
    bitmap_output(0,0,0,"Diwali is one of the most important festivals in Hindu culture  ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.3,0);
    bitmap_output(0,0,0,"It is one of the most important holidays in the Hindu calendar",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.2,0);
    bitmap_output(0,0,0,"Diwali gets its name from the Sanskrit word ‘Deepavali’ that ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.1,0);
    bitmap_output(0,0,0,"roughly translates to ‘a row of lights'It is a great time to have ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0,0);
    bitmap_output(0,0,0,"fun with your family and friends People decorate their houses with ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.1,0);
    bitmap_output(0,0,0,"oil lamps and fairy lights at night They cook delicious food and",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.2,0);
    bitmap_output(0,0,0,"share them with their neighbors. It is a festival of lights; every  ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.3,0);
    bitmap_output(0,0,0,"street is lit up with beautiful lights & people burst crackers and ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.4,0);
    bitmap_output(0,0,0,"celebrate it joyfully It spreads cheer and joy among people and ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.5,0);
    bitmap_output(0,0,0,"makes them fall in love with their culture",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.7,0);
    bitmap_output(0,0,0,"Here is the simple simulation of Diwali Festival,",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.8,0);
    bitmap_output(0,0,0,"Press on click to view the festival:",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();


    glFlush();
    glPopMatrix();
    glutPostRedisplay();
}

void display3()
{
    glClear(GL_COLOR_BUFFER_BIT );
    glPushMatrix();
    glColor3f(0.80,0.0,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(1.0,1.0);
    glColor3f(0.90,0.4,0.0);
    glVertex2f(1.0,-1.0);
    glColor3f(0.60,0.10,0.0);
    glVertex2f(-1.0,-1.0);
    glColor3f(0.90,0.0,0.40);
    glVertex2f(-1.0,1.0);
    glEnd();
    glColor3f(1.0,1.0,1.0);

    /*
    glBegin(GL_LINE_LOOP);
    glVertex3f(1.25,-0.85,0.0);
    glVertex3f(1.25,-0.95,0.0);
    glVertex3f(1.55,-0.95,0.0);
    glVertex3f(1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(1.31,-0.92,0.0);
    bitmap_output(0,0,0,"NEXT",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.25,-0.85,0.0);
    glVertex3f(-1.25,-0.95,0.0);
    glVertex3f(-1.55,-0.95,0.0);
    glVertex3f(-1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(-1.49,-0.92,0.0);
    bitmap_output(0,0,0,"BACK",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
*/
    glPushMatrix();
    glTranslatef(-0.25,0.8,0);
    bitmap_output(0,0,0,"Makara Sankranthi",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0,-0.85,0.0);
    glVertex3f(0.0,-0.95,0.0);
    glVertex3f(0.2,-0.95,0.0);
    glVertex3f(0.2,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0,-0.92,0.0);
    bitmap_output(0,0,0,"Click",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.0,0.6,0);
    bitmap_output(0,0,0,"************************************************************",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.4,0);
    bitmap_output(0,0,0,"Makar Sankranti is the celebration of the harvest festival",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.3,0);
    bitmap_output(0,0,0,"We all know that spring is the most pleasant of all seasons",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.2,0);
    bitmap_output(0,0,0,"It is accompanied by pleasant weather, calm winds, and a sunny",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.1,0);
    bitmap_output(0,0,0,"but not scorching weather All of these reasons together make ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0,0);
    bitmap_output(0,0,0,"spring the perfect season to grow crops and sustain high crop yield",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.1,0);
    bitmap_output(0,0,0,"The fest is also called the Kite festival in several parts of our ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.2,0);
    bitmap_output(0,0,0,"country India Kites are flown on this day to honor the Sun God ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.3,0);
    bitmap_output(0,0,0,"It is celebrated a day after the Lohri festival celebrated mostly in",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.4,0);
    bitmap_output(0,0,0,"Punjab and Chandigarh Sweets and clothes are exchanged ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.5,0);
    bitmap_output(0,0,0,"among families",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.7,0);
    bitmap_output(0,0,0,"Here is the simple simulation of Makar Sankranthi(Kite Festival),",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.8,0);
    bitmap_output(0,0,0,"Press on click to view the festival:",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();


    glFlush();
    glPopMatrix();
    glutPostRedisplay();
}
void display4()
{
    glClear(GL_COLOR_BUFFER_BIT );
    glPushMatrix();
    glColor3f(0.80,0.0,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(1.0,1.0);
    glColor3f(0.90,0.4,0.0);
    glVertex2f(1.0,-1.0);
    glColor3f(0.60,0.10,0.0);
    glVertex2f(-1.0,-1.0);
    glColor3f(0.90,0.0,0.40);
    glVertex2f(-1.0,1.0);
    glEnd();
     glColor3f(1.0,1.0,1.0);
/*

    glBegin(GL_LINE_LOOP);
    glVertex3f(1.25,-0.85,0.0);
    glVertex3f(1.25,-0.95,0.0);
    glVertex3f(1.55,-0.95,0.0);
    glVertex3f(1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(1.31,-0.92,0.0);
    bitmap_output(0,0,0,"NEXT",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.25,-0.85,0.0);
    glVertex3f(-1.25,-0.95,0.0);
    glVertex3f(-1.55,-0.95,0.0);
    glVertex3f(-1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(-1.49,-0.92,0.0);
    bitmap_output(0,0,0,"BACK",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
*/
    glPushMatrix();
    glTranslatef(-0.25,0.8,0);
    bitmap_output(0,0,0,"Kumbha Mela",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0,-0.85,0.0);
    glVertex3f(0.0,-0.95,0.0);
    glVertex3f(0.2,-0.95,0.0);
    glVertex3f(0.2,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0,-0.92,0.0);
    bitmap_output(0,0,0,"Click",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.0,0.6,0);
    bitmap_output(0,0,0,"************************************************************",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.4,0);
    bitmap_output(0,0,0,"Kumbh Mela is one of the biggest and peaceful gatherings of ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.3,0);
    bitmap_output(0,0,0,"Hindu pilgrims on the banks of holy rivers in India. ‘Ardh Kumbh’",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.2,0);
    bitmap_output(0,0,0,"is held at every 6 year and ‘Kumbh’ is held at every 12 years",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.1,0);
    bitmap_output(0,0,0,"Lakhs of Hindu devotees take baths in the sacred water of river ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0,0);
    bitmap_output(0,0,0,"Yamuna, Ganga, Godavari and Shipra at four religious places in a ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.1,0);
    bitmap_output(0,0,0,"hope to attain salvation.The date and length of Kumbh Mela ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.2,0);
    bitmap_output(0,0,0,"celebration is decided by astronomy basis the zodiac locations of  ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.3,0);
    bitmap_output(0,0,0,"planets Jupiter, Sun and Moon  In 2019 Kumbh Mela celebration",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.4,0);
    bitmap_output(0,0,0," was held for 55 days which began on 14th January and ended on ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.5,0);
    bitmap_output(0,0,0,"10th March.Maha Kumbh comes once in 144 years",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.7,0);
    bitmap_output(0,0,0,"Here is the simple simulation of Kumbh mela,",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.8,0);
    bitmap_output(0,0,0,"Press on click to view the festival:",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();


    glFlush();
    glPopMatrix();
    glutPostRedisplay();
}
void display5()
{
    glClear(GL_COLOR_BUFFER_BIT );
    glPushMatrix();
    glColor3f(0.80,0.0,0.6);
    glBegin(GL_POLYGON);
    glVertex2f(1.0,1.0);
    glColor3f(0.90,0.4,0.0);
    glVertex2f(1.0,-1.0);
    glColor3f(0.60,0.10,0.0);
    glVertex2f(-1.0,-1.0);
    glColor3f(0.90,0.0,0.40);
    glVertex2f(-1.0,1.0);
    glEnd();
     glColor3f(1.0,1.0,1.0);

    /*glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(1.25,-0.85,0.0);
    glVertex3f(1.25,-0.95,0.0);
    glVertex3f(1.55,-0.95,0.0);
    glVertex3f(1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(1.31,-0.92,0.0);
    bitmap_output(0,0,0,"NEXT",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();


    glBegin(GL_LINE_LOOP);
    glVertex3f(-1.25,-0.85,0.0);
    glVertex3f(-1.25,-0.95,0.0);
    glVertex3f(-1.55,-0.95,0.0);
    glVertex3f(-1.55,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(-1.49,-0.92,0.0);
    bitmap_output(0,0,0,"BACK",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
*/
    glPushMatrix();
    glTranslatef(-0.25,0.8,0);
    bitmap_output(0,0,0,"Guru Poornima",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0,-0.85,0.0);
    glVertex3f(0.0,-0.95,0.0);
    glVertex3f(0.2,-0.95,0.0);
    glVertex3f(0.2,-0.85,0.0);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0,-0.92,0.0);
    bitmap_output(0,0,0,"Click",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.0,0.6,0);
    bitmap_output(0,0,0,"************************************************************",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.4,0);
    bitmap_output(0,0,0,"'Guru Purnima' is a famous festival of Hindus. It is celebrated  ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.3,0);
    bitmap_output(0,0,0,"on the full moon day in the month of Ashadh according ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.2,0);
    bitmap_output(0,0,0,"to Hindu Calendar.Guru Purnima is celebrated in the sacred  ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0.1,0);
    bitmap_output(0,0,0,"memory of the great sage Vyasa, the ancient saint the Srimad who",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,0,0);
    bitmap_output(0,0,0,"compiled the four Vedas, wrote 18 Puranas,the Mahabharata and  ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.1,0);
    bitmap_output(0,0,0,"Bhagavata. The day is also known as 'Vyasa Purnima' This day ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.2,0);
    bitmap_output(0,0,0,"is celebrated as a mark of respect to the 'Guru' i.e a teacher",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.3,0);
    bitmap_output(0,0,0,"The day is observed by devotees who offer pujas(worship)  ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.4,0);
    bitmap_output(0,0,0,"to their beloved Gurus.Guru Purnima is celebrated to honour ",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
     glPushMatrix();
    glTranslatef(-0.8,-0.5,0);
    bitmap_output(0,0,0," our teachers, who remove the darkness from our minds",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.7,0);
    bitmap_output(0,0,0,"Here is the simple simulation of Guru Poornima,",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.8,-0.8,0);
    bitmap_output(0,0,0,"Press on click to view the festival:",GLUT_BITMAP_TIMES_ROMAN_24);
    glPopMatrix();


    glFlush();
    glPopMatrix();
    glutPostRedisplay();
}
void keys0(unsigned char key, int x, int y){
    switch (key) {

case 'c': {window=1;

window1();break;

        }
case 'm': {window =3;
window3();break;}
case 'd':{
window=2;
window2();break;}
case 'k':{
window=8;
window8();break;}
case 'g':{
window=9;
window9();break;}
}}
void window7()
{
    glutKeyboardFunc(keys0);
    glutDisplayFunc(display);
    glFlush();
    glutPostRedisplay();
}

void mouse(int btn,int state,int x,int y)
{
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        printf("x=%d,y=%d\n",x,y);

        if(window==0)
        {
            if(x>=1092 && x<=1200 && y>=670 && y<=706)
            {
                window=7;
                window7();
            }
        }
    }
}
void mouse1(int btn,int state,int x,int y)
{
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        printf("x=%d,y=%d\n",x,y);
        if(window==1)
        {
           /* if(x>=1092 && x<=1200 && y>=670 && y<=706)
            {
                window=2;
                window2();
            }
            if(x>=77 && x<=185 && y>=670 && y<=706)
            {
                window=0;
                window0();
            }*/
            if(x>=585 && x<=693 && y>=670 && y<=706)
            {
                window=4;
                window4();
            }

        }
    }
}
void mouse2(int btn,int state,int x,int y)
{
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        printf("x=%d,y=%d\n",x,y);
        if(window==2)
        {
           /*if(x>=1092 && x<=1200 && y>=670 && y<=706)
            {
                window=3;
                window3();
            }
            if(x>=77 && x<=185 && y>=670 && y<=706)
            {
                window=1;
                window1();
            }*/
            if(x>=585 && x<=793 && y>=570 && y<=906)
            {
                window=5;
                window5();
            }

        }
    }
}

void mouse3(int btn,int state,int x,int y)
{
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        printf("x=%d,y=%d\n",x,y);
       if(window==3)
        {


        /*if(x>=77 && x<=185 && y>=670 && y<=706)
            {
                window=2;
                window2();
            }*/
           if(x>=585 && x<=693 && y>=670 && y<=706)
            {
                window=6;
                window6();
            }

        }
    }
}
void mouse4(int btn,int state,int x,int y)
{
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        printf("x=%d,y=%d\n",x,y);
       if(window==8)
        {


        //if(x>=77 && x<=185 && y>=670 && y<=706)
         //   {
           //     window=2;
             //   window2();
            //}
           if(x>=585 && x<=693 && y>=670 && y<=706)
            {
                window=10;
                window10();
            }

        }
    }
}
void mouse5(int btn,int state,int x,int y)
{
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        printf("x=%d,y=%d\n",x,y);
       if(window==9)
        {


        //if(x>=77 && x<=185 && y>=670 && y<=706)
          //  {
     //           window=2;
       //         window2();
         //   }
           if(x>=585 && x<=693 && y>=670 && y<=706)
            {
                window=11;
                window11();
            }

        }
    }
}


void window0()
{
    glutMouseFunc(mouse);
    glutDisplayFunc(display0);

    glFlush();
    glutPostRedisplay();
}

void window1()
{   glutMouseFunc(mouse1);

    glutDisplayFunc(display1);
    glFlush();
    glutPostRedisplay();
}
void window2()
{     glutMouseFunc(mouse2);

    glutDisplayFunc(display2);
    glFlush();
    glutPostRedisplay();
}
void window3()
{glutMouseFunc(mouse3);
    glutDisplayFunc(display3);

    glFlush();
    glutPostRedisplay();
}
void window8(){
    glutMouseFunc(mouse4);
    glutDisplayFunc(display4);

    glFlush();
    glutPostRedisplay();
}
void window9(){
    glutMouseFunc(mouse5);
    glutDisplayFunc(display5);

    glFlush();
    glutPostRedisplay();
}
//Christmas


/**** Global Declarations and initializations *****/

GLUquadricObj *quadratic;
float shift=0;
float t_val = 0.1;
int array_size = 11000; //  number of snow flakes
float snow[11000][2];   //  coordinates of snow flakes
int j;                  //snow[specifies flake number][0=specifies x coordinate  1=specifies y coordinate]
GLfloat angle = 0.0f;
//GLfloat x , y , z;
bool right = true;
int flag = 1;
float l1,l2,l3;



/***** Initializing the snow array ******/

void initSnow(){
    int i;
    for(i=0; i < array_size; i++){
        int r1 = rand()%6000;
        int r2 = rand()%1000;
        while(r2 < 50){
            r2 = rand()%1000;
        }
        snow[i][0] = r1*-0.01;//x co-ordinate
        snow[i][1] = r2*0.01;//y co-ordinate
    }
}


/***** Reshape function ******/

void resize(int w, int h){
   GLdouble size;
   GLdouble aspect;

   /* Use the whole window. */
   glViewport(0, 0, w, h);

   /* We are going to do some 2-D orthographic drawing. */
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();

   GLfloat ar = (GLfloat)w/h;
   gluPerspective(45,ar,0.1,100);

   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}


/***** Function to Draw Snow ******/

void drawSnow(){

    glColor3d(0.95, 0.95, 0.95); // Color of the snow
    srand(time(NULL));

    int i;
    for(i=0; i < array_size; i++){
        glPushMatrix();
            glTranslated(snow[i][0], snow[i][1], -4);
            glRotated(65, -1.0, 0.0, 0.8);
            glutSolidCube(0.015);
        glPopMatrix();
        glPushMatrix();
            glTranslated(-snow[i][0], snow[i][1], -4);
            glRotated(65, -1.0, 0.0, 0.8);
            glutSolidCube(0.015);
        glPopMatrix();}
        for(j=0; j <array_size ; j++){
                    snow[j][0] += 0.005;   // moving the snow in x direction
                    snow[j][1] -= 0.005;   // moving the snow in y direction
        }

}

/******* Funtion for Drawing lights on the tree ******/

void drawLights(){

    // Eight Lights on the tree

    glColor3d(l1-0.01,l2,l3);
    glPushMatrix();
        glTranslated(-0.3,0.5, -5);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l2,l3+0.06,l1);
    glPushMatrix();
        glTranslated(0.3, 0.95, -5);
        glRotated(65, -1.0, 0.0, 0.5);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l1, l3, l2-0.05);
    glPushMatrix();
        glTranslated(0, 1.6, -5);
        glRotated(65, -1.0, 0.0, 0.5);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l2-0.04, l1+0.02, l3);
    glPushMatrix();
        glTranslated(0.4, 0.25, -5);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l3+0.02, l1-0.08, l2-0.06);
    glPushMatrix();
        glTranslated(-0.2,0.05, -5);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l3-0.04, l2+0.07, l1-0.07);
    glPushMatrix();
        glTranslated(-0.5,1, -5);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l3+0.06,l1,l1);
    glPushMatrix();
        glTranslated(-0.1,1.2, -5);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l2, l3+0.02, l3-0.04);
    glPushMatrix();
        glTranslated(0.2, 0.55, -5);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();
}

/****** Function to Draw Snowman *******/

void drawSnowMan(GLfloat x , GLfloat y , GLfloat z){

    glColor3f(0.0,0.0,0.0);
    glPushMatrix();        // Eyes
        glTranslatef(x,y+0.8,z+0.5);
        glutSolidSphere(0.05, 200, 200);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(x +0.2,y+0.8,z + 0.5);
        glutSolidSphere(0.05, 200, 200);
    glPopMatrix();

    glColor3d(1, 0, 0);  // Nose
    glPushMatrix();
        glTranslatef(x+ 0.1,y + 0.65,z + 0.5);
        glRotatef(-260.0, 1.0, -1.5, 0.0);
        glutSolidCone(0.08, 0.2, 10, 2);
    glPopMatrix();

    glColor3f(1,1,1);  // Body Structure
    glPushMatrix();
glTranslatef(x, y + 0.1, z );
        glutSolidSphere(0.55, 200, 200);
    glPopMatrix();
    glColor3f(1,1,1);
    glPushMatrix();
        glTranslatef(x, y - 0.99, z);
        glutSolidSphere(0.95, 200, 200);
    glPopMatrix();
    glColor3f(1,1,1);
    glPushMatrix();
        glTranslatef(x, y+0.7, z);
        glutSolidSphere(0.35, 200, 200);
    glPopMatrix();

}


/***** Function to draw the rotated snowman ******/

void rotatingSnowMan(){
float    x = -2.7, y = 0.3  , z = -7;
    glPushMatrix();
    glTranslatef(x,y,z);
    glRotatef(angle,0.0,0.0,1.0);
    glTranslatef(-x,-y,-z);
    drawSnowMan(x,y,z);
    glPopMatrix();
}


/****** Function to Draw the Tree ******/

void drawTree(){
    glColor3d(0.1, 0.5, 0.1);  // Tree color

    //Tree Cones
    glPushMatrix();
        glTranslated(0.0, 1.1, -6);
        glRotated(65, -1.0, 0.0, 0.0);
        glutSolidCone(0.85, 1.6, 100, 100);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.0,0.6,-6);
        glRotated(65, -1.0, 0.0, 0.0);
        glutSolidCone(0.9, 1.5, 100, 100);
    glPopMatrix();

    glPushMatrix();
        glTranslated(0.0,0.25,-6);
        glRotated(65, -1.0, 0.0, 0.0);
        glutSolidCone(0.95, 1.5, 100, 100);
    glPopMatrix();

    // Tree base
    glColor3d(0.29, 0.13, 0.13);
    glPushMatrix();
        glTranslated(0.0,-1.15,-6);
        glRotated(65, -1.0, 0.0, 0.0);
        gluCylinder(quadratic, 0.3f, 0.3f, 1.25f, 32, 32);
    glPopMatrix();

    // Tree shadow
    glColor3d(0.6, 0.6, 0.6);
    glPushMatrix();
        glTranslated(0.0,-0.8,-6);
        glRotated(70, -1.0, 0.0, 0.0);
        glutSolidTorus(0.33, 0.60, 200, 200);
    glPopMatrix();
}

void drawTree1(){
    glColor3d(0.1, 0.5, 0.1);  // Tree color

    //Tree Cones
    glPushMatrix();
        glTranslated(8.0,2.5,-24);
        glRotated(65, -1.0, 0.0, 0.0);
        glutSolidCone(0.9, 1.5, 100, 100);
    glPopMatrix();

    glPushMatrix();
        glTranslated(8.0,1.5,-24);
        glRotated(65, -1.0, 0.0, 0.0);
        glutSolidCone(0.9, 1.5, 100, 100);
    glPopMatrix();

    glPushMatrix();
        glTranslated(8.0,0.5,-24);
        glRotated(65, -1.0, 0.0, 0.0);
        glutSolidCone(0.95, 1.5, 100, 100);
    glPopMatrix();

    // Tree base
    glColor3d(0.29, 0.13, 0.13);
    glPushMatrix();
        glTranslated(7.9,-1.0,-24);
        glRotated(65, -1.0, 0.0, 0.0);
        gluCylinder(quadratic, 0.3f, 0.3f, 1.25f, 32, 32);
    glPopMatrix();

    // Tree shadow
    glColor3d(0.6, 0.6, 0.6);
    glPushMatrix();
        glTranslated(8.0,-1.0,-23);
        glRotated(70, -1.0, 0.0, 0.0);
        glutSolidTorus(0.33, 0.60, 200, 200);
    glPopMatrix();

    //lighting
    glColor3d(l1-0.01,l2,l3);
    glPushMatrix();
        glTranslated(8.0,2.5,-23);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l2,l3+0.06,l1);
    glPushMatrix();
        glTranslated(7.9,0.5,-23);
        glRotated(65, -1.0, 0.0, 0.5);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l1, l3, l2-0.05);
    glPushMatrix();
        glTranslated(8.1,1.0,-23);
        glRotated(65, -1.0, 0.0, 0.5);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l2-0.04, l1+0.02, l3);
    glPushMatrix();
        glTranslated(7.8,2.1,-23);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l3+0.02, l1-0.08, l2-0.06);
    glPushMatrix();
        glTranslated(7.6,3.0,-23);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l3-0.04, l2+0.07, l1-0.07);
    glPushMatrix();
        glTranslated(7.7,2.0,-23);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();


}
void drawTree2(){
    glColor3d(0.1, 0.5, 0.1);  // Tree color

    //Tree Cones
    glPushMatrix();
        glTranslated(-3.7,-0.3,-5);
        glRotated(90, -1.0, 0.0, 0.0);
        glutSolidCone(0.85, 1.6, 100, 100);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3.7,-0.7,-5);
        glRotated(90, -1.0, 0.0, 0.0);
        glutSolidCone(0.9, 1.5, 100, 100);
    glPopMatrix();

    glPushMatrix();
        glTranslated(-3.7,-1.0,-5);
        glRotated(90, -1.0, 0.0, 0.0);
        glutSolidCone(0.95, 1.5, 100, 100);
    glPopMatrix();

    // Tree base
    glColor3d(0.29, 0.13, 0.13);
    glPushMatrix();
        glTranslated(-3.8,-2.0,-5.1);
        glRotated(90, -1.0, 0.0, 0.0);
        gluCylinder(quadratic, 0.3f, 0.3f, 1.25f, 10, 10);
    glPopMatrix();

    // Tree shadow
    glColor3d(0.6, 0.6, 0.6);
    glPushMatrix();
        glTranslated(-3.7,-1.8,-5.0);
        glRotated(90, -1.0, 0.0, 0.0);
        glutSolidTorus(0.33, 0.60, 200, 200);
    glPopMatrix();

    //lighting
    glColor3d(l1-0.01,l2,l3);
    glPushMatrix();
        glTranslated(-3.15,0.7,-4);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l2,l3+0.06,l1);
    glPushMatrix();
        glTranslated(-2.7,-0.5,-4.1);
        glRotated(65, -1.0, 0.0, 0.5);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l1, l3, l2-0.05);
    glPushMatrix();
        glTranslated(-3.7,-0.5,-4.0);
        glRotated(65, -1.0, 0.0, 0.5);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l2-0.04, l1+0.02, l3);
    glPushMatrix();
        glTranslated(-3.2,-0.7,-4);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l3+0.02, l1-0.08, l2-0.06);
    glPushMatrix();
        glTranslated(-3.2,-0.3,-4.3);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l3-0.04, l2+0.07, l1-0.07);
    glPushMatrix();
        glTranslated(-3.0,0.3,-4.5);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l3-0.04, l2+0.07, l1-0.07);
    glPushMatrix();
        glTranslated(-3.5,0.4,-4.5);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    glColor3d(l3-0.04, l2+0.07, l1-0.07);
    glPushMatrix();
        glTranslated(-3.6,0.0,-4.2);
        glRotated(65, -1.0, 0.0, 0.8);
        glutSolidCube(0.1);
    glPopMatrix();

    //gifts

    glColor3f(1,0,0);
       glPushMatrix();
       glTranslatef(-3.8,-1.5,-4.0);
       glRotatef(45,1,0,0);
       glRotatef(45,0,1,0);
       glutSolidCube(0.3);
       glPopMatrix();

    // Gift Two
       glColor3f(1,1,0);
       glPushMatrix();
       glTranslatef(-2.4,-1.4,-4.0);
       glRotatef(45,1,0,0);
       glRotatef(45,0,1,0);
       glutSolidCube(0.3);
       glPopMatrix();

       glColor3f(1,0,1);
       glPushMatrix();
       glTranslatef(-3.0,-1.4,-4.0);
       glRotatef(45,1,0,0);
       glRotatef(45,0,1,0);
       glutSolidCube(0.3);
       glPopMatrix();

       glColor3f(0,1,1);
       glPushMatrix();
       glTranslatef(-2.8,-1.8,-4.0);
       glRotatef(45,1,0,0);
       glRotatef(45,0,1,0);
       glutSolidCube(0.3);
       glPopMatrix();

       //lines
       glColor3f(0,0,0);
       glPushMatrix();
       glLineWidth(2);
       glTranslatef(-3.5,-2.0,-4.3);
       glBegin(GL_LINES);
       glVertex3f(0,0.082,-2.1); // origin pt of the box border
       glVertex3f(0,-0.054,-2.1);
       glVertex3f(0,0.082,-2.1); // origin pt of the box border
       glVertex3f(0.13,0.165,-2.1);
       glVertex3f(0,0.082,-2.1); // origin pt of the box border
       glVertex3f(-0.13,0.165,-2.1);
       glEnd();
       glPopMatrix();

}


/****** Function to Draw the ground/mountains ******/

void drawGround()
{
//Upper Ground Circle
    glColor3f(0.93,0.94,0.94);
    glPushMatrix();
        glTranslatef(-7,-10,-12.5);
        glutSolidSphere(10,200, 1000);
    glPopMatrix();

    //Middle Ground Circle
    glColor3f(0.96,0.97,0.95);
    glPushMatrix();
        glTranslatef(1.5,-10,-10.5);
        glutSolidSphere(10,200, 1000);
    glPopMatrix();

    //Back Ground Circle
    glColor3f(0.91,0.92,0.90);
    glPushMatrix();
        glTranslatef(13,-10,-19.5);
        glutSolidSphere(10,200, 1000);
    glPopMatrix();

}


/***** Function to Draw Gifts *****/

void drawGifts()
{
//Gift One
glColor3f(1,0,0);
    glPushMatrix();
    glTranslatef(0,-0.62,-5);
    glRotatef(45,1,0,0);
    glRotatef(45,0,1,0);
    glutSolidCube(0.3);
    glPopMatrix();

    // Gift Two
    glColor3f(1,1,0);
    glPushMatrix();
    glTranslatef(0.5,-0.52,-5);
    glRotatef(45,1,0,0);
    glRotatef(45,0,1,0);
    glutSolidCube(0.3);
    glPopMatrix();

    // Gift Three
    glColor3f(0,1,0);
    glPushMatrix();
    glTranslatef(0.3,-1.00,-5);
    glRotatef(45,1,0,0);
    glRotatef(45,0,1,0);
    glutSolidCube(0.3);
    glPopMatrix();

    // Gift Four
    glColor3f(0,1,1);
    glPushMatrix();
    glTranslatef(-0.4,-0.9,-5);
    glRotatef(45,1,0,0);
    glRotatef(45,0,1,0);
    glutSolidCube(0.3);
    glPopMatrix();
}


/** Draws the border of the gifts **/

void drawGiftsLine(){

glColor3f(1,1,1); // Line Color

// line for gift one (RED BOX)
glPushMatrix();
glLineWidth(2);
glTranslatef(0,-0.53,-1.03);
glBegin(GL_LINES);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(0,-0.054,-2.1);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(0.13,0.165,-2.1);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(-0.13,0.165,-2.1);
glEnd();
glPopMatrix();

//line for gift two (YELLOW BOX)
glPushMatrix();
glLineWidth(2);
glTranslatef(0.345,-0.453,-1.03);
glBegin(GL_LINES);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(0,-0.054,-2.1);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(0.13,0.165,-2.1);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(-0.13,0.165,-2.1);
glEnd();
glPopMatrix();

//line for gift three (GREEN BOX)
glPushMatrix();
glLineWidth(2);
glTranslatef(0.21,-0.79,-1.03);
glBegin(GL_LINES);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(0,-0.054,-2.1);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(0.13,0.165,-2.1);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(-0.13,0.165,-2.1);
glEnd();
glPopMatrix();

//line for gift three (FIROZI BOX)
glPushMatrix();
glLineWidth(2);
glTranslatef(-0.278,-0.726,-1.03);
glBegin(GL_LINES);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(0,-0.054,-2.1);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(0.13,0.165,-2.1);
glVertex3f(0,0.082,-2.1); // origin pt of the box border
glVertex3f(-0.13,0.165,-2.1);
glEnd();
glPopMatrix();
}
/*peoples*/

void draw_people()
{

    glPushMatrix();
    glLineWidth(2);
    glTranslatef(1.25, -0.2, -1.03);
    glBegin(GL_LINES);
    glVertex3f(0+shift, 0.0, 0+shift);
    glVertex3f(0+shift, -0.3, 0+shift);
    //glVertex3f(0.0,0.0, 0.2);
    glVertex3f(0.0+shift, 0.0, 0.0+shift);
    glVertex3f(-0.09+shift,-0.15,0.0+shift);
    glVertex3f(0.0+shift, 0.0, 0.0+shift);
    glVertex3f(0.09+shift,-0.15,0.0+shift);
    glVertex3f(0.0+shift, -0.3, 0.0+shift);
    glVertex3f(-0.09+shift,-0.45,0.0+shift);
    glVertex3f(0.0+shift, -0.3, 0.0+shift);
    glVertex3f(0.09+shift,-0.45, 0.0+shift);
    glVertex3f(0.0+shift, 0.0, 0.0+shift);
    glVertex3f(0.08+shift, 0.07, 0.0+shift);
    glVertex3f(0.0+shift, 0.0, 0.0+shift);
    glVertex3f(-0.08+shift, 0.07, 0.0+shift);
    glVertex3f(0.08+shift, 0.07, 0.0+shift);
    glVertex3f(0.0+shift, 0.15, 0.0+shift);
    glVertex3f(-0.08+shift, 0.07, 0.0+shift);
    glVertex3f(0.0+shift, 0.15, 0.0+shift);
    glVertex3f(-0.023+shift, 0.095, 0.0+shift);
    glVertex3f(-0.03+shift, 0.095, 0.0+shift);
    glVertex3f(0.023+shift, 0.095, 0.0+shift);
    glVertex3f(0.03+shift, 0.095, 0.0+shift);
    glVertex3f(0.0+shift, 0.08, 0.0+shift);
    glVertex3f(0.0+shift, 0.06, 0.0+shift);
    glVertex3f(0.025+shift, 0.045, 0.0+shift);
    glVertex3f(-0.025+shift, 0.045, 0.0+shift);
//glVertex3f(-0.13, 0.165, -2.1);
    glEnd();

    glPopMatrix();


}


void draw_people1()
{
    glPushMatrix();
    glColor3f(0,0,0);
    glLineWidth(3);
    glTranslatef(0.5, -0.55, -1.5);
    glBegin(GL_LINES);
    glVertex3f(0+shift, 0.0, 0);
    glVertex3f(0+shift, -0.3, 0);
    //glVertex3f(0.0,0.0, 0.2);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(-0.09+shift,-0.15,0.0);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(0.09+shift,-0.15,0.0);
    glVertex3f(0.0+shift, -0.3, 0.0);
    glVertex3f(-0.09+shift,-0.45,0.0);
    glVertex3f(0.0+shift, -0.3, 0.0);
    glVertex3f(0.09+shift,-0.45, 0.0);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(0.08+shift, 0.07, 0.0);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(-0.08+shift, 0.07, 0.0);
    glVertex3f(0.08+shift, 0.07, 0.0);
    glVertex3f(0.0+shift, 0.15, 0.0);
    glVertex3f(-0.08+shift, 0.07, 0.0);
    glVertex3f(0.0+shift, 0.15, 0.0);
    glVertex3f(-0.023+shift, 0.095, 0.0);
    glVertex3f(-0.03+shift, 0.095, 0.0);
    glVertex3f(0.023+shift, 0.095, 0.0);
    glVertex3f(0.03+shift, 0.095, 0.0);
    glVertex3f(0.0+shift, 0.08, 0.0);
    glVertex3f(0.0+shift, 0.06, 0.0);
    glVertex3f(0.025+shift, 0.045, 0.0);
    glVertex3f(-0.025+shift, 0.045, 0.0);
//glVertex3f(-0.13, 0.165, -2.1);
    glEnd();
    glutSwapBuffers();
    glPopMatrix();
    glPopMatrix();
 glColor3ub(56,76,98);
    glPushMatrix();
    glTranslatef(0.65+shift, -0.7, -1.5);
    glRotatef(45,1,0,0);
    glRotatef(45,0,1,0);
    glutSolidCube(0.15);
    glPopMatrix();

}

void draw_people2()
{
    glPushMatrix();
    glColor3f(0,0,0);
    glLineWidth(2.5);
    glTranslatef(0.9, -0.2, -2.0);
    glBegin(GL_LINES);
    glVertex3f(0+shift, 0.0, 0);
    glVertex3f(0+shift, -0.3, 0);
    //glVertex3f(0.0,0.0, 0.2);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(-0.09+shift,-0.15,0.0);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(0.09+shift,-0.15,0.0);
    glVertex3f(0.0+shift, -0.3, 0.0);
    glVertex3f(-0.09+shift,-0.45,0.0);
    glVertex3f(0.0+shift, -0.3, 0.0);
    glVertex3f(0.09+shift,-0.45, 0.0);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(0.08+shift, 0.07, 0.0);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(-0.08+shift, 0.07, 0.0);
    glVertex3f(0.08+shift, 0.07, 0.0);
    glVertex3f(0.0+shift, 0.15, 0.0);
    glVertex3f(-0.08+shift, 0.07, 0.0);
    glVertex3f(0.0+shift, 0.15, 0.0);
    glVertex3f(-0.023+shift, 0.095, 0.0);
    glVertex3f(-0.03+shift, 0.095, 0.0);
    glVertex3f(0.023+shift, 0.095, 0.0);
    glVertex3f(0.03+shift, 0.095, 0.0);
    glVertex3f(0.0+shift, 0.08, 0.0);
    glVertex3f(0.0+shift, 0.06, 0.0);
    glVertex3f(0.025+shift, 0.045, 0.0);
    glVertex3f(-0.025+shift, 0.045, 0.0);
//glVertex3f(-0.13, 0.165, -2.1);
    glEnd();
    glPopMatrix();
    glColor3ub(56,176,128);
    glPushMatrix();
    glTranslatef(1.05+shift, -0.3, -2.0);
    glRotatef(45,1,0,0);
    glRotatef(45,0,1,0);
    glutSolidCube(0.15);
    glPopMatrix();

}
void draw_people3()
{
    glPushMatrix();
    glLineWidth(2);
    glColor3f(0,0,0);
    glTranslatef(1.35, -0.2, -1.5);
    glBegin(GL_LINES);
    glVertex3f(0+shift, 0.0, 0);
    glVertex3f(0+shift, -0.3, 0);
    //glVertex3f(0.0,0.0, 0.2);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(-0.09+shift,-0.15,0.0);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(0.09+shift,-0.15,0.0);
    glVertex3f(0.0+shift, -0.3, 0.0);
    glVertex3f(-0.09+shift,-0.45,0.0);
    glVertex3f(0.0+shift, -0.3, 0.0);
    glVertex3f(0.09+shift,-0.45, 0.0);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(0.08+shift, 0.07, 0.0);
    glVertex3f(0.0+shift, 0.0, 0.0);
    glVertex3f(-0.08+shift, 0.07, 0.0);
    glVertex3f(0.08+shift, 0.07, 0.0);
    glVertex3f(0.0+shift, 0.15, 0.0);
    glVertex3f(-0.08+shift, 0.07, 0.0);
    glVertex3f(0.0+shift, 0.15, 0.0);
    glVertex3f(-0.023+shift, 0.095, 0.0);
    glVertex3f(-0.03+shift, 0.095, 0.0);
    glVertex3f(0.023+shift, 0.095, 0.0);
    glVertex3f(0.03+shift, 0.095, 0.0);
    glVertex3f(0.0+shift, 0.08, 0.0);
    glVertex3f(0.0+shift, 0.06, 0.0);
    glVertex3f(0.025+shift, 0.045, 0.0);
    glVertex3f(-0.025+shift, 0.045, 0.0);
//glVertex3f(-0.13, 0.165, -2.1);
    glEnd();
    glPopMatrix();
}
void draw_people4()
{
    glPushMatrix();
    glLineWidth(2);
    glTranslatef(-0.5, -0.2, -1.5);
    glBegin(GL_LINES);
    glVertex3f(0, 0.0, 0+shift);
    glVertex3f(0, -0.3, 0+shift);
    //glVertex3f(0.0,0.0, 0.2);
    glVertex3f(0.0, 0.0, 0.0+shift);
    glVertex3f(-0.09,-0.15,0.0+shift);
    glVertex3f(0.0, 0.0, 0.0+shift);
    glVertex3f(0.09,-0.15,0.0+shift);
    glVertex3f(0.0, -0.3, 0.0+shift);
    glVertex3f(-0.09,-0.45,0.0+shift);
    glVertex3f(0.0, -0.3, 0.0+shift);
    glVertex3f(0.09,-0.45, 0.0+shift);
    glVertex3f(0.0, 0.0, 0.0+shift);
    glVertex3f(0.08, 0.07, 0.0+shift);
    glVertex3f(0.0, 0.0, 0.0+shift);
    glVertex3f(-0.08, 0.07, 0.0+shift);
    glVertex3f(0.08, 0.07, 0.0+shift);
    glVertex3f(0.0, 0.15, 0.0+shift);
    glVertex3f(-0.08, 0.07, 0.0+shift);
    glVertex3f(0.0, 0.15, 0.0+shift);
    glVertex3f(-0.023, 0.095, 0.0+shift);
    glVertex3f(-0.03, 0.095, 0.0+shift);
    glVertex3f(0.023, 0.095, 0.0+shift);
    glVertex3f(0.03, 0.095, 0.0+shift);
    glVertex3f(0.0, 0.08, 0.0+shift);
    glVertex3f(0.0, 0.06, 0.0+shift);
    glVertex3f(0.025, 0.045, 0.0+shift);
    glVertex3f(-0.025, 0.045, 0.0+shift);
//glVertex3f(-0.13, 0.165, -2.1);
    glEnd();
    glPopMatrix();
    glColor3ub(156,10,28);
    glPushMatrix();
    glTranslatef(-0.7, -0.3, -1.5+shift);
    glRotatef(45,1,0,0);
    glRotatef(45,0,1,0);
    glutSolidCube(0.15);
    glPopMatrix();

}
void draw_people5()
{
    glPushMatrix();
    glColor3f(0,0,0);
    glLineWidth(3);
    glTranslatef(-1.05, -0.5, -1.3);
    glBegin(GL_LINES);
    glVertex3f(0, 0.0, 0);
    glVertex3f(0, -0.3, 0);
    //glVertex3f(0.0,0.0, 0.2);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(-0.09,-0.15,0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.09,-0.15,0.0);
    glVertex3f(0.0, -0.3, 0.0);
    glVertex3f(-0.09,-0.45,0.0);
    glVertex3f(0.0, -0.3, 0.0);
    glVertex3f(0.09,-0.45, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.08, 0.07, 0.0);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(-0.08, 0.07, 0.0);
    glVertex3f(0.08, 0.07, 0.0);
    glVertex3f(0.0, 0.15, 0.0);
    glVertex3f(-0.08, 0.07, 0.0);
    glVertex3f(0.0, 0.15, 0.0);
    glVertex3f(-0.023, 0.095, 0.0);
    glVertex3f(-0.03, 0.095, 0.0);
    glVertex3f(0.023, 0.095, 0.0);
    glVertex3f(0.03, 0.095, 0.0);
    glVertex3f(0.0, 0.08, 0.0);
    glVertex3f(0.0, 0.06, 0.0);
    glVertex3f(0.025, 0.045, 0.0);
    glVertex3f(-0.025, 0.045, 0.0);
//glVertex3f(-0.13, 0.165, -2.1);
    glEnd();
    glPopMatrix();

}

int playThemeMusic1 = 1;

/****** Display Function *******/

void displayc(void){
    if(playThemeMusic1)
     {
                       PlaySound(TEXT("themec.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
                       playThemeMusic1 = 0;
     }
glClearColor(0.45,0.45,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
gluLookAt(0,0,1,0,0,0,0,1,0);
    drawGround();
    rotatingSnowMan();
    drawTree();
    drawSnow();
    drawLights();
    drawGiftsLine();
    drawGifts();
    drawTree1();
    drawTree2();
    draw_people();
    draw_people1();
    draw_people2();
    draw_people3();
    draw_people4();
    draw_people5();
    //move_people();

}

/****** Idle Function which rotates the snowman ******/

void idle(){

   if(right){
       angle += 0.9f ;
       if(angle > 7.0f)
   right = false;
   }

   if(!right){
angle -= 0.9f;
if(angle  < -4.0f)
   right = true;
   }

   srand(time(NULL));
   l1 = ((float) (rand()) / (float) (RAND_MAX));  // randomizing
   l2 = ((float) (rand()) / (float) (RAND_MAX))*0.99; // color of the
   l3 = ((float) (rand()) / (float) (RAND_MAX));      // lights

   glutPostRedisplay();

}


/**** Function to set flag value to switch b/w different windows *****/

void scene(){


glutIdleFunc(idle);
displayc();



glFlush();
}


void key(int key,int x,int y){
switch(key)
{
case GLUT_KEY_LEFT:
    shift--;
    glutPostRedisplay();
    break;
case GLUT_KEY_RIGHT:
    shift++;
    glutPostRedisplay();
    break;

}
}
void keys(unsigned char key, int x, int y){
    switch (key) {

case 'b': {window=0;
glutInitWindowSize(1280,725);
glutInitWindowPosition(0,0);
win=glutCreateWindow("Festivals of India");

glutDisplayFunc(window0);
//glutMouseFunc(mouse);

//glutSwapBuffers();
glutReshapeFunc(myReshape);
//setup();

glutMainLoop();}

        }
}
void window4()
{
    win=glutCreateWindow("Christmas Tree");

    quadratic = gluNewQuadric();

    glShadeModel(GL_SMOOTH);
    glEnable(GL_DEPTH_TEST); //enabling z-buffer

    // Function Calls

    glutReshapeFunc(resize);
    glutDisplayFunc(scene);
    glDepthFunc(GL_LESS);  // fullscreen view of the program
    glutKeyboardFunc(keys);
     glutSpecialFunc(key);
    initSnow();

}
//diwali


int playThemeMusic = 1;

const int smallFont=(int)GLUT_BITMAP_HELVETICA_18;
const int bigFont=(int)GLUT_BITMAP_TIMES_ROMAN_24;

float scr_width = 0;
float scr_height = 0;

float passiveX;
float passiveY;

char name1[300];
char name2[300];
int name1Iter = 0;
int name2Iter = 0;

int status = 0;
const int DISPLAY_MENU = 0;
const int LEFT_MENU = 1;
const int RIGHT_MENU = 2;
const int FLOWERPOT_STEADY = 3;
const int FLOWERPOT = 4;
const int CHAKRI_STEADY = 5;
const int CHAKRI = 6;
const int ROCKET_STEADY = 7;
const int ROCKET = 8;
const int ROCKETBLINK = 9;
const int GREETING1 = 10;
const int GREETING2 = 11;
const int GREETING1SIGNED = 12;
const int GREETING2SIGNED = 13;

void fireworks();
void rocketicon();
void chakriicon();
void flowerpoticon();
void greeting1icon();
void greeting2icon();
void backButton();
void resetMaterialProperties();
void sparkler();
GLUquadric* qobj;

GLfloat texture[10];
GLfloat titleImg;
GLfloat happydiwali;
GLfloat ganpati;

int const ParticleCount = 400;

GLubyte space[] =
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
GLubyte letters[][13] = {
{0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3, 0xc3, 0x66, 0x3c, 0x18},
{0x00, 0x00, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe},
{0x00, 0x00, 0x7e, 0xe7, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e},
{0x00, 0x00, 0xfc, 0xce, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7, 0xce, 0xfc},
{0x00, 0x00, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0, 0xc0, 0xff},
{0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0, 0xff},
{0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xcf, 0xc0, 0xc0, 0xc0, 0xc0, 0xe7, 0x7e},
{0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3},
{0x00, 0x00, 0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7e},
{0x00, 0x00, 0x7c, 0xee, 0xc6, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06},
{0x00, 0x00, 0xc3, 0xc6, 0xcc, 0xd8, 0xf0, 0xe0, 0xf0, 0xd8, 0xcc, 0xc6, 0xc3},
{0x00, 0x00, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0},
{0x00, 0x00, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xdb, 0xff, 0xff, 0xe7, 0xc3},
{0x00, 0x00, 0xc7, 0xc7, 0xcf, 0xcf, 0xdf, 0xdb, 0xfb, 0xf3, 0xf3, 0xe3, 0xe3},
{0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7, 0x7e},
{0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe},
{0x00, 0x00, 0x3f, 0x6e, 0xdf, 0xdb, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c},
{0x00, 0x00, 0xc3, 0xc6, 0xcc, 0xd8, 0xf0, 0xfe, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe},
{0x00, 0x00, 0x7e, 0xe7, 0x03, 0x03, 0x07, 0x7e, 0xe0, 0xc0, 0xc0, 0xe7, 0x7e},
{0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xff},
{0x00, 0x00, 0x7e, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3},
{0x00, 0x00, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3},
{0x00, 0x00, 0xc3, 0xe7, 0xff, 0xff, 0xdb, 0xdb, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3},
{0x00, 0x00, 0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3},
{0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3},
{0x00, 0x00, 0xff, 0xc0, 0xc0, 0x60, 0x30, 0x7e, 0x0c, 0x06, 0x03, 0x03, 0xff}
};


GLuint fontOffset;

void makeRasterFont(void)
{
GLuint i, j;
glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
fontOffset = glGenLists (128);
for (i = 0,j = 'A'; i < 26; i++,j++) {
glNewList(fontOffset + j, GL_COMPILE);
glBitmap(8, 13, 0.0, 2.0, 10.0, 0.0, letters[i]);
glEndList();
}
glNewList(fontOffset + ' ', GL_COMPILE);
glBitmap(8, 13, 0.0, 2.0, 10.0, 0.0, space);
glEndList();
}

void printString(char *s)
{
glPushAttrib (GL_LIST_BIT);
glListBase(fontOffset);
glCallLists(strlen(s), GL_UNSIGNED_BYTE, (GLubyte *) s);
glPopAttrib ();
}


void renderBitmapString(float x, float y, float z, void *font,const char *string){
    const char *c;
    glRasterPos3f(x, y, z);
    for (c=string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}

typedef struct
{
double Xpos;
double Ypos;
double Zpos;
double Xmov;
double Zmov;
double Red;
double Green;
double Blue;
double Direction;
double Acceleration;
double Deceleration;
double Scalez;
int Visible;
}PARTICLES;

PARTICLES Particle[400];

GLuint LoadTextureRAW( const char * filename, int width,int height);
void FreeTexture( GLuint texturez );

void square (void) {
    glBindTexture( GL_TEXTURE_2D, texture[0] );
    glBegin (GL_QUADS);
    glTexCoord2d(0.0,0.0);
    glVertex2d(-1.0,-1.0);
    glTexCoord2d(1.0,0.0);
    glVertex2d(1.0,-1.0);
    glTexCoord2d(1.0,1.0);
    glVertex2d(1.0,1.0);
    glTexCoord2d(0.0,1.0);
    glVertex2d(-1.0,1.0);
    glEnd();
}

void glCreateParticles (void) {
    int i;
    for (i = 1; i < ParticleCount; i++)
    {
        Particle[i].Xpos = 0;
        Particle[i].Ypos = -5;
        Particle[i].Zpos = -5;
        Particle[i].Xmov = (((((((2 - 1 + 1) * rand()%11) + 1) - 1 + 1) * rand()%11) + 1) * 0.005) - (((((((2 - 1 + 1) * rand()%11) + 1) - 1 + 1) * rand()%11) + 1) * 0.005);
        Particle[i].Zmov = (((((((2 - 1 + 1) * rand()%11) + 1) - 1 + 1) * rand()%11) + 1) * 0.005) - (((((((2 - 1 + 1) * rand()%11) + 1) - 1 + 1) * rand()%11) + 1) * 0.005);
        Particle[i].Red = 1;
        Particle[i].Green = 1;
        Particle[i].Blue = 1;
        Particle[i].Scalez = 0.25;
        Particle[i].Direction = 0;
        Particle[i].Acceleration = ((((((8 - 5 + 2) * rand()%11) + 5) - 1 + 1) * rand()%11+1) + 1) * 0.02;
        Particle[i].Deceleration = 0.0025;
    }
}



void glUpdateParticles (void)
{
    int i;
    for (i = 1; i < ParticleCount; i++)
    {
        glColor3f (Particle[i].Red, Particle[i].Green, Particle[i].Blue);

        Particle[i].Ypos = Particle[i].Ypos + Particle[i].Acceleration - Particle[i].Deceleration;
        Particle[i].Deceleration = Particle[i].Deceleration + 0.0025;

        Particle[i].Xpos = Particle[i].Xpos + Particle[i].Xmov;
        Particle[i].Zpos = Particle[i].Zpos + Particle[i].Zmov;

        Particle[i].Direction = Particle[i].Direction + ((((((int)(0.5 - 0.1 + 0.1) * rand()%11) + 1) - 1 + 1) * rand()%11) + 1);

        if (Particle[i].Ypos < -5)
        {
        Particle[i].Xpos = 0;
        Particle[i].Ypos = -5;
        Particle[i].Zpos = -5;
        Particle[i].Red = 1;
        Particle[i].Green = 1;
        Particle[i].Blue = 1;
        Particle[i].Direction = 0;
        Particle[i].Acceleration = ((((((8 - 5 + 2) * rand()%11) + 5) - 1 + 1) * rand()%11+3) + 1) * 0.02;
        Particle[i].Deceleration = 0.0025;
    }

    }
}

void glDrawParticles (void) {
int i;
for (i = 1; i < ParticleCount; i++)
{
glPushMatrix();

    glTranslatef (Particle[i].Xpos, Particle[i].Ypos, Particle[i].Zpos);
    glRotatef (Particle[i].Direction - 90, 0, 0, 1);

    glScalef (Particle[i].Scalez, Particle[i].Scalez, Particle[i].Scalez);

    glDisable (GL_DEPTH_TEST);
    glEnable (GL_BLEND);

    glBlendFunc (GL_DST_COLOR, GL_ZERO);
    glBindTexture (GL_TEXTURE_2D, texture[0]);

    glBegin (GL_QUADS);
    glTexCoord2d (0, 0);
    glVertex3f (-1, -1, 0);
    glTexCoord2d (1, 0);
    glVertex3f (1, -1, 0);
    glTexCoord2d (1, 1);
    glVertex3f (1, 1, 0);
    glTexCoord2d (0, 1);
    glVertex3f (-1, 1, 0);
    glEnd();

    glBlendFunc (GL_ONE, GL_ONE);
    glBindTexture (GL_TEXTURE_2D, texture[1]);

    glBegin (GL_QUADS);
    glTexCoord2d (0, 0);
    glVertex3f (-1, -1, 0);
    glTexCoord2d (1, 0);
    glVertex3f (1, -1, 0);
    glTexCoord2d (1, 1);
    glVertex3f (1, 1, 0);
    glTexCoord2d (0, 1);
    glVertex3f (-1, 1, 0);
    glEnd();

    glEnable(GL_DEPTH_TEST);

glPopMatrix();

}
glDisable(GL_BLEND);
}




void fillLowerBG()
{
     GLubyte upperGreenColor[] = {20, 71, 1};
     GLubyte lowerGreenColor[] = {68, 210, 12};

     glBegin(GL_POLYGON) ;
     glColor3ubv(upperGreenColor);
     glVertex3i(-5, -1,-1);
     glVertex3i(5, -1,-1);
     glColor3ubv(lowerGreenColor);
     glVertex3i(5, -5,-1);
     glVertex3i(-5, -5,-1);

     glEnd();
}

void fillUpperBG()
{
     glBegin(GL_POLYGON);
                         glColor3ub(0,0,0);
                         glVertex3f(-10,10,-5);
                         glColor3ub(60,60,60);
                         glVertex3f(10,10,-5);
                         glColor3ub(1,5,2);
                         glVertex3f(10,-10,-5);
                         glColor3ub(3,3,1);
                         glVertex3f(-10,-10,-5);
     glEnd();

     glColor3f(1,1,1);
     int dir;
     int i;
     float j;
     glPointSize(1.5);
     glEnable(GL_POINT_SMOOTH);
     glBegin(GL_POINTS);
                        for(i=0; i<5; i++)
                        {
                                 glVertex2f(-5 + 10*(rand()%100 / 100.0), 3*(rand()%100 / 100.0));
                        }
     glEnd();
     glDisable(GL_POINT_SMOOTH);
}

void drawGrass()
{
     GLubyte lightGreenColor[] = {37, 186, 7};
     GLubyte darkGreenColor[] = {20, 71, 1};

     float beginX = -5;
     float beginY = -0.5;
     glBegin(GL_TRIANGLES) ;
     while(beginX<5)
     {
         glColor3ubv(lightGreenColor);
         glVertex2f(beginX, beginY);
         glColor3ubv(darkGreenColor);
         glVertex3f(beginX - 0.025, beginY - 0.5,0);
         glVertex3f(beginX + 0.025, beginY - 0.5,0);
         beginX += 0.05;
     }
     glEnd();
}

drawUnitFence()
{
     GLubyte upBrownColor1[] = {144, 97, 7};
     GLubyte downBrownColor1[] = {146, 100, 10};
     GLubyte upBrownColor2[] = {84, 47, 0};
     GLubyte downBrownColor2[] = {180, 121, 6};

     glBegin(GL_QUADS) ;
     glColor3ubv(upBrownColor1);
     glVertex3f( 0, 0, 0 );
     glVertex3f( 0.75, 0, 0 );
     glColor3ubv(downBrownColor1);
     glVertex3f( 0.75, -0.50, 0 );
     glVertex3f( 0, -0.50, 0 );


     glColor3ubv(upBrownColor1);
     glVertex3f( 0, -1.30, 0 );
     glVertex3f( 0.75, -1.30, 0 );
     glColor3ubv(downBrownColor1);
     glVertex3f( 0.75, -1.80, 0 );
     glVertex3f( 0, -1.80, 0 );

     glColor3ubv(upBrownColor2);
     glVertex3f( 0.75, 0.50, 0 );
     glVertex3f( 1.55, 0.50, 0 );
     glColor3ubv(downBrownColor2);
     glVertex3f( 1.55, -2.30, 0 );
     glVertex3f( 0.75, -2.30, 0 );

     glEnd();
}

void drawFence()
{
     float beginX = -5;
     float beginY = -0.3;

     while(beginX < 5)
     {
         glPushMatrix();
         glTranslatef(beginX, beginY, -1);
         glScalef(0.3,0.3,0.2);
         drawUnitFence();
         glPopMatrix();
         beginX += 0.4;
    }

}


void drawBackground()
{
     glDisable(GL_LIGHTING);
     fillLowerBG();
     fillUpperBG();
     glPushMatrix();
          glScalef(1.1,1.2,1.1);
          glTranslatef(0,0.1,-1.2);
          drawGrass();
     glPopMatrix();
     drawFence();
     glEnable(GL_LIGHTING);
}
//light position variables
GLfloat lx = 5.0;
GLfloat ly = 2.0;
GLfloat lz = 5.0;
GLfloat lw = 0.0;

void init (void) {
    glEnable (GL_DEPTH_TEST); //enable the depth testing
    glEnable (GL_LIGHTING); //enable the lighting
    glEnable (GL_LIGHT0); //enable LIGHT0, our Diffuse Light
    glEnable (GL_LIGHT1); //enable LIGHT1, our Ambient Light
    glShadeModel (GL_SMOOTH); //set the shader to smooth shader

    makeRasterFont();
    name1[0] = '\0';
    name2[0]='\0';

    glEnable( GL_TEXTURE_2D );

    qobj = gluNewQuadric();
    gluQuadricNormals(qobj, GLU_SMOOTH);

}

void glFermatSpiral(float a, float b, float thetaStart, float thetaEnd, int samples )
{
    int dir = 0;
    float spiral_color1[] = {1,0.54,0};
    float spiral_color2[] = {0.8,0.2,0};
    float spiral_color3[] = {1,0,0};
    glBegin( GL_LINE_STRIP );

    float dt = (thetaEnd - thetaStart) / (float)samples;

    dir = rand()%3;
    if(dir==0)
        glColor3f(spiral_color1[0],spiral_color1[1],spiral_color1[2]);
    else if(dir==1)
        glColor3f(spiral_color2[0],spiral_color2[1],spiral_color2[2]);
    else
        glColor3f(spiral_color3[0],spiral_color3[1],spiral_color3[2]);
    int i;
    for(  i = 0; i <= samples; ++i )
    {
          // archimedean spiral
        float theta = thetaStart + (i * dt);
        // Specific to made a Fermat Spiral.
        float r = sqrt( theta );



        // polar to cartesian
        float x = r * cos( theta );
        float y = r * sin( theta );

        // Square root means two solutions, one positive and other negative. 2 points to be drawn.
        glVertex3f( x, y ,-0.5);

        x = -r * cos( theta );
        y = -r * sin( theta );

        glVertex3f( x, y ,-0.5);
    }

    glEnd();
}





float pushUp = 0;
float pushBelow = 0;


void titleBelow()
{
     pushUp = -2.3;
     glDisable(GL_LIGHTING);
     glEnable(GL_TEXTURE_2D);
     glEnable(GL_BLEND);
     glBlendFunc (GL_ONE, GL_ONE);




     titleImg = LoadTextureRAW("hdtitle.raw",300,156);

     glBindTexture (GL_TEXTURE_2D, titleImg);

     if(pushBelow >= -2.3)          //IDEAL -2.42
                  pushBelow -= 0.1;
     glPushMatrix();

         glTranslatef(0,pushBelow,0.1);
         glScalef(1.7,1.7,1);
         glBegin(GL_QUADS);
                             glTexCoord3f(-1,1,0.3);
                             glVertex3f(-1,1,0.2);
                             glTexCoord3f(0,1,0.3);
                             glVertex3f(1,1,0.2);
                             glTexCoord3f(0,0,0.3);
                             glVertex3f(1,0,0.2);
                             glTexCoord3f(-1,0,0.3);
                             glVertex3f(-1,0,0.2);
         glEnd();
     glPopMatrix();

     glDisable(GL_TEXTURE_2D);
     glDisable(GL_BLEND);
     glEnable(GL_LIGHTING);
}


void titleOnTop()
{
     pushBelow = 0;
     glDisable(GL_LIGHTING);
     glEnable(GL_TEXTURE_2D);
     glEnable(GL_BLEND);
     glBlendFunc (GL_ONE, GL_ONE);




     titleImg = LoadTextureRAW("hdtitle.raw",300,156);

     glBindTexture (GL_TEXTURE_2D, titleImg);

     if(pushUp <= 0 )          //IDEAL 0
                  pushUp += 0.1;
     glPushMatrix();
         glTranslatef(0,pushUp,0.1);
         glScalef(1.7,1.7,1);
         glBegin(GL_QUADS);
                             glTexCoord3f(-1,1,0.3);
                             glVertex3f(-1,1,0.2);
                             glTexCoord3f(0,1,0.3);
                             glVertex3f(1,1,0.2);
                             glTexCoord3f(0,0,0.3);
                             glVertex3f(1,0,0.2);
                             glTexCoord3f(-1,0,0.3);
                             glVertex3f(-1,0,0.2);
         glEnd();
     glPopMatrix();

     glDisable(GL_TEXTURE_2D);
     glDisable(GL_BLEND);
     glEnable(GL_LIGHTING);
}





float brickColor = 0;
int brickDir = 0;
void displayMenu()
{

     if(playThemeMusic)
     {
                       PlaySound(TEXT("theme.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
                       playThemeMusic = 0;
     }

     glutSetCursor(GLUT_CURSOR_INHERIT);
     drawBackground();
     //LEFT MENU
    glPushMatrix();
                   GLfloat left_diffuse[] = {1,0.16,0.16};
                   GLfloat left_ambient[] = {1,0.68,0.68};
                   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, left_diffuse);
                   glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, left_ambient);
                   glTranslatef(-1.75,2.4,0);
                   glScalef(3.4,0.4,1);
                   glutSolidCube(1);
    glPopMatrix();


    //RIGHT MENU
    glPushMatrix();
                   GLfloat right_diffuse[] = {0.17,0.74,0.27};
                   GLfloat right_ambient[] = {0.78,1,0.68};
                   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, right_diffuse);
                   glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, right_ambient);
                   glTranslatef(1.75,2.4,0);
                   glScalef(3.4,0.4,1);
                   glutSolidCube(1);
    glPopMatrix();

    //EXIT BUTTON
    glPushMatrix();
                   GLfloat exit_diffuse[] = {0,0.06,0.4};      //INITIAL : {0,0.06,0.4};
                   GLfloat exit_ambient[] = {1,0.99,0.53};
                   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, exit_diffuse);
                   glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, exit_ambient);
                   glTranslatef(0,-2.8,-0.01);
                   glScalef(1,0.3,0.2);
                   glutSolidCube(1);
    glPopMatrix();

    if(brickColor>=1)
                     brickDir = 1;
    else if(brickColor <= 0)
                     brickDir = 0;
    if(brickDir==0)
                   brickColor+=0.05;
    else
                   brickColor-=0.05;

    GLfloat details_diffuse[] = {0,0.16,brickColor};
    GLfloat details_ambient[] = {1,0.99,0.53};
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, details_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, details_ambient);

    glDisable(GL_LIGHTING);

    glColor3ub(255,255,255);
    glRasterPos3f(-1.7,1.6,2);
    printString("BURST SOME CRACKERS");

    glColor3ub(0,34,6);
    glRasterPos3f(0.5,1.6,2);
    printString("SEND SOME GREETINGS");

    glColor3f(1,1,1);
    renderBitmapString(-0.1,-2.57,0.5,(void *)smallFont,"Exit");



    glEnable(GL_LIGHTING);

}

void leftMenu()
{
    //LEFT POP DOWN
    glPushMatrix();
                   GLfloat left_down_diffuse[] = {0,0.12,0.35};
                   GLfloat left_down_ambient[] = {0.62,0.75,1};
                   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, left_down_diffuse);
                   glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, left_down_ambient);
                   glTranslatef(-1.75,1,0);
                   glScalef(3.4,3.5,1);
                   glutSolidCube(1);
    glPopMatrix();

    glPushMatrix();
                   glScalef(0.5,0.5,0.5);
                   glTranslatef(-1.3,1,3);
                   rocketicon();
                   glTranslatef(-3,0,0);
                   flowerpoticon();
                   glTranslatef(1.5,2,0);
                   chakriicon();

    glPopMatrix();
}

void rightMenu()
{
    //RIGHT POP DOWN
    glPushMatrix();
                   GLfloat right_down_diffuse[] = {0,0.12,0.35};
                   GLfloat right_down_ambient[] = {0.62,0.75,1};
                   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, right_down_diffuse);
                   glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, right_down_ambient);
                   glTranslatef(1.75,1.4,0);
                   glScalef(3.4,2.0,1);
                   glutSolidCube(1);
    glPopMatrix();
    glPushMatrix();
                   glScalef(0.5,0.5,0.5);
                   glTranslatef(1.5,2.8,3);
                   greeting1icon();
                   glTranslatef(2.5,0,0);
                   greeting2icon();

    glPopMatrix();

}

float cangle = 20;
int chakri_axes[] = {0,0,0};

void backButton()
{
     glDisable(GL_LIGHTING);
     glPushMatrix();
     glScalef(0.4,0.1,1);
     glTranslatef(7.5,-27,0);
                            glBegin(GL_POLYGON);
                                                 glColor3ub(133,18,0);
                                                 glVertex3f(-1,1,0);
                                                 glColor3ub(205,21,7);
                                                 glVertex3f(1,1,0);
                                                 glColor3ub(79,9,4);
                                                 glVertex3f(1,-1,0);
                                                 glColor3ub(205,21,7);
                                                 glVertex3f(-1,-1,0);
                            glEnd();
     glPopMatrix();

     glColor3f(1,1,1);
     glRasterPos3f(2.85,-2.75,0.01);
                        printString("BACK");
     glEnable(GL_LIGHTING);
}
void sparkler()
{
          glDisable(GL_LIGHTING);
          glPushMatrix();
          glTranslatef(passiveX,passiveY,3);
          glRotatef(75,0,0,1);
          glScalef(0.1,0.2,1);
          glBegin(GL_POLYGON);

                              glColor3ub(3,42,108);
                              glVertex2f(-0.1,0);
                              glColor3ub(255,255,255);
                              glVertex2f(0,0.2);
                              glColor3ub(3,42,108);
                              glVertex2f(0.1,0);
                              glColor3ub(0,0,0);
                              glVertex2f(0.1,-2);
                              glVertex2f(-0.1,-2);
          glEnd();
          glBegin(GL_POLYGON);

                              glColor3ub(83,28,3);
                              glVertex2f(-0.01,-2);
                              glVertex2f(0.01,-2);
                              glColor3f(1,1,1);
                              glVertex2f(0.01,-3);
                              glVertex2f(-0.01,-3);
          glEnd();


          glPopMatrix();;
          glEnable(GL_LIGHTING);
}
void steadychakri()
{
     glutSetCursor(GLUT_CURSOR_NONE);
     sparkler();
    backButton();
    glDisable(GL_LIGHTING);
     glBegin(GL_POLYGON);
                         glColor3ub(12,32,2);
                         glVertex3f(-50,50,-50);
                         glColor3ub(0,0,0);
                         glVertex3f(50,50,-50);
                         glColor3ub(32,77,10);
                         glVertex3f(50,-50,-50);
                         glColor3ub(0,0,0);
                         glVertex3f(-50,-50,-50);
     glEnd();
     glEnable(GL_LIGHTING);

     glPushMatrix();
     glRotatef(-45,1,0,0);
                        glPushMatrix();
                        glScalef(0.2,0.2,0.2);



                        //TORUS
                       GLfloat torus_diffuse[] = {0.8,0,0};
                       glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, torus_diffuse);
                       glPushMatrix();
                       glScalef(0.25,0.25,0.25);
                       glutWireTorus(1,10,15,30);
                       glPopMatrix();




                       //LIGHTING DISABLED
                       glDisable(GL_LIGHTING);

                       //CHAKRI CENTER
                        float radius=2.4;

                        glBegin(GL_POLYGON);
                        glColor3f(0,0,0);
                        glVertex2f(0,0);
                        glColor3f(1,0.54,0);
                        int i;
                        float degInRad;
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0);
                       }
                       glEnd();

                       //GREEN LINES

                       glColor3f(0,1,0);
                       radius=2.0;
                        glBegin(GL_LINE_LOOP);
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0.02);
                       }
                       glEnd();

                       radius=1.8;
                        glBegin(GL_LINE_LOOP);
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0.02);
                       }
                       glEnd();

                       radius=0.7;
                        glBegin(GL_POLYGON);
                        glColor3f(0,0.7,0);
                        glVertex2f(0,0);
                        glColor3f(0,0.3,0);
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0.03);
                       }
                       glEnd();

                       //RED CENTRE
                      radius=1.2;
                        glBegin(GL_POLYGON);
                        glColor3f(0.5,0,0);
                        glVertex2f(0,0);
                        glColor3f(1,0,0);
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*(1.0*radius),sin(degInRad)*(1.0*radius),0.02);
                       }
                       glEnd();
                        glPopMatrix();

                         glEnable(GL_LIGHTING);
     glPopMatrix();

}


void chakri()
{
     glutSetCursor(GLUT_CURSOR_NONE);
     sparkler();
     backButton();
     glDisable(GL_LIGHTING);
     glBegin(GL_POLYGON);
                         glColor3ub(12,32,2);
                         glVertex3f(-50,50,-50);
                         glColor3ub(0,0,0);
                         glVertex3f(50,50,-50);
                         glColor3ub(32,77,10);
                         glVertex3f(50,-50,-50);
                         glColor3ub(0,0,0);
                         glVertex3f(-50,-50,-50);
     glEnd();
     glEnable(GL_LIGHTING);

     glPushMatrix();
     glRotatef(-45,1,0,0);


                         int dir = 0;
                        glPushMatrix();
                        glScalef(0.2,0.2,0.2);
                        glTranslatef(chakri_axes[0],chakri_axes[1],chakri_axes[2]);

                       //TORUS
                       GLfloat torus_diffuse[] = {0.8,0,0};
                       glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, torus_diffuse);
                       glPushMatrix();
                       glScalef(0.25,0.25,0.25);
                       glutWireTorus(1,10,15,30);
                       glPopMatrix();


                       //LIGHTING DISABLED
                       glDisable(GL_LIGHTING);


                       //CHAKRI CENTER
                        float radius=2.5;

                        glBegin(GL_POLYGON);
                        glColor3f(0,0,0);
                        glVertex2f(0,0);
                        glColor3f(1,0.54,0);
                        int i;
                        float degInRad;
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0);
                       }
                       glEnd();

                       //GREEN LINES

                       glColor3f(0,1,0);
                       radius=2.0;
                        glBegin(GL_LINE_LOOP);
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0.02);
                       }
                       glEnd();

                       radius=1.8;
                        glBegin(GL_LINE_LOOP);
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0.02);
                       }
                       glEnd();

                       radius=0.7;
                        glBegin(GL_POLYGON);
                        glColor3f(0,0.7,0);
                        glVertex2f(0,0);
                        glColor3f(0,0.3,0);
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0.03);
                       }
                       glEnd();

                       //RED CENTRE
                      radius=1.2;
                        glBegin(GL_POLYGON);
                        glColor3f(0.5,0,0);
                        glVertex2f(0,0);
                        glColor3f(1,0,0);
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*(1.0*radius),sin(degInRad)*(1.0*radius),0.02);
                       }
                       glEnd();

                        glFermatSpiral(0.05, 0.5, cangle+1, cangle+75.0, 80);
                        glPopMatrix();

                        cangle -= 0.1;
                        dir = rand()%2;
                        int incAxis = rand()%3;
                        if(dir)
                        {
                               if(chakri_axes[incAxis] < 4)
                                   chakri_axes[incAxis]++;
                        }
                        else
                        {
                               if(chakri_axes[incAxis] > -4)
                                   chakri_axes[incAxis]--;
                        }
                         glEnable(GL_LIGHTING);

     glPopMatrix();
}

void steadyflowerpot() {

     glutSetCursor(GLUT_CURSOR_NONE);
     sparkler();
     drawBackground();
     GLfloat flowerpot_diffuse[] = {0.02,0,1};
     GLfloat flowerpot_ambient[] = {1,0,1};
     GLfloat flowerpot_shininess[] = { 100 };
     glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, flowerpot_diffuse);
     glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, flowerpot_ambient);
     glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, flowerpot_shininess);
     backButton();

     glPushMatrix();
          glRotatef(-100.0, 1,0,0);
          glTranslatef(0,0,-2);
          glutSolidCone(0.2,0.5,20,20);
     glPopMatrix();

}

void flowerpot() {

     glutSetCursor(GLUT_CURSOR_NONE);
     sparkler();
     drawBackground();
     GLfloat flowerpot_diffuse[] = {0.02,0,1};
     GLfloat flowerpot_ambient[] = {1,0,1};
     GLfloat flowerpot_shininess[] = { 100 };
     glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, flowerpot_diffuse);
     glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, flowerpot_ambient);
     glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, flowerpot_shininess);
     backButton();

     glPushMatrix();
          glRotatef(-100.0, 1,0,0);
          glTranslatef(0,0,-2);
          glutSolidCone(0.2,0.5,20,20);
     glPopMatrix();


     glPushMatrix();
          glTranslatef(0,1,0);
          fireworks();
     glPopMatrix();


}

void fireworks(void) {

     glEnable(GL_TEXTURE_2D);
     GLfloat sparks_diffuse[] = {0.2,0.5,1};
     GLfloat sparks_ambient[] = {1,1,0};
     GLfloat sparks_shininess[] = { 100 };
     GLfloat temp_ambient[] = {1,1,1};

     glLightfv (GL_LIGHT0, GL_AMBIENT, temp_ambient);

     glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, sparks_diffuse);
     glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, sparks_ambient);
     glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, sparks_shininess);
     glUpdateParticles();
        glPushMatrix();
                    glScalef(0.7,0.9,1);
                    glTranslatef(0,0.7,0);
                    glUpdateParticles();
                    glDrawParticles();
        glPopMatrix();
      glDisable(GL_TEXTURE_2D);

}




int playBlastMusic = 1;

float rocketx = -2;
float rockety = -1;
float rocketz = 0;
float rocketangle = 0;

void steadyrocket()
{
     playBlastMusic = 1;
     glutSetCursor(GLUT_CURSOR_NONE);
     sparkler();
     drawBackground();

     glPushMatrix();
     glScalef(0.6,0.6,0.6);
                         GLfloat cyl_red[] = {1,0,0};
                         GLfloat cyl_yellow[] = {1,1,0};
                         GLfloat cyl_dark_red[] = {0.4,0,0};
                         GLfloat cyl_dark_yellow[] = {0.5,0.5,0};
                         GLfloat cyl_white[] = {0.8,0.8,0.8};
                         GLfloat rocket_ambient[] = {0.2,0.2,0.2};

                     glMaterialfv (GL_FRONT_AND_BACK, GL_AMBIENT, rocket_ambient);
                     glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_white);
                     glPushMatrix();

                                 glTranslatef(-2,-2,0);            //-1 0 1
                                 glRotatef(90,1,0,0);
                                 gluCylinder(qobj, 0.4, 0.4, 1.4, 15, 16);
                     glPopMatrix();


                     glPushMatrix();
                        glTranslatef(-2,-1,0);                     //-1 0 0
                        glRotatef(-1*rocketangle, 1,0,1);
                        glPushMatrix();
                                 glRotatef(90,1,0,0);
                                 glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_red);
                                 gluCylinder(qobj, 0.2, 0.2, 1.0, 15, 16);
                                 glPushMatrix();
                                                glTranslatef(0,0,0.22);
                                                glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_dark_yellow);
                                                gluCylinder(qobj, 0.21, 0.21, 0.5, 15, 16);
                                 glPopMatrix();
                                 glRotatef(180,1,0,0);
                                 glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_dark_red);
                                 glutSolidCone(0.3,0.5,20,20);
                                 glTranslatef(-0.18,0,-2);

                                 glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_yellow);
                                 gluCylinder(qobj, 0.01, 0.01, 1.0, 15, 16);
                        glPopMatrix();
                     glPopMatrix();
     glPopMatrix();
     backButton();
}

float blinkTime = 0;
void rocketBlinkScreen()
{
     if(playBlastMusic)
     {
         PlaySound(TEXT("blast.wav"), NULL, SND_ASYNC|SND_FILENAME);
         playBlastMusic = 0;
     }
     sparkler();
     backButton();
     glDisable(GL_LIGHTING);
     glColor3ub(rand()%255,rand()%255,rand()%255);
     glBegin(GL_QUADS);
                       glVertex3f(-6,4,0);
                       glVertex3f(6,4,0);
                       glVertex3f(6,-4,0);
                       glVertex3f(-6,-4,0);
     glEnd();
     glEnable(GL_LIGHTING);
     blinkTime += 0.1;
     if(blinkTime >= 10)
     {
             status = DISPLAY_MENU;
             resetMaterialProperties();
             glDisable(GL_TEXTURE_2D);
             rocketx = -2;
             rockety = -1;
             rocketz = 0;
             rocketangle = 0;
             glutSetCursor(GLUT_CURSOR_INHERIT);
     }
}


void rocket()
{
     glutSetCursor(GLUT_CURSOR_NONE);
     sparkler();

     drawBackground();

     GLfloat rocket_ambient[] = {0.2,0.2,0.2};
     glMaterialfv (GL_FRONT_AND_BACK, GL_AMBIENT, rocket_ambient);

     glPushMatrix();
     glScalef(0.6,0.6,0.6);
                         GLfloat cyl_red[] = {1,0,0};
                         GLfloat cyl_yellow[] = {1,1,0};
                         GLfloat cyl_dark_red[] = {0.4,0,0};
                         GLfloat cyl_dark_yellow[] = {0.5,0.5,0};
                         GLfloat cyl_white[] = {0.8,0.8,0.8};

                     glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_white);
                     glPushMatrix();
                                 glTranslatef(-2,-2,0);
                                 glRotatef(90,1,0,0);
                                 gluCylinder(qobj, 0.4, 0.4, 1.4, 15, 16);
                     glPopMatrix();


                     glPushMatrix();
                        glTranslatef(rocketx,rockety, rocketz);
                        //glTranslatef(-1,0,0);
                        glRotatef(-1*rocketangle, 1,0,1);
                        glPushMatrix();
                                 glRotatef(90,1,0,0);
                                 glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_red);
                                 gluCylinder(qobj, 0.2, 0.2, 1.0, 15, 16);
                                 glPushMatrix();
                                                glTranslatef(0,0,0.22);
                                                glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_dark_yellow);
                                                gluCylinder(qobj, 0.21, 0.21, 0.5, 15, 16);
                                 glPopMatrix();
                                 glRotatef(180,1,0,0);
                                 glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_dark_red);
                                 glutSolidCone(0.3,0.5,20,20);
                                 glTranslatef(-0.18,0,-2);

                                 glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, cyl_yellow);
                                 gluCylinder(qobj, 0.01, 0.01, 1.0, 15, 16);
                        glPopMatrix();
                        //glutSolidCone(0.3,0.5,20,20);
                     glPopMatrix();
                     rocketx += 0.1;
                     rockety += 0.4;
                     rocketz -= 0.2;
                     if(rocketangle < 90)
                          rocketangle += 1;
     glPopMatrix();
     backButton();
     if(rockety >= 10)
                status=ROCKETBLINK;
}

void rocketicon()
{


            glDisable(GL_LIGHTING);


            int i;
            float degInRad;
            float radius = 0.9;

            glPushMatrix();
            glTranslatef(0,-0.8,0);
                glBegin(GL_POLYGON);
                glColor3f(1,1,1);
                glVertex2f(0,0);
                glColor3ub(255,253,87);
               for (i=0; i <= 361; i++)
               {
                  degInRad = i*3.14/180;
                  glVertex3f(cos(degInRad)*(1.0*radius),sin(degInRad)*(1.0*radius),-0.01);
               }
               glEnd();
            glPopMatrix();

            glBegin(GL_POLYGON);
                                 glColor3ub(221,0,0);
                                 glVertex2f(0,0);
                                 glColor3ub(228,78,78);
                                 glVertex2f(-0.2,-0.4);
                                 glVertex2f(0.2,-0.4);
            glEnd();
            glBegin(GL_POLYGON);
                                 glColor3ub(162,76,0);
                                 glVertex2f(-0.15,-0.4);
                                 glVertex2f(0.15,-0.4);

                                 glColor3ub(247,117,0);
                                 glVertex2f(0.15,-1);
                                 glVertex2f(-0.15,-1);
            glEnd();

            glBegin(GL_LINES);
                              glColor3f(0,0,0);
                              glVertex2f(-0.15,-1);
                              glColor3f(1,1,0);
                              glVertex2f(-0.15,-1.5);
            glEnd();
            glEnable(GL_LIGHTING);
}

void flowerpoticon()
{


            glDisable(GL_LIGHTING);


            int i;
            float degInRad;
            float radius = 0.9;

            glPushMatrix();
            glTranslatef(0,-0.8,0);
                glBegin(GL_POLYGON);
                glColor3f(1,1,1);
                glVertex2f(0,0);
                glColor3ub(255,253,87);
               for (i=0; i <= 361; i++)
               {
                  degInRad = i*3.14/180;
                  glVertex3f(cos(degInRad)*(1.0*radius),sin(degInRad)*(1.0*radius),-0.01);
               }
               glEnd();
            glPopMatrix();

            glBegin(GL_POLYGON);
                                 glColor3ub(25, 42, 119);
                                 glVertex2f(0,0);
                                 glColor3ub(0,48,255);
                                 glVertex2f(-0.5,-1.3);
                                 glColor3ub(60,97,255);
                                 glVertex2f(0.5,-1.3);
            glEnd();
            glEnable(GL_LIGHTING);
}

void chakriicon()
{


            glDisable(GL_LIGHTING);


            int i;
            float degInRad;
            float radius = 0.9;

            glPushMatrix();
            glTranslatef(0,-0.8,0);
                glBegin(GL_POLYGON);
                glColor3f(1,1,1);
                glVertex2f(0,0);
                glColor3ub(255,253,87);
               for (i=0; i <= 361; i++)
               {
                  degInRad = i*3.14/180;
                  glVertex3f(cos(degInRad)*(1.0*radius),sin(degInRad)*(1.0*radius),-0.01);
               }
               glEnd();

               radius = 0.5;
               glBegin(GL_POLYGON);
                glColor3ub(255,84,0);
                glVertex2f(0,0);
                glColor3ub(148,30,2);
               for (i=0; i <= 361; i++)
               {
                  degInRad = i*3.14/180;
                  glVertex3f(cos(degInRad)*(1.0*radius),sin(degInRad)*(1.0*radius),0.00);
               }
               glEnd();

               radius = 0.2;
               glBegin(GL_POLYGON);
                glColor3ub(40,163,16);
                glVertex2f(0,0);
                glColor3ub(11,66,0);
               for (i=0; i <= 361; i++)
               {
                  degInRad = i*3.14/180;
                  glVertex3f(cos(degInRad)*(1.0*radius),sin(degInRad)*(1.0*radius),0.01);
               }
               glEnd();
            glPopMatrix();

            glEnable(GL_LIGHTING);
}



void resetMaterialProperties()
{
     GLfloat DefaultDiffuseLight[] = {0.8, 0.8, 0.8, 1.0};
     GLfloat DefaultAmbientLight[] = {0.2, 0.2, 0.2, 1.0};
     GLfloat DefaultEmissionLight[] = {0.0, 0.0, 0.0, 1.0};
     GLfloat DefaultSpecularLight[] = {0.0, 0.0, 0.0, 1.0};
     GLfloat DefaultShininess[] = {0};

     glMaterialfv (GL_FRONT_AND_BACK, GL_DIFFUSE, DefaultDiffuseLight);
     glMaterialfv (GL_FRONT_AND_BACK, GL_AMBIENT, DefaultAmbientLight);
     glMaterialfv (GL_FRONT_AND_BACK, GL_EMISSION, DefaultEmissionLight);
     glMaterialfv (GL_FRONT_AND_BACK, GL_SPECULAR, DefaultSpecularLight);
     glMaterialfv (GL_FRONT_AND_BACK, GL_SHININESS, DefaultShininess);
}





void diya()
{
     int i;
     float radius;
    float degInRad;
    float centerX,centerY;

          radius=0.6;
                       centerX=-1.5, centerY=0;
                        glBegin(GL_POLYGON);
                        glColor3ub(21,6,1);
                        glVertex3f(centerX,centerY,0.1);
                        glColor3ub(91,35,5);
                       for (i=180; i <= 360; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius +centerX,sin(degInRad)*radius+centerY,0.1);
                       }
                       glEnd();
         glPushMatrix();
                        glScalef(0.2,0.7,1);
                        radius=0.6;
                        centerX= -4.5, centerY=0.7;
                        glBegin(GL_POLYGON);
                        glColor3ub(255,248,0);
                        glVertex3f(centerX,centerY,0.1);
                        glColor3ub(255,127,0);
                        degInRad;
                       for (i=0; i <= 361; i++)
                       {
                          degInRad = i*3.14/180;
                          glVertex3f(cos(degInRad)*radius +centerX,sin(degInRad)*radius+centerY,0.1);
                       }
                       glEnd();

         glPopMatrix();
}

float openAngle1 = 135;
int colRed[] = {255,177,15,94};
int cDir[] = {0,0,0,0};
int diyaRotator=361;
void greeting1()
{
    backButton();

    int i;
    float diyaRotationRadius=0.5;
    float radius;
    float degInRad;

     glDisable(GL_LIGHTING);
     glBegin(GL_QUADS);
                       glColor3f(1,1,1);
                       glVertex3f(-5,5,-0.2);
                       glColor3f(50,1,1);
                       glVertex3f(5,5,-0.2);
                       glColor3ub(colRed[0],colRed[0],colRed[0]);
                       glVertex3f(5,-5,-0.2);
                       glColor3f(0,0.5,0.5);
                       glVertex3f(-5,-5,-0.2);
     glEnd();

     glBegin(GL_QUADS);
                       glColor3ub(colRed[0],0,0);
                       glVertex3f(0,2,0);
                       glColor3ub(colRed[1],1,0);
                       glVertex3f(3,2,0);
                       glColor3ub(colRed[2],3,1);
                       glVertex3f(3,-2,0);
                       glColor3ub(colRed[3],2,1);
                       glVertex3f(0,-2,0);
     glEnd();


     //TEXT
     glColor3ub(255,200,0);
     renderBitmapString(0.8,1,0.1,(void *)bigFont,"Happy Diwali");

     glColor3ub(255,201,106);

     renderBitmapString(0.4,0.5,0.1,(void *)smallFont,"With a hope that you attain");

     renderBitmapString(0.7,0.25,0.1,(void *)smallFont,"Success and Bliss,");

     renderBitmapString(0.4,0,0.1,(void *)smallFont,"With every light that is lit");

     renderBitmapString(0.62,-0.25,0.1,(void *)smallFont,"on the Day of Diwali.");

     glColor3ub(225,82,54);

     renderBitmapString(0.85,-0.75,0.1,(void *)smallFont,"Best Regards,");

     glColor3ub(226,74,0);
     if(status==GREETING1)
     {
          renderBitmapString(0.6,-0.95,0.1,(void *)smallFont,"Raksha,Swathi,Susmitha");
     }
     else
     {
         renderBitmapString(1.1,-0.95,0.1,(void *)smallFont,name1);
     }

     glColor3f(0.3,0,0);
     glBegin(GL_LINES);
                       glVertex3f(0,2,0.01);
                       glVertex3f(0,-2,0.01);
     glEnd();

    glPushMatrix();

         glRotatef(openAngle1,0,1,0);
         glBegin(GL_QUADS);
         glColor3f(1,1,1);
                       glColor3ub(colRed[0],0,0);
                       glVertex3f(0,2,0);
                       glColor3ub(colRed[1],1,0);
                       glVertex3f(-3,2,0);
                       glColor3ub(colRed[2],3,1);
                       glVertex3f(-3,-2,0);
                       glColor3ub(colRed[3],2,1);
                       glVertex3f(0,-2,0);
         glEnd();
                 glPushMatrix();
                       degInRad = diyaRotator*3.14/180;
                       glTranslatef(cos(degInRad)*diyaRotationRadius,sin(degInRad)*diyaRotationRadius,0);
                       diya();

                       diyaRotator -= 5;
                       if(diyaRotator <= 0)
                                      diyaRotator = 361;
                 glPopMatrix();




     glPopMatrix();


     if(openAngle1>30)
                      openAngle1 -= 3;


     for(i=0;i<4;i++)
     {

                     if(cDir[i]==0)
                        colRed[i] += 10;
                     else
                        colRed[i] -= 10;
                     if(colRed[i] >= 255)
                     {
                        cDir[i] = 1;
                        colRed[i] = 255;
                     }
                     else if(colRed[i] <= 0)
                     {
                        cDir[i] = 0;
                        colRed[i] = 0;
                     }
     }

     glEnable(GL_LIGHTING);
}

void greeting1icon()
{


            glDisable(GL_LIGHTING);


            int i;
            float degInRad;
            float radius = 0.9;

            glPushMatrix();
            glTranslatef(0,-0.8,0);
                glBegin(GL_POLYGON);
                glColor3f(1,1,1);
                glVertex2f(0,0);
                glColor3ub(255,253,87);
               for (i=0; i <= 361; i++)
               {
                  degInRad = i*3.14/180;
                  glVertex3f(cos(degInRad)*(1.0*radius),sin(degInRad)*(1.0*radius),-0.01);
               }
               glEnd();

               glScalef(0.7,0.7,0.7);
               glTranslatef(1.5,-0.2,0);
               diya();
            glPopMatrix();


            glEnable(GL_LIGHTING);
}

void sideLight(int color)
{
     //RED: 0
     //GREEN: 1
     //BLUE: 2

     int i;
     float radius;
     float degInRad;

    GLubyte red[]  = { 255, 0, 0};
    GLubyte green[]  = {   0, 255,   0};
    GLubyte blue[]  = { 0,  0, 255};

    glPushMatrix();
          radius=0.6;
          glScalef(0.07,0.3,1);
          glBegin(GL_POLYGON);
              switch(color)
              {
                           case 0:
                                glColor3ubv(red);
                                break;
                           case 1:
                                glColor3ubv(green);
                                break;
                           case 2:
                                glColor3ubv(blue);
                                break;
                           default:
                                glColor3ubv(red);
                                break;
              }

               glVertex3f(0,0,0.1);
               glColor3ub(0,0,0);
               for (i=0; i <= 361; i++)
               {
                    degInRad = i*3.14/180;
                    glVertex3f(cos(degInRad)*radius,sin(degInRad)*radius,0.1);
               }
               glEnd();
    glPopMatrix();
}


void greeting2img()
{
     int i;

     glDisable(GL_LIGHTING);
     glEnable(GL_TEXTURE_2D);

     ganpati = LoadTextureRAW("ganpati.raw",400,400);

     glBindTexture (GL_TEXTURE_2D, ganpati);

     glPushMatrix();
         glTranslatef(1.2,0,0);
         glScalef(1.5,1.5,1);
         glBegin(GL_POLYGON);
                             glTexCoord3f(-1,1,0.3);
                             glVertex3f(-1,1,0.2);
                             glTexCoord3f(0,1,0.3);
                             glVertex3f(1,1,0.2);
                             glTexCoord3f(0,0,0.3);
                             glVertex3f(1,-1,0.2);
                             glTexCoord3f(-1,0,0.3);
                             glVertex3f(-1,-1,0.2);
         glEnd();
     glPopMatrix();

     happydiwali = LoadTextureRAW("happydiwali.raw",300,300);
     glBindTexture( GL_TEXTURE_2D,happydiwali );
     glPushMatrix();
         glTranslatef(-1.55,0,0);
         glScalef(1.3,1.3,1);
         glBegin(GL_POLYGON);
                             glTexCoord3f(-1,1,0.3);
                             glVertex3f(-1,1,0.2);
                             glTexCoord3f(0,1,0.3);
                             glVertex3f(1,1,0.2);
                             glTexCoord3f(0,0,0.3);
                             glVertex3f(1,-1,0.2);
                             glTexCoord3f(-1,0,0.3);
                             glVertex3f(-1,-1,0.2);
         glEnd();
     glPopMatrix();

     glEnable(GL_LIGHTING);
     glDisable(GL_TEXTURE_2D);
}

float triangleAngle2 = 1;
int dir;
int startColor = 0;
void greeting2()
{
     backButton();
     greeting2img();
     float i;
     int toggler = 0;
     glDisable(GL_LIGHTING);

            //BACKGROUND
                 glBegin(GL_QUADS);
                       glColor3f(0,0,0);
                       glVertex3f(-5,5,-0.2);
                       glColor3f(50,50,1);
                       glVertex3f(5,5,-0.2);
                       glColor3ub(153,153,255);
                       glVertex3f(5,-5,-0.2);
                       glColor3f(0,0.5,0.5);
                       glVertex3f(-5,-5,-0.2);
                glEnd();

            glBegin(GL_POLYGON);
                    glColor3ub(252,255,5);
                    glVertex3f(-3.2,2.5,0);
                    glColor3ub(248,228,0);
                    glVertex3f(3.2,2.5,0);
                    glColor3ub(68,63,2);
                    glVertex3f(3.2,-2.5,0);
                    glColor3ub(68,63,2);
                    glVertex3f(-3.2,-2.5,0);
            glEnd();

            glPushMatrix();
            glTranslatef(0,2.4,0);
            glRotatef(triangleAngle2,1,0,0);



                glBegin(GL_TRIANGLES);
                   for(i=-3.2; i<=3.2; i=i+0.4 )
                   {
                        glColor3ub(107,3,3);
                        glVertex3f(i,0,0.01);
                        glVertex3f(i+0.4,0,0.01);
                        if(toggler)
                        {
                            glColor3ub(255,0,0);
                            toggler = 0;
                        }
                        else
                        {
                            glColor3ub(255,96,0);
                            toggler = 1;
                        }
                        glVertex3f(i+0.2,-0.6,0.01);
                        }
                glEnd();

            glPopMatrix();

            //LIGHTS
            int colorIterator = startColor;
            int numLights;

            //LEFT
            glPushMatrix();
                           glTranslatef(-3,1.4,0);
                           for(numLights = 11; numLights>0; numLights-=1)
                           {
                                            colorIterator=(colorIterator + 1)%3;
                                             sideLight(colorIterator);
                                             glTranslatef(0,-0.35,0);
                           }
            glPopMatrix();

            //RIGHT
            glPushMatrix();
                           glTranslatef(3,1.4,0);
                           for(numLights = 11; numLights>0; numLights-=1)
                           {
                                            colorIterator=(colorIterator + 1)%3;
                                             sideLight(colorIterator);
                                             glTranslatef(0,-0.35,0);
                           }

            glPopMatrix();

            //BOTTOM
            glPushMatrix();
                           glTranslatef(-2.8,-2.3,0);
                           glRotatef(90,0,0,1);
                           for(numLights = 17; numLights>0; numLights-=1)
                           {
                                            colorIterator=(colorIterator + 1)%3;
                                             sideLight(colorIterator);
                                             glTranslatef(0,-0.35,0);
                           }

            glPopMatrix();

            startColor = (startColor + 1)%3;
            //sleep(25);

            if(triangleAngle2>=0)
                  dir = 1;
             else if(triangleAngle2<=-45)
                  dir = 0;

             if(dir==0)
                  triangleAngle2 += 2;
             else
                  triangleAngle2 -= 2;


     //TEXT
     glColor3ub(255,255,255);
     if(status==GREETING2)
     {
          renderBitmapString(-1.4,-1.8,0.1,(void *)bigFont,"Swathi,Raksha,Sushmitha");
     }
     else
     {
         glRasterPos3f(-1,-1.8,0.1);
         renderBitmapString(-2,-1.8,0.1,(void *)bigFont,name2);
     }

     glEnable(GL_LIGHTING);
}

int iconColorIter=0;
int sleepCount = 0;
void greeting2icon()
{
            sleepCount += 1;

            glDisable(GL_LIGHTING);

            if(sleepCount >= 10)
            {
                         iconColorIter = (iconColorIter+1)%3;
                         sleepCount = 0;
            }

            int i;
            float degInRad;
            float radius = 0.9;

            glPushMatrix();
            glTranslatef(0,-0.8,0);
                glBegin(GL_POLYGON);
                glColor3f(1,1,1);
                glVertex2f(0,0);
                glColor3ub(255,253,87);
               for (i=0; i <= 361; i++)
               {
                  degInRad = i*3.14/180;
                  glVertex3f(cos(degInRad)*(1.0*radius),sin(degInRad)*(1.0*radius),-0.01);
               }
               glEnd();
            glTranslatef(-0.05,-0.05,0);
            glScalef(14.28,3.33,1);

            sideLight(iconColorIter);
            glPopMatrix();


            glEnable(GL_LIGHTING);
}


void displayd (void) {
    glDisable( GL_TEXTURE_2D );

    glClearColor (0.0,0.0,0.0,1.0); //clear the screen to black
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //clear the color buffer and the depth buffer
    glLoadIdentity();
    GLfloat DiffuseLight[] = {1,1,1}; //set DiffuseLight[] to the specified values
    GLfloat AmbientLight[] = {0,0,0}; //set AmbientLight[] to the specified values
    glLightfv (GL_LIGHT0, GL_DIFFUSE, DiffuseLight); //change the light accordingly
    glLightfv (GL_LIGHT0, GL_AMBIENT, AmbientLight); //change the light accordingly
    GLfloat LightPosition[] = {lx, ly, lz, lw}; //set the LightPosition to the specified values
    glLightfv (GL_LIGHT0, GL_POSITION, LightPosition); //change the light accordingly
    gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); //camera position, x,y,z, looking at x,y,z, Up Positions of the camera


    if(status==DISPLAY_MENU)
    {
         displayMenu();
         titleOnTop();
    }
    else if(status==LEFT_MENU)
    {
         displayMenu();
         titleBelow();
         leftMenu();
    }
    else if(status==RIGHT_MENU)
    {
         displayMenu();
         titleBelow();
         rightMenu();
    }
    else if(status==CHAKRI_STEADY)
    {
         steadychakri();
    }
    else if(status==CHAKRI)
    {
         playThemeMusic = 1;      //When back to display, play theme music
         chakri();
    }
    else if(status==FLOWERPOT_STEADY)
    {
         steadyflowerpot();
    }
    else if(status==FLOWERPOT)
    {
         playThemeMusic = 1;      //When back to display, play theme music
         flowerpot();
    }
    else if(status==ROCKET_STEADY)
    {
         steadyrocket();
    }
    else if(status==ROCKET)
    {
         playThemeMusic = 1;      //When back to display, play theme music
         rocket();
    }
    else if(status==ROCKETBLINK)
    {
         rocketBlinkScreen();
    }
    else if(status==GREETING1 || status==GREETING1SIGNED)
    {
         greeting1();
    }
    else if(status==GREETING2 || status==GREETING2SIGNED)
    {
         greeting2();
    }

    glutSwapBuffers(); //swap the buffers
    //angle++; //increase the angle
    if(status!=0 && status !=1 && status !=2)
         Sleep(35);
}

void reshape (int w, int h) {
     scr_width = w;
     scr_height = h;

    glViewport (0, 0, (GLsizei)w, (GLsizei)h); //set the viewport to the current window specifications
    glMatrixMode (GL_PROJECTION); //set the matrix to projection

    glLoadIdentity ();
    gluPerspective (60, (GLfloat)w / (GLfloat)h, 1.0, 100.0); //set the perspective (angle of sight, width, height, , depth)
    glMatrixMode (GL_MODELVIEW); //set the matrix back to model
}

void mouseClick(int button, int state, int xClick, int yClick)
{
     //printf("%d %d\n", xClick, yClick);
     if(button == GLUT_LEFT_BUTTON && state==GLUT_DOWN)
     {

                 float x, y;
                 float sceneWidth, sceneHeight;

                    sceneHeight = scr_height;
                    sceneWidth = scr_height * 4.0/3.0;
                    x = (xClick - (scr_width - sceneWidth)/2)/sceneWidth * 800.0;
                    y = yClick/sceneHeight * 600.0;


                 if(status==DISPLAY_MENU)
                 {
                     if(x>0 && x<390 && y>0 && y<45)
                            status = LEFT_MENU;
                     else if(x>405 && x<800 && y>0 && y<45)
                            status = RIGHT_MENU;
                     else if(x>350 && x<455 && y>570 && y<600)
                               exit(0);
                 }
                 else if(status==LEFT_MENU)
                 {
                      if(x>125 && x<260 && y>65 && y<205)
                               status = CHAKRI_STEADY;
                      else if(x>15 && x<150 && y>215 && y<350)
                               status = FLOWERPOT_STEADY;
                      else if(x>235 && x<370 && y>215 && y<350)
                               status = ROCKET_STEADY;
                      else if(x>405 && x<800 && y>0 && y<45)
                               status = RIGHT_MENU;
                      else if(x>350 && x<455 && y>570 && y<600)
                               exit(0);
                      else
                               status = DISPLAY_MENU;

                 }
                 else if(status==RIGHT_MENU)
                 {
                      if(x>0 && x<390 && y>0 && y<45)
                            status = LEFT_MENU;
                      else if(x>445 && x<580 && y>85 && y<220)
                               status = GREETING1;
                      else if(x>630 && x<763 && y>85 && y<220)
                               status = GREETING2;
                      else if(x>350 && x<455 && y>570 && y<600)
                               exit(0);
                      else
                               status = DISPLAY_MENU;


                 }
                 else if(status==CHAKRI_STEADY)
                 {
                      if(x>347 && x<452 && y>247 && y<353)
                      {
                               PlaySound(TEXT("chakri.wav"), NULL, SND_ASYNC|SND_FILENAME);
                               status = CHAKRI;
                      }
                      else if(x>670 && x<750 && y>570 && y<590)
                      {
                                 status = DISPLAY_MENU;
                                 resetMaterialProperties();
                                 glutSetCursor(GLUT_CURSOR_INHERIT);
                      }
                 }
                 else if(status==FLOWERPOT_STEADY)
                 {
                      if(x>375 && x<425 && y>460 && y<525)
                      {
                               PlaySound(TEXT("flowerpot.wav"), NULL, SND_ASYNC|SND_FILENAME);
                               status = FLOWERPOT;
                               glCreateParticles();
                               texture[0] = LoadTextureRAW( "particle_mask.raw",256,256); //load our texture
                               texture[1] = LoadTextureRAW( "particle.raw",256,256);
                      }
                      else if(x>670 && x<750 && y>570 && y<590)
                      {
                                 status = DISPLAY_MENU;
                                 resetMaterialProperties();
                                 glutSetCursor(GLUT_CURSOR_INHERIT);
                                 FreeTexture(texture[0]);
                                 FreeTexture(texture[1]);
                      }
                 }
                 else if(status==ROCKET_STEADY)
                 {
                      if(x>250 && x<300 && y>330 && y<530)
                      {
                               PlaySound(TEXT("whoosh.wav"), NULL, SND_ASYNC|SND_FILENAME);
                               Sleep(50);
                               status = ROCKET;
                      }
                      else if(x>670 && x<750 && y>570 && y<590)
                      {
                                 status = DISPLAY_MENU;
                                 resetMaterialProperties();
                                 glutSetCursor(GLUT_CURSOR_INHERIT);
                      }
                 }
                 else if(status==CHAKRI)
                 {
                      if(x>670 && x<750 && y>570 && y<590)
                      {
                                 status = DISPLAY_MENU;
                                 resetMaterialProperties();
                                 cangle = 50;
                                 chakri_axes[0] = 0;
                                 chakri_axes[1] = 0;
                                 chakri_axes[2] = 0;
                                 glutSetCursor(GLUT_CURSOR_INHERIT);
                      }
                 }
                 else if(status==FLOWERPOT)
                 {
                      if(x>670 && x<750 && y>570 && y<590)
                      {
                                 status = DISPLAY_MENU;
                                 resetMaterialProperties();
                                 glutSetCursor(GLUT_CURSOR_INHERIT);
                                 FreeTexture(0);
                                 FreeTexture(1);
                                 FreeTexture(2);
                                 GLfloat restore_ambient[] = {0,0,0};
                                 glLightfv (GL_LIGHT0, GL_AMBIENT, restore_ambient);
                      }
                 }
                 else if(status==ROCKET)
                 {
                      if(x>670 && x<750 && y>570 && y<590)
                      {
                                 status = DISPLAY_MENU;
                                 resetMaterialProperties();
                                 glDisable(GL_TEXTURE_2D);
                                 rocketx = -2;
                                 rockety = -1;
                                 rocketz = 0;
                                 rocketangle = 0;
                                 glutSetCursor(GLUT_CURSOR_INHERIT);
                      }
                 }
                  else if(status==ROCKETBLINK)
                 {
                      if(x>670 && x<750 && y>570 && y<590)
                      {
                                 status = DISPLAY_MENU;
                                 resetMaterialProperties();
                                 glDisable(GL_TEXTURE_2D);
                                 rocketx = -2;
                                 rockety = -1;
                                 rocketz = 0;
                                 rocketangle = 0;
                                 glutSetCursor(GLUT_CURSOR_INHERIT);
                      }
                 }
                 else if(status==GREETING1 || status==GREETING1SIGNED)
                 {
                      if(x>670 && x<750 && y>570 && y<590)
                      {
                                 status = DISPLAY_MENU;
                                 openAngle1 = 135;
                                 name1[0] = '\0';
                                 name1Iter = 0;
                      }
                 }
                 else if(status==GREETING2 || status==GREETING2SIGNED)
                 {
                      if(x>670 && x<750 && y>570 && y<590)
                      {
                                 status = DISPLAY_MENU;
                                 name2[0] = '\0';
                                 name2Iter = 0;
                                 FreeTexture(ganpati);
                                 FreeTexture(happydiwali);
                      }
                 }
     }
}

void keyboard (unsigned char key, int x, int y) {
     if(status==GREETING1)
     {
                          if(key==13) //ENTER
                          {
                                      status=GREETING1SIGNED;
                                      name1[name1Iter]='\0';
                          }
                          else
                          {
                                      name1[name1Iter]=key;
                                      name1Iter++;
                          }
     }

     if(status==GREETING2)
     {
                          if(key==13) //ENTER
                          {
                                      status=GREETING2SIGNED;
                                      name2[name2Iter]='\0';
                          }
                          else
                          {
                                      name2[name2Iter]=key;
                                      name2Iter++;
                          }
     }

}

void passiveMotion(int x, int y)
{
     passiveX = x/800.0*3.06 -1.53;
     passiveY = -1*(y/600.0*2.28 -1.14);
}



//function to load the RAW file

GLuint LoadTextureRAW( const char * filename, int width,
int height )
{
  GLuint texture;
  unsigned char * data;
  FILE * file;

  file = fopen( filename, "rb" );
  if ( file == NULL ) return 0;

  data = (unsigned char *)malloc( width * height * 3 );

  fread( data, width * height * 3, 1, file );
  fclose( file );

  glGenTextures(1, &texture );

  glBindTexture(GL_TEXTURE_2D, texture);

  glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

  glTexEnvi( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE );

  glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST );

  glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );

  gluBuild2DMipmaps(GL_TEXTURE_2D, 3, width, height, GL_RGB, GL_UNSIGNED_BYTE, data);

  free( data );

  return texture;
}

void FreeTexture( GLuint texture )
{
  glDeleteTextures( 1, &texture );
}
/*void keys2(unsigned char key, int x, int y){
    switch (key) {

case 'b': {window=7;
glutInitWindowSize(1280,725);
glutInitWindowPosition(0,0);
glutCreateWindow("Festivals of India");

glutDisplayFunc(window7);
//glutMouseFunc(mouse);

//glutSwapBuffers();
glutReshapeFunc(myReshape);
//setup();
glutMainLoop();}

        }
}*/
void window5()
{   glutDestroyWindow(win);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_DEPTH); //set the display to Double buffer, with depth
    glutInitWindowSize (800, 600); //set the window size
    glutInitWindowPosition (150, 150); //set the position of the window
    glutCreateWindow ("Happy Diwali"); //the caption of the window
    init (); //call the init function
    glutDisplayFunc (displayd); //use the display function to draw everything
    glutIdleFunc (displayd); //update any variables in display, display can be changed to anyhing, as long as you move the variables to be updated, in this case, angle++;
    glutReshapeFunc (reshape); //reshape the window accordingly
    glutMouseFunc(mouseClick);
    glutKeyboardFunc (keyboard);
    //glutKeyboardFunc (keys2);
     //check the keyboard
    glutPassiveMotionFunc(passiveMotion);
    glutMainLoop ();
}
//Makar snakranthi

float shift1=0;

//int boatStatus = 1;
//int x,y;
//float boatX = 0;
//float boatY = 0;



//void drawBoat(int);

void treem();
void scene1();
void drawSunm();
void home();

//float move, angle;

void DrawCircles(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void drawSunm()
{
    glPushMatrix();
    glColor3f(3,1.5,0.0);
    DrawCircles(150,700,45,1000);
    glColor3f(3,1,0.5);
    DrawCircles(150,700,40,1000);
    glPopMatrix();

}


void treem(int x,int y)
{
	glPushMatrix();

	glBegin(GL_POLYGON); //Tree
	glColor3f(0.6, 0.3, 0.0);
	glVertex2i(x+150, 450+y);
	glVertex2i(x+165, 450+y);
	glVertex2i(x+165, 550+y);
	glVertex2i(x+150, 550+y);

	glEnd();
	glColor3f(0.0, 0.7, 0.1);
	DrawCircles(x+130, 545+y, 40, 1000); // 4
	glColor3f(0.0, 0.7, 0.1);
	DrawCircles(x+155, 580+y, 40, 1000);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircles(x+170, 550+y, 40, 1000);

	glPopMatrix();

}
void scene1()
{
	glPushMatrix();

	glBegin(GL_POLYGON); //Sky
	glColor3f(1.3, 0.8, 0.5);
	glVertex2i(0, 800);
	glVertex2i(1200, 800);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	glBegin(GL_POLYGON); // ground
	glColor3f(0.3, 1, 0.3);
	glVertex2i(0, 500);
	glVertex2i(1200,500);
	glVertex2i(1200,0);
	glVertex2i(0, 0);
	glEnd();

	glBegin(GL_POLYGON); //Road
	glColor3f(0.7, 0.3, 0.3);
	glVertex2i(400, 0);
	glVertex2i(500, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 0);
	glEnd();
	glColor3f(0.0,0.9,0);//river
	DrawCircles(1200,0,300,1000);
	DrawCircles(1000,0,200,1000);

	glColor3f(0.5,2.3,3);//river
	DrawCircles(1200,0,290,1000);
	DrawCircles(1000,0,190,1000);

	glBegin(GL_POLYGON); //Road
	glColor3f(0.3,0.3,0.3);
	glVertex2i(410, 0);
	glVertex2i(510, 500);
	glVertex2i(590, 500);
	glVertex2i(690, 0);
	glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glPointSize(3);
    glLineWidth(10);
    glVertex2i(550,500);
    glVertex2i(550,450);
    glVertex2i(550,400);
    glVertex2i(550,350);
    glVertex2i(550,300);
    glVertex2i(550,250);
    glVertex2i(550,200);
    glVertex2i(550,150);
    glVertex2i(550,100);
    glVertex2i(550,20);
    glEnd();

	glPopMatrix();

}
void home()
{
    glPushMatrix();
    glColor3f(0.6,0.5,1.5);
    glBegin(GL_POLYGON);
    glVertex2i(10,350);
    glVertex2i(70,450);
    glVertex2i(130,350);
    glVertex2i(130,200);
    glVertex2i(10,200);
    glEnd();
    glColor3f(0.2,0.2,2);
    glBegin(GL_POLYGON);
    glVertex2i(130,200);
    glVertex2i(250,250);
    glVertex2i(250,350);
    glVertex2i(130,350);
    glEnd();
    glColor3f(0.7,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(130,350);
    glVertex2i(70,450);
    glVertex2i(200,410);
    glVertex2i(250,350);
    glEnd();
    glColor3f(2.8,0.7,0.2);
    glBegin(GL_POLYGON);
    glVertex2i(150,208);
    glVertex2i(150,340);
    glVertex2i(190,340);
    glVertex2i(190,225);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(210,290);
    glVertex2i(210,320);
    glVertex2i(235,320);
    glVertex2i(235,295);
    glEnd();
    glColor3f(0.3,0,0);
    DrawCircles(70,400,10,1000);
    glBegin(GL_POLYGON);
    glColor3f(2.8,1.7,0.6);
    glVertex2i(440,480);
    glVertex2i(330,480);
    glVertex2i(330,380);
    glVertex2i(440,380);
    glEnd();
    glBegin(GL_POLYGON);//door
    glColor3f(0.5,0,0);
    glVertex2i(400,460);
    glVertex2i(370,460);
    glVertex2i(370,380);
    glVertex2i(400,380);
    glEnd();
    glBegin(GL_POLYGON);//window
    glVertex2i(360,450);
    glVertex2i(340,450);
    glVertex2i(340,430);
    glVertex2i(360,430);
    glEnd();
    glBegin(GL_POLYGON);//window

    glVertex2i(410,450);
    glVertex2i(430,450);
    glVertex2i(430,430);
    glVertex2i(410,430);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.7,0,0);
    glVertex2i(320,480);
    glVertex2i(385,550);
    glVertex2i(450,480);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(2.8,0.5,1.6);
    glVertex2i(840,580);
    glVertex2i(730,580);
    glVertex2i(730,480);
    glVertex2i(840,480);
    glEnd();
    glBegin(GL_POLYGON);//door
    glColor3f(0.5,0,0);
    glVertex2i(800,560);
    glVertex2i(770,560);
    glVertex2i(770,480);
    glVertex2i(800,480);
    glEnd();
    glBegin(GL_POLYGON);//window
    glVertex2i(760,550);
    glVertex2i(740,550);
    glVertex2i(740,530);
    glVertex2i(760,530);
    glEnd();
    glBegin(GL_POLYGON);//window

    glVertex2i(810,550);
    glVertex2i(830,550);
    glVertex2i(830,530);
    glVertex2i(810,530);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.7,0,0);
    glVertex2i(720,580);
    glVertex2i(785,650);
    glVertex2i(850,580);
    glEnd();

    glPopMatrix();
}
void pot()
{
    glPushMatrix();
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(250,50);
    glVertex2i(350,50);
    glVertex2i(320,90);
    glVertex2i(280,90);
    glEnd();
    glColor3f(3.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2i(270,50);
    glVertex2i(330,50);
    glVertex2i(315,90);
    glVertex2i(285,90);
    glEnd();
    glColor3f(1,1,1);
    DrawCircles(300,140,20,1000);
    glColor3f(3.0,0.5,0.0);
    DrawCircles(300,115,30,1000);
    glBegin(GL_POLYGON);
    glVertex2i(280,135);
    glVertex2i(280,145);
    glVertex2i(320,145);
    glVertex2i(320,135);
    glEnd();
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(260,32);
    glVertex2i(260,30);
    glVertex2i(180,50);
    glVertex2i(180,52);
    glEnd();
    glColor3f(0.0,0.2,0);
    glBegin(GL_POLYGON);
    glVertex2i(180,55);
    glVertex2i(130,52.5);
    glVertex2i(180,50);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(180,50);
    glVertex2i(150,52.5);
    glVertex2i(190,40);
    glVertex2i(160,42);
    glEnd();
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(260,37);
    glVertex2i(260,35);
    glVertex2i(180,45);
    glVertex2i(180,47);
    glEnd();
    glColor3f(0.0,0.2,0);
    glBegin(GL_POLYGON);
    glVertex2i(180,60);
    glVertex2i(130,55.5);
    glVertex2i(180,55);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(180,55);
    glVertex2i(150,57.5);
    glVertex2i(190,45);
    glVertex2i(160,47);
    glEnd();
    glColor3f(0.5,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(260,52);
    glVertex2i(260,50);
    glVertex2i(180,70);
    glVertex2i(180,72);
    glEnd();
    glColor3f(0.0,0.2,0);
    glBegin(GL_POLYGON);
    glVertex2i(180,75);
    glVertex2i(130,72.5);
    glVertex2i(180,70);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(180,70);
    glVertex2i(150,72.5);
    glVertex2i(190,60);
    glVertex2i(160,62);
    glEnd();
    glPopMatrix();
}


void drawpeople(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircles(52+x,190+y,18,1000);
    glColor3f(1.0,0.7,0.5);
    DrawCircles(52+x,188+y,16,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(48+x,191+y);
    glVertex2i(48+x,194+y);
    glVertex2i(56+x,191+y);
    glVertex2i(56+x,194+y);
    glVertex2i(52+x,189+y);
    glVertex2i(52+x,185+y);
    glVertex2i(54+x,182+y);
    glVertex2i(50+x,182+y);
    glEnd();
    glBegin(GL_POLYGON);//body
    glColor3f(0,0,0.5);
    glVertex2i(37+x,172+y);
    glVertex2i(67+x,172+y);
    glVertex2i(67+x,135+y);
    glVertex2i(37+x,135+y);
    glEnd();
    glBegin(GL_POLYGON);//lefthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(37+x,172+y);
    glVertex2i(27+x,172+y);
    glVertex2i(27+x,140+y);
    glVertex2i(37+x,140+y);
    glEnd();
    glBegin(GL_POLYGON);//righthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(77+x,172+y);
    glVertex2i(67+x,172+y);
    glVertex2i(67+x,140+y);
    glVertex2i(77+x,140+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(37+x,135+y);
    glVertex2i(52+x,135+y);
    glVertex2i(48+x,105+y);
    glVertex2i(37+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(52+x,135+y);
    glVertex2i(67+x,135+y);
    glVertex2i(67+x,105+y);
    glVertex2i(56+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.7,0.5);
    glVertex2i(56+x,95+y);
    glVertex2i(67+x,95+y);
    glVertex2i(67+x,105+y);
    glVertex2i(56+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.7,0.5);
    glVertex2i(37+x,95+y);
    glVertex2i(48+x,95+y);
    glVertex2i(48+x,105+y);
    glVertex2i(37+x,105+y);
    glEnd();
    glPopMatrix();
}

void drawpeople1(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircles(152+x,190+y,18,1000);
    glColor3f(1.0,0.7,0.5);
    DrawCircles(152+x,188+y,16,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(148+x,191+y);
    glVertex2i(148+x,194+y);
    glVertex2i(156+x,191+y);
    glVertex2i(156+x,194+y);
    glVertex2i(152+x,189+y);
    glVertex2i(152+x,185+y);
    glVertex2i(154+x,182+y);
    glVertex2i(150+x,182+y);
    glEnd();
    glBegin(GL_POLYGON);//body
    glColor3f(0.5,0,0.4);
    glVertex2i(137+x,172+y);
    glVertex2i(167+x,172+y);
    glVertex2i(167+x,135+y);
    glVertex2i(137+x,135+y);
    glEnd();
    glBegin(GL_POLYGON);//lefthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(137+x,172+y);
    glVertex2i(127+x,172+y);
    glVertex2i(127+x,140+y);
    glVertex2i(137+x,140+y);
    glEnd();
    glBegin(GL_POLYGON);//righthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(177+x,172+y);
    glVertex2i(167+x,172+y);
    glVertex2i(167+x,140+y);
    glVertex2i(177+x,140+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(3,0.2,0.3);
    glVertex2i(137+x,135+y);
    glVertex2i(167+x,135+y);
    glVertex2i(167+x,105+y);
    glVertex2i(137+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);//rightleg
    glColor3f(1.0,0.7,0.5);
    glVertex2i(156+x,95+y);
    glVertex2i(167+x,95+y);
    glVertex2i(167+x,105+y);
    glVertex2i(156+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);//leftleg
    glColor3f(1.0,0.7,0.5);
    glVertex2i(137+x,95+y);
    glVertex2i(148+x,95+y);
    glVertex2i(148+x,105+y);
    glVertex2i(137+x,105+y);
    glEnd();
    glPopMatrix();
}

void drawpeople2(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircles(252+x,190+y,18,1000);
    glColor3f(1.0,0.7,0.5);
    DrawCircles(252+x,188+y,16,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(248+x,191+y);
    glVertex2i(248+x,194+y);
    glVertex2i(256+x,191+y);
    glVertex2i(256+x,194+y);
    glVertex2i(252+x,189+y);
    glVertex2i(252+x,185+y);
    glVertex2i(254+x,182+y);
    glVertex2i(250+x,182+y);
    glEnd();
    glBegin(GL_POLYGON);//body
    glColor3f(1,1,1);
    glVertex2i(237+x,172+y);
    glVertex2i(267+x,172+y);
    glVertex2i(267+x,135+y);
    glVertex2i(237+x,135+y);
    glEnd();
    glBegin(GL_POLYGON);//lefthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(237+x,172+y);
    glVertex2i(227+x,172+y);
    glVertex2i(227+x,140+y);
    glVertex2i(237+x,140+y);
    glEnd();
    glBegin(GL_POLYGON);//righthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(277+x,172+y);
    glVertex2i(267+x,172+y);
    glVertex2i(267+x,140+y);
    glVertex2i(277+x,140+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.8);
    glVertex2i(237+x,135+y);
    glVertex2i(252+x,135+y);
    glVertex2i(248+x,105+y);
    glVertex2i(237+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.8);
    glVertex2i(252+x,135+y);
    glVertex2i(267+x,135+y);
    glVertex2i(267+x,105+y);
    glVertex2i(256+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.7,0.5);
    glVertex2i(256+x,95+y);
    glVertex2i(267+x,95+y);
    glVertex2i(267+x,105+y);
    glVertex2i(256+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.7,0.5);
    glVertex2i(237+x,95+y);
    glVertex2i(248+x,95+y);
    glVertex2i(248+x,105+y);
    glVertex2i(237+x,105+y);
    glEnd();
    glPopMatrix();
}

void drawpeople3(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircles(452+x,190+y,18,1000);
    glColor3f(1.0,0.7,0.5);
    DrawCircles(452+x,188+y,16,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(448+x,191+y);
    glVertex2i(448+x,194+y);
    glVertex2i(456+x,191+y);
    glVertex2i(456+x,194+y);
    glVertex2i(452+x,189+y);
    glVertex2i(452+x,185+y);
    glVertex2i(454+x,182+y);
    glVertex2i(450+x,182+y);
    glEnd();
    glBegin(GL_POLYGON);//body
    glColor3f(0,0.9,0.5);
    glVertex2i(437+x,172+y);
    glVertex2i(467+x,172+y);
    glVertex2i(467+x,135+y);
    glVertex2i(437+x,135+y);
    glEnd();
    glBegin(GL_POLYGON);//lefthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(437+x,162+y);
    glVertex2i(427+x,162+y);
    glVertex2i(417+x,200+y);
    glVertex2i(427+x,200+y);
    glEnd();
    glBegin(GL_LINES);//kiteThread
    glColor3f(0,0,1);
    glPointSize(3);
    glVertex2i(425+x,195+y+shift1);
    glVertex2i(350+x,350+y+shift1);
    glEnd();
    glBegin(GL_POLYGON);//kite
    glColor3f(1,0,0);
    glVertex2i(350+x,350+y+shift1);
    glVertex2i(375+x,390+y+shift1);
    glVertex2i(350+x,410+y+shift1);
    glVertex2i(325+x,390+y+shift1);
    glEnd();
    glBegin(GL_POLYGON);//righthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(477+x,172+y);
    glVertex2i(467+x,172+y);
    glVertex2i(467+x,140+y);
    glVertex2i(477+x,140+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.8);
    glVertex2i(437+x,135+y);
    glVertex2i(452+x,135+y);
    glVertex2i(448+x,105+y);
    glVertex2i(437+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.8);
    glVertex2i(452+x,135+y);
    glVertex2i(467+x,135+y);
    glVertex2i(467+x,105+y);
    glVertex2i(456+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.7,0.5);
    glVertex2i(456+x,95+y);
    glVertex2i(467+x,95+y);
    glVertex2i(467+x,105+y);
    glVertex2i(456+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.7,0.5);
    glVertex2i(437+x,95+y);
    glVertex2i(448+x,95+y);
    glVertex2i(448+x,105+y);
    glVertex2i(437+x,105+y);
    glEnd();
    glPopMatrix();
}

void drawpeople4(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircles(552+x,190+y,18,1000);
    glColor3f(1.0,0.7,0.5);
    DrawCircles(552+x,188+y,16,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(548+x,191+y);
    glVertex2i(548+x,194+y);
    glVertex2i(556+x,191+y);
    glVertex2i(556+x,194+y);
    glVertex2i(552+x,189+y);
    glVertex2i(552+x,185+y);
    glVertex2i(554+x,182+y);
    glVertex2i(550+x,182+y);
    glEnd();
    glBegin(GL_POLYGON);//body
    glColor3f(0.4,0.6,0.2);
    glVertex2i(537+x,172+y);
    glVertex2i(567+x,172+y);
    glVertex2i(567+x,135+y);
    glVertex2i(537+x,135+y);
    glEnd();
    glBegin(GL_POLYGON);//lefthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(537+x,162+y);
    glVertex2i(527+x,162+y);
    glVertex2i(517+x,200+y);
    glVertex2i(527+x,200+y);
    glEnd();
    glBegin(GL_LINES);//kiteThread
    glColor3f(1,0,1);
    glPointSize(3);
    glVertex2i(525+x,195+y);
    glVertex2i(450+x,350+y);
    glEnd();
    glBegin(GL_POLYGON);//kite
    glColor3f(1,1,1);
    glVertex2i(450+x,350+y);
    glVertex2i(475+x,390+y);
    glVertex2i(450+x,410+y);
    glVertex2i(425+x,390+y);
    glEnd();
    glBegin(GL_POLYGON);//righthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(577+x,172+y);
    glVertex2i(567+x,172+y);
    glVertex2i(567+x,140+y);
    glVertex2i(577+x,140+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(2,0.8,0.3);
    glVertex2i(537+x,135+y);
    glVertex2i(567+x,135+y);
    glVertex2i(567+x,105+y);
    glVertex2i(537+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);//rightleg
    glColor3f(1.0,0.7,0.5);
    glVertex2i(556+x,95+y);
    glVertex2i(567+x,95+y);
    glVertex2i(567+x,105+y);
    glVertex2i(556+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);//leftleg
    glColor3f(1.0,0.7,0.5);
    glVertex2i(537+x,95+y);
    glVertex2i(548+x,95+y);
    glVertex2i(548+x,105+y);
    glVertex2i(537+x,105+y);
    glEnd();
    glPopMatrix();
}

void drawpeople5(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircles(652+x,190+y,18,1000);
    glColor3f(1.0,0.7,0.5);
    DrawCircles(652+x,188+y,16,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(648+x,191+y);
    glVertex2i(648+x,194+y);
    glVertex2i(656+x,191+y);
    glVertex2i(656+x,194+y);
    glVertex2i(652+x,189+y);
    glVertex2i(652+x,185+y);
    glVertex2i(654+x,182+y);
    glVertex2i(650+x,182+y);
    glEnd();
    glBegin(GL_POLYGON);//body
    glColor3f(0.5,1,2);
    glVertex2i(637+x,172+y);
    glVertex2i(667+x,172+y);
    glVertex2i(667+x,135+y);
    glVertex2i(637+x,135+y);
    glEnd();
    glBegin(GL_POLYGON);//lefthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(637+x,162+y);
    glVertex2i(627+x,162+y);
    glVertex2i(617+x,200+y);
    glVertex2i(627+x,200+y);
    glEnd();
    glBegin(GL_LINES);//kiteThread
    glColor3f(0,1,1);
    glPointSize(3);
    glVertex2i(625+x+shift1,195+y+shift1);
    glVertex2i(550+x+shift1,350+y+shift1);
    glEnd();
    glBegin(GL_POLYGON);//kite
    glColor3f(1,1,0);
    glVertex2i(550+x+shift1,350+y+shift1);
    glVertex2i(575+x+shift1,390+y+shift1);
    glVertex2i(550+x+shift1,410+y+shift1);
    glVertex2i(525+x+shift1,390+y+shift1);
    glEnd();
    glBegin(GL_POLYGON);//righthand
    glColor3f(1.0,0.7,0.5);
    glVertex2i(677+x,172+y);
    glVertex2i(667+x,172+y);
    glVertex2i(667+x,140+y);
    glVertex2i(677+x,140+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0.8,0.8);
    glVertex2i(637+x,135+y);
    glVertex2i(652+x,135+y);
    glVertex2i(648+x,105+y);
    glVertex2i(637+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0.8,0.8);
    glVertex2i(652+x,135+y);
    glVertex2i(667+x,135+y);
    glVertex2i(667+x,105+y);
    glVertex2i(656+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.7,0.5);
    glVertex2i(656+x,95+y);
    glVertex2i(667+x,95+y);
    glVertex2i(667+x,105+y);
    glVertex2i(656+x,105+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.7,0.5);
    glVertex2i(637+x,95+y);
    glVertex2i(648+x,95+y);
    glVertex2i(648+x,105+y);
    glVertex2i(637+x,105+y);
    glEnd();
    glPopMatrix();
}


void init1(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1200.0, 0.0, 800.0);
}
int playThemeMusic2=1;

void displaym(void)
{
    if(playThemeMusic2)
     {
                       PlaySound(TEXT("themel.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
                       playThemeMusic2 = 0;
     }

	scene1();
	drawSunm();
	home();
	pot();
	treem(-20,0);
	treem(-90,-400);
	treem(110,-120);
	treem(620,-450);
	treem(750,0);
	treem(1000,-20);
	drawpeople2(-60,40);
	drawpeople1(95,20);
	drawpeople(250,70);
	drawpeople2(60,250);
	drawpeople3(500,200);
	drawpeople3(170,400);
	drawpeople5(50,250);
	drawpeople4(500,200);
	drawpeople5(500,200);
	drawpeople5(-250,150);
	drawpeople3(-90,40);
	drawpeople(650,400);
	drawpeople3(240,0);
	drawpeople4(190,80);
	drawpeople5(190,60);
	drawpeople4(300,280);
	drawpeople3(450,100);
	drawpeople4(480,360);
	glFlush();

	glutPostRedisplay();
	glutSwapBuffers();
}
void key1(int key,int x,int y){
switch(key)
{
case GLUT_KEY_LEFT:
    shift1-=0.9;
    glutPostRedisplay();
    break;
case GLUT_KEY_RIGHT:
    shift1+=0.9;
    glutPostRedisplay();
    break;
case GLUT_KEY_DOWN:
    window6();
    break;

}
}


void keys1(unsigned char key, int x, int y){
    switch (key) {

case 'b': {window=0;
glutInitWindowSize(1280,725);
glutInitWindowPosition(0,0);
win=glutCreateWindow("Festivals of India");

glutDisplayFunc(window0);
glutMouseFunc(mouse);

//glutSwapBuffers();
glutReshapeFunc(myReshape);
//setup();

glutMainLoop();}

        }
}
void window6()
{
    glutInitWindowSize(1200, 600);
	glutInitWindowPosition(50, 40);
    win=glutCreateWindow("Makara Sankranthi");
    glutDisplayFunc(displaym);
    glutSpecialFunc(key1);
    glutKeyboardFunc(keys1);
	init1();

    glutMainLoop(); // Initiate the main loop

}
//Kumbha Mela

int boatStatus = 1;
//int x,y;
float boatX = 0;
float boatY = 0;
//float shift=0;

void drawBoat(int);

void tree();
void scene();
void drawSun();

//float move, angle;

void DrawCircle(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}

void drawSun()
{
    glPushMatrix();
    glColor3f(3.0,0.5,0.0);
    DrawCircle(150,700,40,1000);
    glPopMatrix();

}


void tree(int x,int y)
{
	glPushMatrix();

	glBegin(GL_POLYGON); //Tree
	glColor3f(0.6, 0.3, 0.0);
	glVertex2i(x+150, 450+y);
	glVertex2i(x+165, 450+y);
	glVertex2i(x+165, 550+y);
	glVertex2i(x+150, 550+y);

	glEnd();
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(x+130, 545+y, 40, 1000); // 4
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(x+155, 580+y, 40, 1000);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(x+170, 550+y, 40, 1000);

	glPopMatrix();

}
void scene2()
{
	glPushMatrix();

	glBegin(GL_POLYGON); //Sky
	glColor3f(2.0, 0.7, 0.1);
	glVertex2i(0, 800);
	glVertex2i(1200, 800);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i(1200, 0);
	glVertex2i(0, 0);
	glEnd();

	glBegin(GL_POLYGON); //river
	glColor3f(0.2, 0.3, 1.1);
	glVertex2i(0, 200);
	glVertex2i(0, 430);
	glVertex2i(1300, 400);
	glVertex2i(1300, 50);

	glEnd();


	glBegin(GL_POLYGON); // ground
	glColor3f(0, 0.6, 0);
	glVertex2i(0, 200);
	glVertex2i(1200, 65);
	glVertex2i(1200,0);
	glVertex2i(0, 0);
	glEnd();
    glBegin(GL_POLYGON); // groundup
	glColor3f(0, 0.6, 0);
	glVertex2i(0, 430);
	glVertex2i(0, 500);
	glVertex2i(1200,500);
	glVertex2i(1200,400);
	glEnd();
	//tree();


	glPopMatrix();

}

void people(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle(52+x,490+y,13,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle(52+x,488+y,11,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(48+x,491+y);
    glVertex2i(48+x,494+y);
    glVertex2i(56+x,491+y);
    glVertex2i(56+x,494+y);
    glVertex2i(52+x,489+y);
    glVertex2i(52+x,485+y);
    glVertex2i(54+x,482+y);
    glVertex2i(50+x,482+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.5);
    glVertex2i(42+x,477+y);
    glVertex2i(62+x,477+y);
    glVertex2i(62+x,455+y);
    glVertex2i(42+x,455+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(42+x,477+y);
    glVertex2i(36+x,477+y);
    glVertex2i(36+x,460+y);
    glVertex2i(42+x,460+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(62+x,477+y);
    glVertex2i(68+x,477+y);
    glVertex2i(68+x,460+y);
    glVertex2i(62+x,460+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(42+x,455+y);
    glVertex2i(52+x,455+y);
    glVertex2i(48+x,444+y);
    glVertex2i(42+x,444+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(52+x,455+y);
    glVertex2i(62+x,455+y);
    glVertex2i(62+x,444+y);
    glVertex2i(56+x,444+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(56+x,438+y);
    glVertex2i(62+x,438+y);
    glVertex2i(62+x,444+y);
    glVertex2i(56+x,444+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(42+x,438+y);
    glVertex2i(48+x,438+y);
    glVertex2i(48+x,444+y);
    glVertex2i(42+x,444+y);
    glEnd();
    glPopMatrix();
}

void people1(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle(102+x,490+y,13,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle(102+x,488+y,11,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(98+x,491+y);
    glVertex2i(98+x,494+y);
    glVertex2i(106+x,491+y);
    glVertex2i(106+x,494+y);
    glVertex2i(102+x,489+y);
    glVertex2i(102+x,485+y);
    glVertex2i(104+x,482+y);
    glVertex2i(100+x,482+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.4);
    glVertex2i(92+x,477+y);
    glVertex2i(112+x,477+y);
    glVertex2i(112+x,455+y);
    glVertex2i(92+x,455+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(92+x,477+y);
    glVertex2i(86+x,477+y);
    glVertex2i(86+x,460+y);
    glVertex2i(92+x,460+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(112+x,477+y);
    glVertex2i(118+x,477+y);
    glVertex2i(118+x,460+y);
    glVertex2i(112+x,460+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(3,0.3,0.2);
    glVertex2i(92+x,455+y);
    glVertex2i(112+x,455+y);
    glVertex2i(112+x,444+y);
    glVertex2i(92+x,444+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(106+x,438+y);
    glVertex2i(112+x,438+y);
    glVertex2i(112+x,444+y);
    glVertex2i(106+x,444+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(92+x,438+y);
    glVertex2i(98+x,438+y);
    glVertex2i(98+x,444+y);
    glVertex2i(92+x,444+y);
    glEnd();
    glPopMatrix();
}

void people2(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle(152+x,490+y,13,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle(152+x,488+y,11,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(148+x,491+y);
    glVertex2i(148+x,494+y);
    glVertex2i(156+x,491+y);
    glVertex2i(156+x,494+y);
    glVertex2i(152+x,489+y);
    glVertex2i(152+x,485+y);
    glVertex2i(154+x,482+y);
    glVertex2i(150+x,482+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2i(142+x,477+y);
    glVertex2i(162+x,477+y);
    glVertex2i(162+x,455+y);
    glVertex2i(142+x,455+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(142+x,477+y);
    glVertex2i(136+x,477+y);
    glVertex2i(136+x,460+y);
    glVertex2i(142+x,460+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(162+x,477+y);
    glVertex2i(168+x,477+y);
    glVertex2i(168+x,460+y);
    glVertex2i(162+x,460+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.8);
    glVertex2i(142+x,455+y);
    glVertex2i(152+x,455+y);
    glVertex2i(148+x,444+y);
    glVertex2i(142+x,444+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.8);
    glVertex2i(152+x,455+y);
    glVertex2i(162+x,455+y);
    glVertex2i(162+x,444+y);
    glVertex2i(156+x,444+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(156+x,438+y);
    glVertex2i(162+x,438+y);
    glVertex2i(162+x,444+y);
    glVertex2i(156+x,444+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(142+x,438+y);
    glVertex2i(148+x,438+y);
    glVertex2i(148+x,444+y);
    glVertex2i(142+x,444+y);
    glEnd();
    glPopMatrix();
}

void people3(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle(52+x,90+y,13,1000);
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.5);
    glVertex2i(42+x,77+y);
    glVertex2i(62+x,77+y);
    glVertex2i(62+x,55+y);
    glVertex2i(42+x,55+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(42+x,77+y);
    glVertex2i(36+x,77+y);
    glVertex2i(36+x,60+y);
    glVertex2i(42+x,60+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(62+x,77+y);
    glVertex2i(68+x,77+y);
    glVertex2i(68+x,60+y);
    glVertex2i(62+x,60+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(42+x,55+y);
    glVertex2i(52+x,55+y);
    glVertex2i(48+x,44+y);
    glVertex2i(42+x,44+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(52+x,55+y);
    glVertex2i(62+x,55+y);
    glVertex2i(62+x,44+y);
    glVertex2i(56+x,44+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(56+x,38+y);
    glVertex2i(62+x,38+y);
    glVertex2i(62+x,44+y);
    glVertex2i(56+x,44+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(42+x,38+y);
    glVertex2i(48+x,38+y);
    glVertex2i(48+x,44+y);
    glVertex2i(42+x,44+y);
    glEnd();
    glPopMatrix();
}

void people4(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle(102+x,90+y,13,1000);
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.4);
    glVertex2i(92+x,77+y);
    glVertex2i(112+x,77+y);
    glVertex2i(112+x,55+y);
    glVertex2i(92+x,55+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(92+x,77+y);
    glVertex2i(86+x,77+y);
    glVertex2i(86+x,60+y);
    glVertex2i(92+x,60+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(112+x,77+y);
    glVertex2i(118+x,77+y);
    glVertex2i(118+x,60+y);
    glVertex2i(112+x,60+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(3,0.3,0.2);
    glVertex2i(92+x,55+y);
    glVertex2i(112+x,55+y);
    glVertex2i(112+x,44+y);
    glVertex2i(92+x,44+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(106+x,38+y);
    glVertex2i(112+x,38+y);
    glVertex2i(112+x,44+y);
    glVertex2i(106+x,44+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(92+x,38+y);
    glVertex2i(98+x,38+y);
    glVertex2i(98+x,44+y);
    glVertex2i(92+x,44+y);
    glEnd();
    glPopMatrix();
}

void people5(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle(152+x, 90+y, 13,1000);
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2i(142+x,77+y);
    glVertex2i(162+x,77+y);
    glVertex2i(162+x,55+y);
    glVertex2i(142+x,55+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(142+x,77+y);
    glVertex2i(136+x,77+y);
    glVertex2i(136+x,60+y);
    glVertex2i(142+x,60+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(162+x,77+y);
    glVertex2i(168+x,77+y);
    glVertex2i(168+x,60+y);
    glVertex2i(162+x,60+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.8);
    glVertex2i(142+x,55+y);
    glVertex2i(152+x,55+y);
    glVertex2i(148+x,44+y);
    glVertex2i(142+x,44+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.8);
    glVertex2i(152+x,55+y);
    glVertex2i(162+x,55+y);
    glVertex2i(162+x,44+y);
    glVertex2i(156+x,44+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(156+x,38+y);
    glVertex2i(162+x,38+y);
    glVertex2i(162+x,44+y);
    glVertex2i(156+x,44+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(142+x,38+y);
    glVertex2i(148+x,38+y);
    glVertex2i(148+x,44+y);
    glVertex2i(142+x,44+y);
    glEnd();
    glPopMatrix();
}
void people6(int x ,int y)
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle(152+x, 290+y, 13,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle(152+x,288+y,11,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(148+x,291+y);
    glVertex2i(148+x,294+y);
    glVertex2i(156+x,291+y);
    glVertex2i(156+x,294+y);
    glVertex2i(152+x,289+y);
    glVertex2i(152+x,285+y);
    glVertex2i(154+x,282+y);
    glVertex2i(150+x,282+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex2i(142+x,277+y);
    glVertex2i(162+x,277+y);
    glVertex2i(162+x,255+y);
    glVertex2i(142+x,255+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(142+x,277+y);
    glVertex2i(136+x,277+y);
    glVertex2i(136+x,260+y);
    glVertex2i(142+x,260+y);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(162+x,277+y);
    glVertex2i(168+x,277+y);
    glVertex2i(168+x,260+y);
    glVertex2i(162+x,260+y);
    glEnd();
    glPopMatrix();
}


void drawBoat(int x)
{
    glPushMatrix();
    glBegin(GL_POLYGON);
	glColor3f(0,0,0);//man1
    DrawCircle(52+x+shift,410,10,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle(52+x+shift,409,8,1000);

    glColor3f(0,0,0);//man2
    DrawCircle(77+x+shift,410,10,1000);
    glColor3f(0.8,0.6,0.5);
    DrawCircle(77+x+shift,409,8,1000);

    glColor3f(0,0,0);//man3
    DrawCircle(102+x+shift,410,10,1000);
    glColor3f(0.8,0.8,0.5);
    DrawCircle(102+x+shift,409,8,1000);

    glColor3f(0,0,0);//man4
    DrawCircle(127+x+shift,410,10,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle(127+x+shift,409,8,1000);

    glColor3f(0,0,0);//man5
    DrawCircle(152+x+shift,410,10,1000);
    glColor3f(0.8,0.6,0.5);
    DrawCircle(152+x+shift,409,8,1000);

	glBegin(GL_POLYGON);//boat down part
	glColor3f(0.4,0.0,0);
	glVertex2i(20+x+shift,380);
	glVertex2i(45+x+shift,350);
	glVertex2i(170+x+shift,350);
	glVertex2i(195+x+shift, 380);
	glVertex2i(170+x+shift,350);
	glVertex2i(45+x+shift,350);
	glVertex2i(20+x+shift,380);
	glEnd();
	glPushMatrix();
	glBegin(GL_POLYGON);//boat upper part
	glColor3f(0.7, 0.4, 0.0);
	glVertex2i(20+x+shift, 380);
	glVertex2i(45+x+shift, 400);
	glVertex2i(170+x+shift, 400);
	glVertex2i(195+x+shift, 380);
	glVertex2i(170+x+shift,360);
	glVertex2i(45+x+shift,360);
	glVertex2i(20+x+shift,380);
    glEnd();

    glBegin(GL_POLYGON);//stripe
    glColor3f(0,0,0);
    glVertex2i(55+x+shift,400);
    glVertex2i(60+x+shift,400);
    glVertex2i(60+x+shift,360);
    glVertex2i(55+x+shift,360);
    glEnd();
    glBegin(GL_POLYGON);//man1 body
    glColor3f(0,0,1);
    glVertex2i(47+x+shift,400);
    glVertex2i(55+x+shift,400);
    glVertex2i(55+x+shift,385);
    glVertex2i(65+x+shift,385);
    glVertex2i(65+x+shift,380);
    glVertex2i(47+x+shift,380);
    glVertex2i(47+x+shift,385);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(80+x+shift,400);
    glVertex2i(85+x+shift,400);
    glVertex2i(85+x+shift,360);
    glVertex2i(80+x+shift,360);
    glEnd();
    glBegin(GL_POLYGON);//man2 body
    glColor3f(1,0,1);
    glVertex2i(72+x+shift,400);
    glVertex2i(80+x+shift,400);
    glVertex2i(80+x+shift,385);
    glVertex2i(90+x+shift,385);
    glVertex2i(90+x+shift,380);
    glVertex2i(72+x+shift,380);
    glVertex2i(72+x+shift,385);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(105+x+shift,400);
    glVertex2i(110+x+shift,400);
    glVertex2i(110+x+shift,360);
    glVertex2i(105+x+shift,360);
    glEnd();
    glBegin(GL_POLYGON);//man3 body
    glColor3f(1,0,0);
    glVertex2i(97+x+shift,400);
    glVertex2i(105+x+shift,400);
    glVertex2i(105+x+shift,385);
    glVertex2i(115+x+shift,385);
    glVertex2i(115+x+shift,380);
    glVertex2i(97+x+shift,380);
    glVertex2i(97+x+shift,385);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(130+x+shift,400);
    glVertex2i(135+x+shift,400);
    glVertex2i(135+x+shift,360);
    glVertex2i(130+x+shift,360);
    glEnd();
    glBegin(GL_POLYGON);//man4 body
    glColor3f(0,1,1);
    glVertex2i(122+x+shift,400);
    glVertex2i(130+x+shift,400);
    glVertex2i(130+x+shift,385);
    glVertex2i(140+x+shift,385);
    glVertex2i(140+x+shift,380);
    glVertex2i(122+x+shift,380);
    glVertex2i(122+x+shift,385);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(155+x+shift,400);
    glVertex2i(160+x+shift,400);
    glVertex2i(160+x+shift,360);
    glVertex2i(155+x+shift,360);
    glEnd();
    glBegin(GL_POLYGON);//man5 body
    glColor3f(0,1,0);
    glVertex2i(147+x+shift,400);
    glVertex2i(155+x+shift,400);
    glVertex2i(155+x+shift,385);
    glVertex2i(165+x+shift,385);
    glVertex2i(165+x+shift,380);
    glVertex2i(147+x+shift,380);
    glVertex2i(147+x+shift,385);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(2);
	glVertex2i(20+x+shift, 380);
	glVertex2i(45+x+shift, 400);
	glVertex2i(45+x+shift, 400);
	glVertex2i(170+x+shift, 400);
	glVertex2i(170+x+shift, 400);
	glVertex2i(195+x+shift, 380);
	glVertex2i(195+x+shift, 380);
	glVertex2i(170+x+shift,360);
	glVertex2i(170+x+shift,360);
	glVertex2i(45+x+shift,360);
	glVertex2i(45+x+shift,360);
	glVertex2i(20+x+shift,380);
	glVertex2i(50+x+shift,390);//stick1
	glVertex2i(65+x+shift,320);
	glVertex2i(75+x+shift,390);//stick2
	glVertex2i(90+x+shift,320);
	glVertex2i(100+x+shift,390);//stick3
	glVertex2i(115+x+shift,320);
	glVertex2i(125+x+shift,390);//stick4
	glVertex2i(140+x+shift,320);
	glVertex2i(150+x+shift,390);//stick5
	glVertex2i(165+x+shift,320);
	glEnd();

glPopMatrix();

}

void drawBoat2(int x)
{
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);//man1
    DrawCircle(32+x+shift,290,10,1000);
    glColor3f(0.8,0.6,0.5);
    DrawCircle(32+x+shift,289,8,1000);

    glColor3f(0,0,0);//man2
    DrawCircle(57+x+shift,290,10,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle(57+x+shift,289,8,1000);

    glColor3f(0,0,0);//man3
    DrawCircle(82+x+shift,290,10,1000);
    glColor3f(0.8,0.8,0.5);
    DrawCircle(82+x+shift,289,8,1000);

    glColor3f(0,0,0);//man4
    DrawCircle(107+x+shift,290,10,1000);
    glColor3f(0.8,0.6,0.5);
    DrawCircle(107+x+shift,289,8,1000);

    glColor3f(0,0,0);//man5
    DrawCircle(132+x+shift,290,10,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle(132+x+shift,289,8,1000);

	glBegin(GL_POLYGON);//boat down

	glColor3f(0.5, 0.4, 0.0);
	glVertex2i(0+x+shift,260);
	glVertex2i(25+x+shift,230);
	glVertex2i(150+x+shift,230);
	glVertex2i(175+x+shift, 260);
	glVertex2i(150+x+shift,230);
	glVertex2i(25+x+shift,230);
	glVertex2i(0+x+shift,260);
	glEnd();
	glPushMatrix();
	glBegin(GL_POLYGON);//boat up
	glColor3f(1.5,1.0,0.2);
	glVertex2i(0+x+shift, 260);
	glVertex2i(25+x+shift, 280);
	glVertex2i(150+x+shift, 280);
	glVertex2i(175+x+shift, 260);
	glVertex2i(150+x+shift,240);
	glVertex2i(25+x+shift,240);
	glVertex2i(0+x+shift,260);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(35+x+shift,280);
    glVertex2i(40+x+shift,280);
    glVertex2i(40+x+shift,240);
    glVertex2i(35+x+shift,240);
    glEnd();

    glBegin(GL_POLYGON);//man1 body
    glColor3f(2,0,2);
    glVertex2i(27+x+shift,280);
    glVertex2i(35+x+shift,280);
    glVertex2i(35+x+shift,265);
    glVertex2i(45+x+shift,265);
    glVertex2i(45+x+shift,260);
    glVertex2i(27+x+shift,260);
    glVertex2i(27+x+shift,265);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(60+x+shift,280);
    glVertex2i(65+x+shift,280);
    glVertex2i(65+x+shift,240);
    glVertex2i(60+x+shift,240);
    glEnd();

    glBegin(GL_POLYGON);//man2 body
    glColor3f(2.5,0.5,0.3);
    glVertex2i(52+x+shift,280);
    glVertex2i(60+x+shift,280);
    glVertex2i(60+x+shift,265);
    glVertex2i(70+x+shift,265);
    glVertex2i(70+x+shift,260);
    glVertex2i(52+x+shift,260);
    glVertex2i(52+x+shift,265);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(85+x+shift,280);
    glVertex2i(90+x+shift,280);
    glVertex2i(90+x+shift,240);
    glVertex2i(85+x+shift,240);
    glEnd();

    glBegin(GL_POLYGON);//man3 body
    glColor3f(1,1,3);
    glVertex2i(77+x+shift,280);
    glVertex2i(85+x+shift,280);
    glVertex2i(85+x+shift,265);
    glVertex2i(95+x+shift,265);
    glVertex2i(95+x+shift,260);
    glVertex2i(77+x+shift,260);
    glVertex2i(77+x+shift,265);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(110+x+shift,280);
    glVertex2i(115+x+shift,280);
    glVertex2i(115+x+shift,240);
    glVertex2i(110+x+shift,240);
    glEnd();

    glBegin(GL_POLYGON);//man4 body
    glColor3f(0,3,2);
    glVertex2i(102+x+shift,280);
    glVertex2i(110+x+shift,280);
    glVertex2i(110+x+shift,265);
    glVertex2i(120+x+shift,265);
    glVertex2i(120+x+shift,260);
    glVertex2i(102+x+shift,260);
    glVertex2i(102+x+shift,265);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2i(135+x+shift,280);
    glVertex2i(140+x+shift,280);
    glVertex2i(140+x+shift,240);
    glVertex2i(135+x+shift,240);
    glEnd();

    glBegin(GL_POLYGON);//man5 body
    glColor3f(0,2,0);
    glVertex2i(127+x+shift,280);
    glVertex2i(135+x+shift,280);
    glVertex2i(135+x+shift,265);
    glVertex2i(145+x+shift,265);
    glVertex2i(145+x+shift,260);
    glVertex2i(127+x+shift,260);
    glVertex2i(127+x+shift,265);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(2);
	glVertex2i(0+x+shift, 260);
	glVertex2i(25+x+shift, 280);
	glVertex2i(25+x+shift, 280);
	glVertex2i(150+x+shift, 280);
	glVertex2i(150+x+shift, 280);
	glVertex2i(175+x+shift, 260);
	glVertex2i(175+x+shift, 260);
	glVertex2i(150+x+shift,240);
	glVertex2i(150+x+shift,240);
	glVertex2i(25+x+shift,240);
	glVertex2i(25+x+shift,240);
	glVertex2i(0+x+shift,260);
	glVertex2i(30+x+shift,270);//stick1
	glVertex2i(45+x+shift,200);
	glVertex2i(55+x+shift,270);//stick2
	glVertex2i(70+x+shift,200);
	glVertex2i(80+x+shift,270);//stick3
	glVertex2i(95+x+shift,200);
	glVertex2i(105+x+shift,270);//stick4
	glVertex2i(120+x+shift,200);
	glVertex2i(130+x+shift,270);//stick5
	glVertex2i(145+x+shift,220);
	glEnd();
	glPopMatrix();
}
void temple()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex2i(500,430);
    glVertex2i(500,530);
    glVertex2i(550,750);
    glVertex2i(650,750);
    glVertex2i(700,530);
    glVertex2i(700,430);
    glVertex2i(500,430);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.7,0.6,1.5);
    glVertex2i(500,530);
    glVertex2i(700,530);
    glVertex2i(520,610);
    glVertex2i(680,610);
    glVertex2i(540,690);
    glVertex2i(660,690);
    glColor3f(0.7,0.2,0);
    glVertex2i(560,430);
    glVertex2i(530,410);
    glVertex2i(640,430);
    glVertex2i(670,410);
    glColor3f(0,0,0);
    glPointSize(5);
    glVertex2i(551,750);
    glVertex2i(551,790);
    glVertex2i(650,750);
    glVertex2i(650,790);
    glEnd();
    glBegin(GL_POLYGON); //door1
    glColor3f(1,1,0.5);
    glVertex2i(560,430);
    glVertex2i(560,520);
    glVertex2i(640,520);
    glVertex2i(640,430);
    glEnd();
    glBegin(GL_POLYGON); //door2
    glColor3f(1,1,0.5);
    glVertex2i(570,530);
    glVertex2i(570,595);
    glVertex2i(630,595);
    glVertex2i(630,530);
    glEnd();
    glBegin(GL_POLYGON); //door3
    glColor3f(1,1,0.5);
    glVertex2i(580,610);
    glVertex2i(580,670);
    glVertex2i(620,670);
    glVertex2i(620,610);
    glEnd();
    glBegin(GL_POLYGON); //door4
    glColor3f(1,1,0.5);
    glVertex2i(585,690);
    glVertex2i(585,730);
    glVertex2i(615,730);
    glVertex2i(615,690);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.2,0.2);
    glVertex2i(550,760);
    glVertex2i(550,790);
    glVertex2i(530,770);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.2,0.2);
    glVertex2i(650,760);
    glVertex2i(650,790);
    glVertex2i(670,770);
    glEnd();
    glPopMatrix();
}

void myInit(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPointSize(0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1200.0, 0.0, 800.0);
}
int playThemeMusic4=1;

void display7(void)
{
        if(playThemeMusic4)
     {
                       PlaySound(TEXT("themek.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
                       playThemeMusic4 = 0;
     }

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0,0.498039,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
	scene2();
	drawSun();
	tree(0,0);
	tree(-70,13);
	tree(-150,28);
	tree(800,0);
	tree(900,5);
	tree(1000,2);
	tree(680,10);
	tree(0,-400);
	tree(50,-400);
	tree(800,-430);
	tree(1000,-400);
    temple();
    people(0+shift,0);
    people(200+shift,0);
    people(150,50);
    people(500,-20);
    people(400,-20);
    people(700,0);
    people(750,50);
    people(1000+shift,0);
    people(1100,0);
    people(1250+shift,0);
    people(1300,10);
    people1(0,0);
    people1(250,50);
    people1(450,-20);
    people1(600,-30);
    people1(400+shift,0);
    people1(250,-20);
    people1(680+shift,-10);
    people1(800,-10);
    people1(1200,0);
    people1(1090,-10);
    people1(1290+shift,20);
    people1(1000,10);
    people2(0,0);
    people2(300+shift,50);
    people2(580,-20);
    people2(250,0);
    people2(680,-30);
    people2(900,0);
    people2(980,50);
    people2(950,-30);
    people2(1250,30);
    people3(0,0);
    people3(-30,90);
    people3(200,50);
    people3(400,30);
    people3(650,40);
    people3(830,50);
    people3(1000+shift,0);
    people4(0,0);
    people4(0,60);
    people4(200,50);
    people4(400,30);
    people4(650,30);
    people4(730,60);
    people4(900,0);
    people5(30,0);
    people5(-80+shift,50);
    people5(200,50);
    people5(400+shift,30);
    people5(500,20);
    people5(650,70);
    people5(950,0);
    people6(0,30);
    people6(150,0);
    people6(200,0);
    people6(200,60);
    people6(80,30);
    people6(80,-30);
    people6(400,50);
    people6(450,30);
    people6(800,40);
    people6(750,-50);
    people6(750+shift,40);
    people6(1000,-30);
    drawBoat(50);
	drawBoat2(0);
	drawBoat(600);
	drawBoat2(900);
	drawBoat2(450);
	glFlush();

	glutPostRedisplay();
	glutSwapBuffers();
}

void key2(int key,int x,int y){
switch(key)
{
case GLUT_KEY_LEFT:
    shift--;
    glutPostRedisplay();
    break;
case GLUT_KEY_RIGHT:
    shift++;
    glutPostRedisplay();
    break;

}
}
void keys2(unsigned char key, int x, int y){
    switch (key) {

case 'b': {window=0;
glutInitWindowSize(1280,725);
glutInitWindowPosition(0,0);
win=glutCreateWindow("Festivals of India");

glutDisplayFunc(window0);
glutMouseFunc(mouse);

//glutSwapBuffers();
glutReshapeFunc(myReshape);
//setup();
glutMainLoop();}

        }
}
void window10(){
glutInitWindowSize(1200, 600);
	glutInitWindowPosition(50, 40);
    win=glutCreateWindow("Kumbhamela");
    glutDisplayFunc(display7);
    glutSpecialFunc(key2);
    glutKeyboardFunc(keys2);
	myInit();
	glutMainLoop();
}

//Guru poornima

void sky();
void house1();
void back();
void man();
void idle2();
void sea();
void flower();
void grass();
void tree();
void display8();
//int j=0;
float i=0.0,f,a,s,c,b,z,d,g,t,o,l;
int s2,s3;


void myinit(void)

{
	glClearColor(0.2,0.65,0.2,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
	glMatrixMode(GL_MODELVIEW);
}
void DrawCircle1(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
}
void peoplex()
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle1(52,190,13,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle1(52,188,11,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(48,191);
    glVertex2i(48,194);
    glVertex2i(56,191);
    glVertex2i(56,194);
    glVertex2i(52,189);
    glVertex2i(52,185);
    glVertex2i(54,182);
    glVertex2i(50,182);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0,0.5);
    glVertex2i(42,177);
    glVertex2i(62,177);
    glVertex2i(62,155);
    glVertex2i(42,155);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(42,177);
    glVertex2i(36,177);
    glVertex2i(36,160);
    glVertex2i(42,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(62,177);
    glVertex2i(68,177);
    glVertex2i(68,160);
    glVertex2i(62,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(42,155);
    glVertex2i(52,155);
    glVertex2i(48,144);
    glVertex2i(42,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(52,155);
    glVertex2i(62,155);
    glVertex2i(62,144);
    glVertex2i(56,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(56,138);
    glVertex2i(62,138);
    glVertex2i(62,144);
    glVertex2i(56,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(42,138);
    glVertex2i(48,138);
    glVertex2i(48,144);
    glVertex2i(42,144);
    glEnd();
    glPopMatrix();
}
void peoplex1()
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle1(102,190,13,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle1(102,188,11,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(98,191);
    glVertex2i(98,194);
    glVertex2i(106,191);
    glVertex2i(106,194);
    glVertex2i(102,189);
    glVertex2i(102,185);
    glVertex2i(104,182);
    glVertex2i(100,182);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0,0.6,0.5);
    glVertex2i(92,177);
    glVertex2i(112,177);
    glVertex2i(112,155);
    glVertex2i(92,155);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(92,177);
    glVertex2i(86,177);
    glVertex2i(86,160);
    glVertex2i(92,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(112,177);
    glVertex2i(118,177);
    glVertex2i(118,160);
    glVertex2i(112,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(92,155);
    glVertex2i(102,155);
    glVertex2i(98,144);
    glVertex2i(92,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(102,155);
    glVertex2i(112,155);
    glVertex2i(112,144);
    glVertex2i(106,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(106,138);
    glVertex2i(112,138);
    glVertex2i(112,144);
    glVertex2i(106,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(92,138);
    glVertex2i(98,138);
    glVertex2i(98,144);
    glVertex2i(92,144);
    glEnd();
    glPopMatrix();
}
void peoplex2()
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle1(352,190,13,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle1(352,188,11,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(348,191);
    glVertex2i(348,194);
    glVertex2i(356,191);
    glVertex2i(356,194);
    glVertex2i(352,189);
    glVertex2i(352,185);
    glVertex2i(354,182);
    glVertex2i(350,182);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1,0.3,0.5);
    glVertex2i(342,177);
    glVertex2i(362,177);
    glVertex2i(362,155);
    glVertex2i(342,155);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(342,177);
    glVertex2i(336,177);
    glVertex2i(336,160);
    glVertex2i(342,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(362,177);
    glVertex2i(368,177);
    glVertex2i(368,160);
    glVertex2i(362,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(342,155);
    glVertex2i(352,155);
    glVertex2i(348,144);
    glVertex2i(342,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(352,155);
    glVertex2i(362,155);
    glVertex2i(362,144);
    glVertex2i(356,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(356,138);
    glVertex2i(362,138);
    glVertex2i(362,144);
    glVertex2i(356,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(342,138);
    glVertex2i(348,138);
    glVertex2i(348,144);
    glVertex2i(342,144);
    glEnd();
    glPopMatrix();
}
void peoplex3()
{
    glPushMatrix();
    glColor3f(0,0,0);
    DrawCircle1(152,190,13,1000);
    glColor3f(0.8,0.7,0.5);
    DrawCircle1(152,188,11,1000);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex2i(148,191);
    glVertex2i(148,194);
    glVertex2i(156,191);
    glVertex2i(156,194);
    glVertex2i(152,189);
    glVertex2i(152,185);
    glVertex2i(154,182);
    glVertex2i(150,182);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.5);
    glVertex2i(142,177);
    glVertex2i(162,177);
    glVertex2i(162,155);
    glVertex2i(142,155);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(142,177);
    glVertex2i(136,177);
    glVertex2i(136,160);
    glVertex2i(142,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(162,177);
    glVertex2i(168,177);
    glVertex2i(168,160);
    glVertex2i(162,160);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(142,155);
    glVertex2i(152,155);
    glVertex2i(148,144);
    glVertex2i(142,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5,0,0.8);
    glVertex2i(152,155);
    glVertex2i(162,155);
    glVertex2i(162,144);
    glVertex2i(156,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(156,138);
    glVertex2i(162,138);
    glVertex2i(162,144);
    glVertex2i(156,144);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.8,0.7,0.5);
    glVertex2i(142,138);
    glVertex2i(148,138);
    glVertex2i(148,144);
    glVertex2i(142,144);
    glEnd();
    glPopMatrix();
}
int playThemeMusic3=1;
void display8()
{
    if(playThemeMusic3)
     {
                       PlaySound(TEXT("themeg.wav"), NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
                       playThemeMusic3= 0;
     }

glClear(GL_COLOR_BUFFER_BIT);

sky();
back();
grass();
tree();
idle2();
flower();
man();
sea();
house1();
peoplex();
peoplex1();
peoplex2();
peoplex3();
glRasterPos2f(250,50);
glColor3f(1,0,0);
glEnd();
glFlush();
}

void sky()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,700);
glBegin(GL_POLYGON);
glColor3f(0.1,0.0,0.8);
glVertex2f(0,400);
glVertex2f(700,400);
glColor3f(0.7,0.7,1);
glVertex2f(700,700);
glVertex2f(0,700);
glVertex2f(0,400);
glEnd();
}
void sea()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,700);
glBegin(GL_POLYGON);

glColor3f(0.5,1,0);
glVertex2f(700,400);
glColor3f(0,0.5,0);
glVertex2f(600,350);
glColor3f(0,0.5,0);
glVertex2f(550,300);
glVertex2f(500,250);
glVertex2f(450,225);

glVertex2f(350,0);
glColor3f(0.0,0.0,0);
glVertex2f(700,0);

glVertex2f(700,400);
glEnd();
}

void house1()
{

glBegin(GL_POLYGON);
glColor3f(0.9,0.9,0.9);
glVertex2f(400+50,330-50);
glVertex2f(400+50,150-50);
glVertex2f(650+50,150-50);
glVertex2f(650+50,330-50);
glVertex2f(400+50,330-50);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.69,0.133,0.123);
glVertex2f(500+50,150-50);
glVertex2f(500+50,250-50);
glVertex2f(550+50,250-50);
glVertex2f(550+50,150-50);
glVertex2f(500+50,150-50);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.3,0.3,0.3);
glVertex2f(425+50,225-50);
glVertex2f(475+50,225-50);
glVertex2f(475+50,250-50);
glColor3f(0,0,0);
glVertex2f(425+50,250-50);
glVertex2f(425+50,225-50);

glEnd();
glBegin(GL_POLYGON);
glColor3f(0.3,0.3,0.3);
glVertex2f(575+50,225-50);
glVertex2f(625+50,225-50);
glVertex2f(625+50,250-50);
glColor3f(0,0,0);
glVertex2f(575+50,250-50);
glVertex2f(575+50,225-50);

glEnd();
glBegin(GL_POLYGON);
glColor3f(0.2,0.1,0);
glVertex2f(525+50,330-50);
glVertex2f(475+50,290-50);
glVertex2f(350+50,290-50);
glColor3f(0,0,0);
glVertex2f(525+50,475-50);
glColor3f(0.6,0.3,0.3);
glVertex2f(700+50,290-50);
glVertex2f(575+50,290-50);
glVertex2f(525+50,330-50);
glEnd();
}



void idle2()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(30,375,-50,375);

//body
	glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2f(171,155);
		glVertex2f(175,145);
		glVertex2f(178,144);
		glVertex2f(181,143);
		glVertex2f(180,130);
		glVertex2f(179.5,125);
		glVertex2f(179,120);
		glVertex2f(179,115);
		glVertex2f(179,110);
		glVertex2f(179.8,105);
		glVertex2f(180,102);
		glVertex2f(180,100);
		glVertex2f(154.8,100);
		glVertex2f(154.8,102);
		glVertex2f(155,105);
		glVertex2f(155.2,110);
		glVertex2f(155,115);
		glVertex2f(154.5,120);
		glVertex2f(154.3,125);
		glVertex2f(154,128);
		glVertex2f(153.5,129);
		glVertex2f(152.5,130);
		glVertex2f(153,142);
		glVertex2f(155,143);
		glVertex2f(158,144);
		glVertex2f(160,145);
		glVertex2f(160,145);
		glVertex2f(161.5,148);
		glVertex2f(161.5,148);
		glVertex2f(162,150);

		glVertex2f(162,150);

		glVertex2f(162,155);
		glVertex2f(162,155);
		glVertex2f(171,155);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(180,102);
		glVertex2f(154.8,102);
	glEnd();
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(177+3,103-3);
glColor3f(0.3,0.3,0.3);
glVertex2f(190+3,103-3);
glVertex2f(190+3,70-3);
glVertex2f(135+3,70-3);
glVertex2f(135+3,103-3);
glVertex2f(177+3,103-3);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex2f(162,150);
glVertex2f(165,130);
glVertex2f(168,120);
glVertex2f(171,130);
glVertex2f(174,150);
glEnd();


//head
glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2f(167,152);
		glVertex2f(169,153);
		glVertex2f(172,155);
		glVertex2f(173.5,158);
		glVertex2f(174,160);
		glVertex2f(174.5,164);
		glVertex2f(174,169);
		glVertex2f(173,172);
		glVertex2f(171,174);
		glVertex2f(169,174.8);
		glVertex2f(167,175);
		glVertex2f(164,174.5);
		glVertex2f(162,173.5);
		glVertex2f(160,171);
		glVertex2f(159,169);
		glVertex2f(159,165);
		glVertex2f(159,160);
		glVertex2f(159.5,158);
		glVertex2f(160,157);
		glVertex2f(161,156);
		glVertex2f(162.5,154.5);
		glVertex2f(163,154);
		glVertex2f(164,153);
		glVertex2f(167,152);
	glEnd();

//nose
glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(166.9,165);
	glVertex2f(166.9,161);
glEnd();
//mouth
glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(165,159);
	glVertex2f(166,158.7);
	glVertex2f(167,158.5);
	glVertex2f(168,158.6);
	glVertex2f(169.8,159);
glEnd();
//hair
glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2f(174.5,164);
		glVertex2f(174,169);
		glVertex2f(174,169);
		glVertex2f(173,172);
		glVertex2f(173,170);
		glVertex2f(173,170);
		glVertex2f(174,167);

		glVertex2f(174,167);
		glVertex2f(174,167);
		glVertex2f(174.5,162);

		glVertex2f(174.5,162);
		glVertex2f(174.5,164);

		glEnd();

glBegin(GL_POLYGON);
glVertex2f(174,169);
glVertex2f(173,172);
glVertex2f(171,174);
		glVertex2f(171,174);
		glVertex2f(169,174.8);
		glVertex2f(169,174.8);
		glVertex2f(167,175);
		glVertex2f(167,173);
		glVertex2f(167,173);
		glVertex2f(169,172.8);
		glVertex2f(169,172.8);
		glVertex2f(171,172);
		glVertex2f(171,172);
glVertex2f(173,170);
glVertex2f(174,167);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(167,175);
glVertex2f(164,174.5);
		glVertex2f(164,174.5);
		glVertex2f(162,173.5);
		glVertex2f(162,173.5);
		glVertex2f(160,171);
		glVertex2f(160,171);
		glVertex2f(159,169);
		glVertex2f(159,169);
glVertex2f(159,167);
		glVertex2f(159,167);
		glVertex2f(160,169);
		glVertex2f(160,169);
		glVertex2f(162,171.5);
		glVertex2f(162,171.5);
		glVertex2f(164,172.5);
		glVertex2f(164,172.5);
glVertex2f(167,173);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(160,158);
glVertex2f(160.8,157);
glVertex2f(160.8,154);
glVertex2f(160.8,150);
glVertex2f(160.8,145);
glVertex2f(160.8,143);
glVertex2f(160.8,136);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(161,157);
glVertex2f(161.8,156);
glVertex2f(161.8,154);
glVertex2f(161.8,145);
glVertex2f(161.8,143);
glVertex2f(161.8,140);
glVertex2f(161.8,135);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(172,156.5);
glVertex2f(172.8,156);
glVertex2f(172.8,154);
glVertex2f(172.8,145);
glVertex2f(172.8,143);
glVertex2f(172.8,140);
glVertex2f(172.8,135);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(173,158.5);
glVertex2f(173.8,157);
glVertex2f(173.8,154);
glVertex2f(173.8,150);
glVertex2f(173.8,145);
glVertex2f(173.8,143);
glVertex2f(173.8,136);
glEnd();
//EYES
glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(160,165);
		glVertex2f(162,163.5);
		glVertex2f(163,163.5);
		glVertex2f(165,165);
		glVertex2f(163,166.5);
		glVertex2f(162,166.5);
	glEnd();
	glBegin(GL_POLYGON);

		glVertex2f(168,165);
		glVertex2f(170,163.5);
		glVertex2f(171,163.5);
		glVertex2f(173,165);
		glVertex2f(171,166.5);
		glVertex2f(170,166.5);
	glEnd();
glBegin(GL_LINE_STRIP);

		glVertex2f(160,166.5);
		glVertex2f(162,168.5);
		glVertex2f(163,168.5);
		glVertex2f(165,166.5);
	glEnd();
glBegin(GL_LINE_STRIP);

		glVertex2f(168,166.5);
		glVertex2f(171,168.5);
		glVertex2f(170,168.5);
		glVertex2f(173,166.5);
	glEnd();
	glColor3f(1.0,1.0,1.0);

		glColor3f(0.0,0.0,0.0);


	glBegin(GL_POLYGON);//hand1
		glColor3f(0.3,0.3,0.3);

		glVertex2f(153,142);
		glVertex2f(151,140.5);
		glVertex2f(150,139);
		glVertex2f(149,137);
		glVertex2f(148,135);
		glVertex2f(147.2,133);
		glVertex2f(147,130);
		glVertex2f(147,125);
		glVertex2f(147.1,120);
		glVertex2f(147.2,112);

//HALF

		glVertex2f(151.8,105);
		glVertex2f(152,110);
		glVertex2f(152.5,115);
		glVertex2f(152.5,120);
		glVertex2f(152.5,123);
		glVertex2f(152.5,125);
		glVertex2f(152.5,130);
	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0.3,0.3,0.3);
	//glVertex2f(87.2,115);
	glVertex2f(147.2,112);

	glVertex2f(143.2,125);
	glVertex2f(139.2,125);
	glVertex2f(146.2,101);
	//glVertex2(87.2,100);
	glVertex2f(148.2,100.5);
	glVertex2f(149.2,101);
	glVertex2f(150.2,101.5);
	glVertex2f(151.2,102);
	glVertex2f(151.8,105);
glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2f(139.2,125);
		glVertex2f(137.6,129);
		glVertex2f(137.6,136);
		glVertex2f(139.2,138);
		glVertex2f(140.2,139);
		glVertex2f(141.2,139.1);
		glVertex2f(142.2,139.2);
		glVertex2f(143.2,139.3);
		glVertex2f(144.2,138);
		glVertex2f(144.2,137);
		glVertex2f(144.2,136);
		glVertex2f(144.2,135);
		glVertex2f(144,134);
		glVertex2f(143.8,133);
		glVertex2f(143.6,132);
		glVertex2f(143.6,130);
		glVertex2f(144.2,131);
		glVertex2f(144.3,132);
		glVertex2f(144.4,133);
		glVertex2f(144.8,134);
		glVertex2f(144.9,135);
		glVertex2f(145,136);
		glVertex2f(145.1,136);
		glVertex2f(145.3,136);
		glVertex2f(145.8,136);
		glVertex2f(146.2,136);
		glVertex2f(146.2,135);
		glVertex2f(146.2,133);
		glVertex2f(146,134);
		glVertex2f(145.8,132);
		glVertex2f(145.4,130);
		glVertex2f(145,128);
		glVertex2f(144.6,126);
		glVertex2f(143.6,124.2);
		glEnd();


//rays
	if(s2<170)
	s2+=0.45;
if(s3<10)
s3+=0.045;
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2,137);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2,127);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(141-s2,100-s3);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141-s2,99.5-s3);
	glutPostRedisplay();
	glEnd();



	glBegin(GL_POLYGON);/*hand2*/
		glColor3f(0.3,0.3,0.3);
		glVertex2f(180,143);//
		glVertex2f(182,142);
		glVertex2f(182,142);
		glVertex2f(183,141);
		glVertex2f(183,141);
		glVertex2f(184,139);
		glVertex2f(184,139);
		glVertex2f(185,136.5);
		glVertex2f(185,136.5);
		glVertex2f(186,135);
		glVertex2f(186,135);
		glVertex2f(187,130);
		glVertex2f(187,130);
		glVertex2f(187.2,125);
		glVertex2f(187.2,125);
		glVertex2f(187.5,120);
		glVertex2f(187.5,120);
		glVertex2f(187.5,117);
		glVertex2f(187.5,117);
		glVertex2f(187.2,115);
		glVertex2f(187.2,115);
		glVertex2f(187.2,112);
		glVertex2f(187.2,112);
		glVertex2f(187.2,108);
		glVertex2f(187.2,108);






		glVertex2f(184,103);
		glVertex2f(184,103);
		glVertex2f(183.5,105);
		glVertex2f(183.5,105);
		glVertex2f(183,110);
		glVertex2f(183,110);
		glVertex2f(182.5,115);
		glVertex2f(182.5,115);
		glVertex2f(182,120);
		glVertex2f(182,120);
		glVertex2f(180.5,125);//121
		glVertex2f(180,125);
		glVertex2f(179,143);//K
	glEnd();
	glBegin(GL_POLYGON);

		glVertex2f(200,120);
		glVertex2f(203,125);
		glVertex2f(204,125);
		glVertex2f(207,121);
		glVertex2f(207,115);
		glVertex2f(204,112);
		glVertex2f(203,112);
		glVertex2f(200,113);
	glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(187.2,108);
		 glVertex2f(200,120);
		glVertex2f(200,120);
		glVertex2f(200,113);
		glVertex2f(200,113);
		glVertex2f(187,98);
		glVertex2f(187,98);
		glVertex2f(186,98.5);
		glVertex2f(186,98.5);
		glVertex2f(185,99);
		glVertex2f(185,99);
		glVertex2f(184,103);
		glEnd();
		glBegin(GL_POLYGON);/*pony*/
		glColor3f(0.3,0.3,0.3);
		glVertex2f(164,185.6);
		glVertex2f(169,185.6);
		glVertex2f(170,182.8);
		glVertex2f(170,178.8);
		glVertex2f(169,174.8);
		glVertex2f(164,174.8);
		glVertex2f(163,178.8);
		glVertex2f(163,182.8);
		glEnd();

}

 void flower()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(30,375,-50,375);

	f+=0.4;
	if(f<150)
	{
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(150,190-f);
		glVertex2f(153,190-f);
		glVertex2f(153,186-f);
		glVertex2f(150,186-f);
		glVertex2f(150,190-f);
		glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,1,0);
		glVertex2f(150,190-f);
		glVertex2f(149,191-f);
		glVertex2f(152,193-f);
		glVertex2f(154,191-f);
		glVertex2f(153,190-f);
		glVertex2f(150,190-f);
		glEnd();
glBegin(GL_POLYGON);
	glColor3f(1,1,0);
		glVertex2f(153,190-f);
		glVertex2f(154,191-f);
		glVertex2f(155,188-f);
		glVertex2f(154,185-f);
		glVertex2f(153,186-f);
		glVertex2f(153,190-f);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,1,0);
		glVertex2f(160,200-f);
		glVertex2f(163,200-f);
		glVertex2f(163,196-f);
		glVertex2f(160,196-f);
		glVertex2f(160,200-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(160,200-f);
		glVertex2f(159,201-f);
		glVertex2f(162,203-f);
		glVertex2f(164,201-f);
		glVertex2f(163,200-f);
		glVertex2f(160,200-f);
		glEnd();
	glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(163,200-f);
		glVertex2f(164,201-f);
		glVertex2f(165,198-f);
		glVertex2f(164,195-f);
		glVertex2f(163,196-f);
		glVertex2f(163,200-f);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(170,190-f);
		glVertex2f(169,191-f);
		glVertex2f(172,193-f);
		glVertex2f(174,191-f);
		glVertex2f(173,190-f);
		glVertex2f(170,190-f);

		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,0,1);
		glVertex2f(170,190-f);
		glVertex2f(173,190-f);
		glVertex2f(173,186-f);
		glVertex2f(170,186-f);
		glVertex2f(170,190-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(173,190-f);
		glVertex2f(174,191-f);
		glVertex2f(175,188-f);
		glVertex2f(174,185-f);
		glVertex2f(173,186-f);
		glVertex2f(173,190-f);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(0,1,1);
		glVertex2f(180,200-f);
		glVertex2f(183,200-f);
		glVertex2f(183,196-f);
		glVertex2f(180,196-f);
		glVertex2f(180,200-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(180,200-f);
		glVertex2f(179,201-f);
		glVertex2f(182,203-f);
		glVertex2f(184,201-f);
		glVertex2f(183,200-f);
		glVertex2f(180,200-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(183,200-f);
		glVertex2f(184,201-f);
		glVertex2f(185,198-f);
		glVertex2f(184,195-f);
		glVertex2f(183,196-f);
		glVertex2f(183,200-f);

		glEnd();
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,1);
		glVertex2f(170,210-f);
		glVertex2f(173,210-f);
		glVertex2f(173,206-f);
		glVertex2f(170,206-f);
		glVertex2f(170,210-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(170,210-f);
		glVertex2f(169,211-f);
		glVertex2f(172,213-f);
		glVertex2f(174,211-f);
		glVertex2f(173,210-f);
		glVertex2f(170,210-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(173,210-f);
		glVertex2f(174,211-f);
		glVertex2f(175,208-f);
		glVertex2f(174,205-f);
		glVertex2f(173,206-f);
		glVertex2f(173,210-f);
		glEnd();
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(190,190-f);
		glVertex2f(193,190-f);
		glVertex2f(193,186-f);
		glVertex2f(190,186-f);
		glVertex2f(190,190-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,1,0);
		glVertex2f(190,190-f);
		glVertex2f(189,191-f);
		glVertex2f(192,193-f);
		glVertex2f(194,191-f);
		glVertex2f(193,190-f);
		glVertex2f(190,190-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,1,0);
		glVertex2f(193,190-f);
		glVertex2f(194,191-f);
		glVertex2f(195,188-f);
		glVertex2f(194,185-f);
		glVertex2f(193,186-f);
		glVertex2f(193,190-f);
		glEnd();
	}

	else
	{
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(150,190-140);
		glVertex2f(153,190-140);
		glVertex2f(153,186-140);
		glVertex2f(150,186-140);
		glVertex2f(150,190-140);
		glEnd();
		glBegin(GL_POLYGON);
	glColor3f(1,1,0);
		glVertex2f(150,190-140);
		glVertex2f(149,191-140);
		glVertex2f(152,193-140);
		glVertex2f(154,191-140);
		glVertex2f(153,190-140);
		glVertex2f(150,190-140);
		glEnd();
glBegin(GL_POLYGON);
	glColor3f(1,1,0);
		glVertex2f(153,190-140);
		glVertex2f(154,191-140);
		glVertex2f(155,188-140);
		glVertex2f(154,185-140);
		glVertex2f(153,186-140);
		glVertex2f(153,190-140);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,1,0);
		glVertex2f(160,200-140);
		glVertex2f(163,200-140);
		glVertex2f(163,196-140);
		glVertex2f(160,196-140);
		glVertex2f(160,200-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(160,200-140);
		glVertex2f(159,201-140);
		glVertex2f(162,203-140);
		glVertex2f(164,201-140);
		glVertex2f(163,200-140);
		glVertex2f(160,200-140);
		glEnd();
	glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(163,200-140);
		glVertex2f(164,201-140);
		glVertex2f(165,198-140);
		glVertex2f(164,195-140);
		glVertex2f(163,196-140);
		glVertex2f(163,200-140);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(0,0,1);
		glVertex2f(170,190-140);
		glVertex2f(173,190-140);
		glVertex2f(173,186-140);
		glVertex2f(170,186-140);
		glVertex2f(170,190-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(170,190-140);
		glVertex2f(169,191-140);
		glVertex2f(172,193-140);
		glVertex2f(174,191-140);
		glVertex2f(173,190-140);
		glVertex2f(170,190-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(173,190-140);
		glVertex2f(174,191-140);
		glVertex2f(175,188-140);
		glVertex2f(174,185-140);
		glVertex2f(173,186-140);
		glVertex2f(173,190-140);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(0,1,1);
		glVertex2f(180,200-140);
		glVertex2f(183,200-140);
		glVertex2f(183,196-140);
		glVertex2f(180,196-140);
		glVertex2f(180,200-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(180,200-140);
		glVertex2f(179,201-140);
		glVertex2f(182,203-140);
		glVertex2f(184,201-140);
		glVertex2f(183,200-140);
		glVertex2f(180,200-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(183,200-140);
		glVertex2f(184,201-140);
		glVertex2f(185,198-140);
		glVertex2f(184,195-140);
		glVertex2f(183,196-140);
		glVertex2f(183,200-140);

		glEnd();
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,1);
		glVertex2f(170,210-140);
		glVertex2f(173,210-140);
		glVertex2f(173,206-140);
		glVertex2f(170,206-140);
		glVertex2f(170,210-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(170,210-140);
		glVertex2f(169,211-140);
		glVertex2f(172,213-140);
		glVertex2f(174,211-140);
		glVertex2f(173,210-140);
		glVertex2f(170,210-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(173,210-140);
		glVertex2f(174,211-140);
		glVertex2f(175,208-140);
		glVertex2f(174,205-140);
		glVertex2f(173,206-140);
		glVertex2f(173,210-140);
		glEnd();
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(190,190-140);
		glVertex2f(193,190-140);
		glVertex2f(193,186-140);
		glVertex2f(190,186-140);
		glVertex2f(190,190-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,1,0);
		glVertex2f(190,190-140);
		glVertex2f(189,191-140);
		glVertex2f(192,193-140);
		glVertex2f(194,191-140);
		glVertex2f(193,190-140);
		glVertex2f(190,190-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,1,0);
		glVertex2f(193,190-140);
		glVertex2f(194,191-140);
		glVertex2f(195,188-140);
		glVertex2f(194,185-140);
		glVertex2f(193,186-140);
		glVertex2f(193,190-140);
		glEnd();
}
		glutPostRedisplay();
}

void man()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,100,-10,100);
//left hand
glBegin(GL_POLYGON);
glColor3f(0.9,0.9,0.8);
glVertex2f(22.8-4,47.7-3);
glVertex2f(25-4,46.2-3);
glVertex2f(25-4,46.2-3);
glVertex2f(24.5-4,43.7-3);
glVertex2f(24.5-4,43.7-3);
glVertex2f(23.3-4,44.2-3);
glVertex2f(23.3-4,44.2-3);
glVertex2f(22.8-4,47.7-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(25-4,46.2-3);
glVertex2f(30-4,47.2-3);
glVertex2f(30-4,47.2-3);
glVertex2f(30.5-4,45.7-3);
glVertex2f(30.5-4,45.7-3);
glVertex2f(24.5-4,43.7-3);
glVertex2f(24.5-4,43.7-3);
glVertex2f(25-4,46.2-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(30-4,47.2-3);
glVertex2f(32-4,48.7-3);
glVertex2f(32-4,48.7-3);
glVertex2f(32.5-4,48.2-3);
glVertex2f(32.5-4,48.2-3);
glVertex2f(33.5-4,47.2-3);
glVertex2f(33.5-4,47.2-3);
glVertex2f(32.5-4,46.2-3);
glVertex2f(32.5-4,46.2-3);
glVertex2f(30.5-4,45.7-3);
glVertex2f(30.5-4,45.7-3);
glVertex2f(30-4,47.2-3);
glEnd();

//right leg
glBegin(GL_POLYGON);
glColor3f(0.9,0.9,0.8);

glVertex2f(22-1,31-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(22-1,31-4);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(21.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24-4);
glVertex2f(23-1,24-4);
glVertex2f(22.5-1,23-4);
glVertex2f(22.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21.5-1,25-4);
glEnd();
//LEFT LEg
glBegin(GL_POLYGON);
glColor3f(0.9,0.9,0.8);
glVertex2f(19.5-1,30.5-4);
glVertex2f(20-1,23-4);
glVertex2f(20-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(19.5-1,30.5-4);
glEnd();


//head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(18,55+1);
glVertex2f(18.5,56.4+1);
glVertex2f(18.5,56.4+1);
glVertex2f(19.5,56.9+1);
glVertex2f(19.5,56.9+1);
glVertex2f(22.5,56+1);
glVertex2f(22.5,56+1);
glVertex2f(22.3,55+1);
glVertex2f(22.3,55+1);
glVertex2f(18,55+1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.9,0.8);
glVertex2f(18,55);
glVertex2f(18.5,56);
glVertex2f(18.5,56);
glVertex2f(19.5,56.2);
glVertex2f(19.5,56.2);
glVertex2f(22.5,55.9);
glVertex2f(22.5,55.9);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(18,55);
glEnd();

glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(18,55);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(22.8,53);
glVertex2f(22.8,53);
glVertex2f(22.3,52.8);
glVertex2f(22.3,52.8);
glVertex2f(18.5,51);
glVertex2f(18.5,51);
glVertex2f(18,52);
glVertex2f(18,52);
glVertex2f(18,55);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.3);
glVertex2f(18.5,51);
glVertex2f(22.2,52.8);
glVertex2f(22.2,52.8);
glVertex2f(22.4,52);
glVertex2f(22.4,52);
glVertex2f(21.8,51.5);
glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(18.5,51);
//glColor3f(0.5,0.4,0.3);

glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.2,50.5);
glVertex2f(22.2,50.5);
glVertex2f(21.6,50.2);
glVertex2f(21.6,50.2);
glVertex2f(21.4,50);
glVertex2f(21.4,50);
glVertex2f(21.8,49);
glVertex2f(21.8,49);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(19,49+3);
glVertex2f(21,49+3);
glVertex2f(21,45+3);
glVertex2f(19,45+3);
glVertex2f(19,49+3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.9,0.5,0.9);
glVertex2f(19,48);
glVertex2f(17,46);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,46);
glVertex2f(21,48);
glVertex2f(19,48);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5,0.3,0.5);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,32);
glVertex2f(17,32);
glVertex2f(17,36);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(17,32);
glVertex2f(20,32);
glVertex2f(20,27);
glVertex2f(19.5,25);
glVertex2f(17.5,25);
glVertex2f(17,27);
glVertex2f(17,32);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(20,32);
glVertex2f(23,32);
glVertex2f(23,27);
glVertex2f(22.5,25);
glVertex2f(19.5,25);
//glVertex2f(20,27);
glVertex2f(20,32);
glEnd();


//right hand
glBegin(GL_POLYGON);
glColor3f(0.9,0.9,0.8);
glVertex2f(21.5,44.8);
glVertex2f(22.5,42.8);
glVertex2f(22.5,42.8);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(20,43.3);
glVertex2f(20,43.3);
glVertex2f(21.5,44.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(22.5,42.8);
glVertex2f(26.5,46.8);
glVertex2f(26.5,46.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(22.5,42.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(26.5,46.8);
glVertex2f(28.5,48.3);
glVertex2f(28.5,48.3);
glVertex2f(30,46.8);
glVertex2f(30,46.8);
glVertex2f(29,45.8);
glVertex2f(29,45.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(26.5,46.8);
glEnd();


//eyes
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(21.3,54.7);
glVertex2f(21.8,54.2);
glVertex2f(22.3,54.7);
glVertex2f(21.8,55.2);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(21.3,55);
glVertex2f(21.8,55.5);
glVertex2f(22.3,55);
glEnd();

}
void tree()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(10,100.0,10,100.0);

glBegin(GL_POLYGON);
glColor3f(0,0.8,0.1);
glVertex2f(28,65);
glVertex2f(30,64.5);
 glVertex2f(32.5,64);
glVertex2f(34,64.5);
 glVertex2f(35.5,65);
 glVertex2f(39,66);
 glVertex2f(37,67.5);
 glVertex2f(37,68);
 glVertex2f(39,69.5);

glVertex2f(39,71.5);
glVertex2f(39.3,72);
glVertex2f(39.6,73);
glVertex2f(39.9,73.5);
glVertex2f(40,74);
 glVertex2f(40.5,75);
glVertex2f(40,76.5);
 glVertex2f(43,77.5);
 glVertex2f(42.5,79);
 glVertex2f(43,80);
 glVertex2f(41.5,82.5);
 glVertex2f(40.5,82);
glVertex2f(40,81.5);
glVertex2f(41,82.5);
glVertex2f(41.5,83.5);
glVertex2f(42,85);
glVertex2f(39,87);
glVertex2f(37,88.5);
glVertex2f(33,86);
glVertex2f(32,84);
glVertex2f(33,90);
glVertex2f(28,65);

glEnd();
//root
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(26.5,49);
glVertex2f(28,48.5);
 glVertex2f(30,50);
 glVertex2f(28.5,52.5);
 glVertex2f(28,55);
 glVertex2f(28.5,67.5);
 glVertex2f(28,55);
 glVertex2f(28,60);
 glVertex2f(28.5,67.5);
 glVertex2f(28,65);
 glVertex2f(28.5,67.5);
 glVertex2f(29.5,71);
 glVertex2f(30,72.5);
 glVertex2f(25,80);
 glVertex2f(25,50);
 glVertex2f(26.5,49);
 glEnd();


//tree 1 branch
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);

 glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);

glEnd();


//tree1 root
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);

 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);
 glEnd();
}

void back()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-20,100.0,-20,100.0);

glBegin(GL_POLYGON);
glColor3f(0.0,0.8,0.1);
glVertex2f(28,65);
glVertex2f(30,64.5);
 glVertex2f(32.5,64);
glVertex2f(34,64.5);
 glVertex2f(35.5,65);
 glVertex2f(39,66);
 glVertex2f(37,67.5);
 glVertex2f(37,68);
 glVertex2f(39,69.5);

glVertex2f(39,71.5);
glVertex2f(39.3,72);
glVertex2f(39.6,73);
glVertex2f(39.9,73.5);
glVertex2f(40,74);
 glVertex2f(40.5,75);
glVertex2f(40,76.5);
 glVertex2f(43,77.5);
 glVertex2f(42.5,79);
 glVertex2f(43,80);
 glVertex2f(41.5,82.5);
 glVertex2f(40.5,82);
glVertex2f(40,81.5);
glVertex2f(41,82.5);
glVertex2f(41.5,83.5);
glVertex2f(42,85);
glVertex2f(39,87);
glVertex2f(37,88.5);
glVertex2f(33,86);
glVertex2f(32,84);
glVertex2f(33,90);
glVertex2f(28,65);

glEnd();
//root
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(26.5,49);
glVertex2f(28,48.5);
 glVertex2f(30,50);
 glVertex2f(28.5,52.5);
 glVertex2f(28,55);
 glVertex2f(28.5,67.5);
 glVertex2f(28,55);
 glVertex2f(28,60);
 glVertex2f(28.5,67.5);
 glVertex2f(28,65);
 glVertex2f(28.5,67.5);
 glVertex2f(29.5,71);
 glVertex2f(30,72.5);
 glVertex2f(25,80);
 glVertex2f(25,50);
 glVertex2f(26.5,49);
 glEnd();


//tree 1 branch
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);

 glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);

glEnd();


//tree1 root
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);

 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);
 glEnd();
//tree2half
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(75,48);
 glVertex2f(75.5,58);
 glVertex2f(75.6,60);
 glVertex2f(75.5,61);
 glVertex2f(75,65);
 glVertex2f(74.5,66);
 glVertex2f(73,69);
 glVertex2f(72.5,70);
 glVertex2f(72.5,77.5);
 glVertex2f(75,80);
 glVertex2f(81,67.5);
 glVertex2f(78,48);
glEnd();
//tree branch 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,75);
glVertex2f(72.5,72.5);
 glVertex2f(71,74.0);
 glVertex2f(70.5,74.5);
 glVertex2f(70,75);
 glVertex2f(69.5,76);
 glVertex2f(69.5,77);

 glVertex2f(70,80);
 glVertex2f(68,81);
 glVertex2f(67.5,82);
 glVertex2f(66,83.5);
 glVertex2f(66.3,84.5);
 glVertex2f(66.5,85);
 glVertex2f(67,87);
 glVertex2f(67.5,87.5);
 glVertex2f(70,90);
 glVertex2f(71,91.5);
 glVertex2f(71.5,92.5);
 glVertex2f(72.5,94);
 glVertex2f(75,95);
 glVertex2f(77.5,96);
 glVertex2f(80,96.5);
 glVertex2f(82.5,96);
 glVertex2f(83,95);
  glVertex2f(83.5,94.5);
  glVertex2f(84.5,92.5);

 glVertex2f(84.7,90);
 glVertex2f(86,91);
 glVertex2f(87.0,91.5);
 glVertex2f(87.5,90);
 glVertex2f(87.5,89);
 glVertex2f(89,89);
 glVertex2f(89.5,87.5);
 glVertex2f(89,85);
glVertex2f(88,82.5);
 glVertex2f(87,82);
 glVertex2f(86,81);
 glVertex2f(85,80);
 glVertex2f(85.5,75.5);
 glVertex2f(84,75);
glVertex2f(82.5,75);
glEnd();

//tree 2
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(77.5,48);
glVertex2f(77,60);
 glVertex2f(77.5,62.5);
 glVertex2f(77,65);
 glVertex2f(77,67.5);
 glVertex2f(76,70);
 glVertex2f(75,75);
 glVertex2f(75,78);
 glVertex2f(80,75);
 glVertex2f(82.5,78);
 glVertex2f(82,75);
 glVertex2f(82,72.5);
 glVertex2f(81.5,70);
 glVertex2f(81,65);
 glVertex2f(81.5,62);
 glVertex2f(84,48);
glEnd();
}
void grass()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,150.0,0.0,150.0);
//grass 2

//ryt grass
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.3);
glVertex2f(0,7.5);
 glVertex2f(5,13);
 glVertex2f(0,15);
 glVertex2f(5,13);
 glVertex2f(0,20);
 glVertex2f(5,15);
 glVertex2f(10,18);
 glVertex2f(15,25);
 glVertex2f(13,20);
 glVertex2f(17,21);
 glVertex2f(20,23);
 glVertex2f(17,18);
 glVertex2f(15,15);
 glVertex2f(20,17);
 glVertex2f(25,18);
 glVertex2f(20,15);
 glVertex2f(15,10);
 glVertex2f(30,10);
glVertex2f(35,7.5);
glEnd();

}
void keys3(unsigned char key, int x, int y){
    switch (key) {

case 'b': {window=0;
glutInitWindowSize(1280,725);
glutInitWindowPosition(0,0);
win=glutCreateWindow("Festivals of India1");

glutDisplayFunc(window0);
glutMouseFunc(mouse);

//glutSwapBuffers();
glutReshapeFunc(myReshape);
//setup();
glutMainLoop();}

        }
}
void window11()
{
  glutInitWindowSize(1200,600);
	glutInitWindowPosition(50,40);
    win=glutCreateWindow("GURUPOORNIMA");
	glutDisplayFunc(display8);
	myinit();
	glutKeyboardFunc(keys3);
	glutMainLoop();
}

void myReshape(int w,int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
    {
        glOrtho(-1.0,1.0,-1.0*(GLfloat)h/(GLfloat)w,1.0*(GLfloat)h/(GLfloat)w,-10.0,10.0);
    }
    else
    {
        glOrtho((-1.0*(GLfloat)w/(GLfloat)h),1.0*(GLfloat)w/(GLfloat)h,-1.0,1.0,-10.0,10.0);
    }
    glMatrixMode(GL_MODELVIEW);
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
glutInitWindowSize(1280,725);
glutInitWindowPosition(0,0);
win=glutCreateWindow("Festivals of India");
if(window==0)
{
   glutDisplayFunc(display0);
   glutMouseFunc(mouse);
}
glutSwapBuffers();
glutReshapeFunc(myReshape);
setup();
glutMainLoop();
}







