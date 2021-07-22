#include <windows.h>
#include <GL/glut.h>
#include <math.h>

int _angle1 = 0;
int _carangle = 0;
void Border()
{
    glBegin(GL_LINES);
    glColor3ub(0, 255, 0);
    glVertex2f(0, 400);
    glVertex2f(500, 400);
    glEnd();

}
void Mountain()
{
    glBegin(GL_POLYGON);
    glColor3ub(107, 107, 71);
    glVertex2f(85, 430);
    glColor3ub(14, 89, 7);
    glVertex2f(100, 455);
    glVertex2f(200, 300);
    glColor3ub(72, 36, 20);
    glVertex2f(170, 300);
    // glVertex2f(0, 300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(107, 107, 71);
    glVertex2f(0, 350);
    glVertex2f(80, 450);
    glColor3ub(12, 20, 30);
    glVertex2f(140, 380);
    glVertex2f(170, 300);
    glVertex2f(0, 300);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(79, 92, 89);
    glVertex2f(160, 360);
    glColor3ub(14, 89, 7);
    // glColor3ub(90, 113, 125);
    glVertex2f(260, 480);
    glColor3ub(107, 107, 71);
    glVertex2f(330, 360);
    glColor3ub(72, 36, 20);
    glVertex2f(380, 300);
    glColor3ub(12, 20, 30);
    glVertex2f(200, 300);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(107, 107, 71);
    glVertex2f(330, 360);
    glVertex2f(420, 450);
    glVertex2f(500, 370);
    glVertex2f(500, 300);
    glVertex2f(380, 300);
    glEnd();
}


void SmallMountain(int x, int y)
{
    glBegin(GL_POLYGON);
    glColor3ub(46, 43, 43);
    glVertex2f(0 + x, 370 + y);
    glVertex2f(15 + x, 400 + y);
    glVertex2f(30 + x, 360 + y);
    glVertex2f(0 + x, 350 + y);
    glEnd();
}

void outliner()
{
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 350);
    glVertex2f(80, 450);
    glVertex2f(80, 450);
    glVertex2f(140, 380);
    glVertex2f(140, 380);
    glVertex2f(170, 300);
    glVertex2f(90, 435);
    glVertex2f(100, 455);
    glVertex2f(100, 455);
    glVertex2f(200, 300);
    glVertex2f(260, 480);
    glVertex2f(330, 360);
    glVertex2f(330, 360);
    glVertex2f(380, 300);
    glVertex2f(330, 360);
    glVertex2f(420, 450);
    glVertex2f(420, 450);
    glVertex2f(500, 370);

    glEnd();
}
void scaledmountain()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(.3, .3, 0);
    glTranslatef(1170, 1040, 0);
    Mountain();
    glPopMatrix();
}


void circle(int xx, int yy, float r)
{

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin

    for (int i = 0; i < 200; i++)
    {
        // glColor3ub(255, 215, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        // float r = 4.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xx, y + yy);
    }
    glEnd();
}
void sun()
{
    glColor3ub(252, 186, 3);    //midday sun effect
    //glColor3ub(128, 128, 128);  
    circle(175, 440, 20);

}
void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(51, 190, 255);
    glVertex2f(0, 300);
    glColor3ub(107, 207, 255);
    glVertex2f(500, 300);
    glColor3ub(0, 173, 255);
    glVertex2f(500, 500);
    glColor3ub(255, 250, 241);
    glVertex2f(0, 500);

    glEnd();
}
void river()
{
    glBegin(GL_QUADS);          //uper
    glColor3ub(184, 220, 245);     //aqua green
    glVertex2f(0, 400);
    glColor3ub(238, 241, 241);    //black haze
    glVertex2f(500, 400);
    glColor3ub(7, 36, 71);       //downriver color
    glVertex2f(500, 180);
    glColor3ub(131, 177, 224);   //cornflower //white ice
    glVertex2f(0, 180);
    glEnd();


    glBegin(GL_QUADS);     // down river
    glColor3ub(7, 36, 71);
    glVertex2f(0, 0);
    glColor3ub(238, 241, 241);
    glVertex2f(500, 0);
    glColor3ub(184, 220, 245);
    glVertex2f(500, 80);
   // glColor3ub(179, 89, 0);
    glVertex2f(0, 80);

    glEnd();

    glBegin(GL_QUADS);    //river bank
    glColor3ub(72, 67, 76);
    glVertex2f(0, 80);
    glColor3ub(92, 94, 116);
    glVertex2f(500, 80);
    glColor3ub(52, 35, 36);
    glVertex2f(500, 112);
    glVertex2f(0, 112);
    glEnd();

}

void Badh()
{

    // glColor3b(204, 102, 0); //Badh color
    glBegin(GL_POLYGON);
    glColor3ub(118, 157, 168);
    glVertex2f(0, 122);
    glColor3ub(40, 96, 120);
    glVertex2f(20, 122);
    glColor3ub(63, 51, 48);
    glVertex2f(20, 110);
    glColor3ub(172, 172, 41);
    glVertex2f(0, 110);
    glColor3ub(185, 172, 172);
    glEnd();

    //create border
    glColor3b(0, 0, 0); //border color

    glBegin(GL_LINE_LOOP);
    glVertex2f(0, 122);
    glVertex2f(20, 122);
    glVertex2f(20, 110);
    glVertex2f(0, 110);
    glEnd();
}

void fullBath()
{
    glColor3ub(204, 102, 0);
    //transform Badh to using push matrix and pop matrix
    for (size_t i = 0; i < 25; i++)
    {
        glPushMatrix();
        glTranslatef(0 + (20 * i), 0, 0);
        glColor3ub(204, 90 + (5 * i), 0);
        Badh();
        glPopMatrix();
    }
}

void fullBadh3layer()
{
    for (size_t i = 0; i < 3; i++)
    {
        glPushMatrix();
        glTranslatef(0, 0 + (i * 12), 0);

        fullBath();
        glPopMatrix();
    }
}

void circle()
{
    // glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    // glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(7.5);
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(203, 203, 203);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 30;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

    glEnd();
}

void cloud()
{
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glTranslatef(20, 95.5, 0);
    circle();

    glTranslatef(15, 2.5, 0);
    circle();

    glTranslatef(20, 5, 0);
    circle();

    glTranslatef(30, 2.5, 0);
    circle();

    glTranslatef(0, -2.5, 0);
    circle();

    glTranslatef(0, -5, 0);
    circle();

    glTranslatef(0, -7.5, 0);
    circle();

    glPopMatrix();

    // glutSwapBuffers();
}

void movingCloude()
{

    glPushMatrix();
    glTranslatef(500, 400, 0);

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.5, 0.5, 1);
    glTranslatef(-(_angle1 / 2 % 1000), 0, 0);
    glPushMatrix();
    glTranslatef(-100, 0, 0);
    cloud();
    glTranslatef(200, 35, 0);
    cloud();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    // glutSwapBuffers();
}
void update(int value)
{

    _angle1 += 1.0f;
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}
void TropicalTreeLeafCircle()
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(0.0, 255, 0.0);//green-leaf
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 15.85;
        float x = 2 * r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }

    glEnd();

}
void TropicalTreeLeafCircles()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(215, 360, 0);//lower-branch
    TropicalTreeLeafCircle();
    glTranslatef(20, -15, 0);
    TropicalTreeLeafCircle();
    glTranslatef(0, 20, 0);
    TropicalTreeLeafCircle();
    glTranslatef(70, 20, 0);//middle-branch
    TropicalTreeLeafCircle();
    glTranslatef(20, 20, 0);
    TropicalTreeLeafCircle();
    glTranslatef(20, -20, 0);
    TropicalTreeLeafCircle();
    glTranslatef(-50, 60, 0);//Upper-branch
    TropicalTreeLeafCircle();
    glTranslatef(-30, 20, 0);
    TropicalTreeLeafCircle();
    glTranslatef(-30, -10, 0);//Upper-branch
    TropicalTreeLeafCircle();
    glTranslatef(-30, -10, 0);//Upper-branch
    TropicalTreeLeafCircle();
    glTranslatef(25, -10, 0);//Upper-branch
    TropicalTreeLeafCircle();

    glPopMatrix();
}
void TropicalTreeBranch()
{
    glColor3ub(128, 0, 0);
    glBegin(GL_POLYGON);//maroon-lower-branch-1
    glVertex2f(240, 300);
    glVertex2f(260, 300);
    glVertex2f(230, 330);
    glVertex2f(235, 335);
    glEnd();

    glBegin(GL_POLYGON);//maroon-lower-branch-2
    glVertex2f(230, 330);
    glVertex2f(235, 335);
    glVertex2f(215, 360);
    glEnd();

    glBegin(GL_POLYGON);//maroon-middle-branch-p-3
    glVertex2f(280, 350);
    glVertex2f(270, 355);
    glVertex2f(320, 390);
    glEnd();

    glBegin(GL_POLYGON);//maroon-middle-branch-p-4
    glVertex2f(260, 390);
    glVertex2f(270, 395);
    glVertex2f(230, 430);
    glEnd();


}
void TropicalTreeLog()
{
    glColor3ub(128, 0, 0);
    glBegin(GL_POLYGON);//maroon-log-p-1
    glVertex2f(250, 250);
    glVertex2f(240, 300);
    glVertex2f(260, 300);
    glVertex2f(270, 250);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-2
    glVertex2f(240, 300);
    glVertex2f(260, 300);
    glVertex2f(280, 350);
    glVertex2f(270, 355);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-3
    glVertex2f(280, 350);
    glVertex2f(270, 355);
    glVertex2f(260, 390);
    glVertex2f(270, 395);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-4
    glVertex2f(260, 390);
    glVertex2f(270, 395);
    glVertex2f(280, 450);
    glVertex2f(275, 435);
    glEnd();
}
void TropicalTree()

{
    TropicalTreeLog();
    TropicalTreeBranch();
    TropicalTreeLeafCircles();
}
void ScaledTropicalTree()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.5, 0.5, 0);
    glTranslatef(-180, 110, 0);
    TropicalTree();
    glPopMatrix();

}
void TropicalTreeLoop()
{


    glPushMatrix();
    for (int tree = 0; tree < 05; tree++)
    {
     
        ScaledTropicalTree();
        glTranslatef(100, 0, 0);
       
    }

    glPopMatrix();

}
void CarTire()
{
    //Tires

    glBegin(GL_POLYGON); //tire-1
    glLineWidth(7.5);
    for (int i = 0; i < 200; i++)
    {

        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.5;
        float x = r * cos(A);
        float y = r * sin(A);
        //glVertex2f(x,y);
        glVertex2f((140 + (x * 5)), (93 + (y * 5)));
    }
    glEnd();
    //Point

    // 140=140+200;

    glBegin(GL_POLYGON);
    glLineWidth(7.5);
    for (int i = 0; i < 200; i++)
    {

        glColor3ub(168, 169, 173); //steel-cover
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 1.5;
        float x = (140 + (r * 5 * cos(A)));
        float y = (93 + (r * 5 * sin(A)));
        glVertex2f(x, y);
    }
    glEnd();
    //140=140+200;

    //points
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glVertex2f(140.0, 93.0);
    glVertex2f(140.0 + 5, 93.0);
    glVertex2f(140.0 - 5, 93.0);
    glVertex2f(140.0, 93.0 + 10);
    glVertex2f(140.0, 93.0 - 10);
    glEnd();
}
void CarBody()
{

    //glColor3f(0.1373, 0.5725, 0.5529); //body
    glColor3ub(252, 186, 3);
    glBegin(GL_POLYGON);
    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(240, 127);
    glVertex2f(240, 92);
    glVertex2f(110, 92);
    glVertex2f(110, 127);
    glVertex2f(130, 127);
    glVertex2f(140, 152);
    glEnd();

    glBegin(GL_POLYGON); //back-light
    glColor3ub(255, 0, 0);
    glVertex2f(110, 92);
    glVertex2f(115, 92);
    glVertex2f(115, 117);
    glVertex2f(110, 117);
    glEnd();

    glBegin(GL_POLYGON); //window
    glColor3ub(0, 0, 0);
    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(210, 127);
    glVertex2f(120, 127);
    glVertex2f(130, 127);
    glEnd();

    glBegin(GL_POLYGON); //window-Divider
    glColor3ub(192, 192, 192);
    glVertex2f(170, 152);
    glVertex2f(165, 152);
    glVertex2f(165, 127);
    glVertex2f(170, 127);
    glEnd();

    glBegin(GL_POLYGON); //roof-plate
    glColor3ub(168, 169, 173);

    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(185, 157);
    glVertex2f(140, 157);
    glEnd();

    glBegin(GL_POLYGON); //window-holder-front
    glColor3ub(168, 169, 173);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(210, 127);
    glVertex2f(185, 152);
    glEnd();

    glBegin(GL_POLYGON); //window-holder-back
    glColor3ub(168, 169, 173);
    glVertex2f(140, 157);
    glVertex2f(115, 127);
    glVertex2f(125, 127);
    glVertex2f(140, 152);
    glEnd();

    glBegin(GL_POLYGON); //foot-holder
    glColor3ub(168, 169, 173);
    glVertex2f(215, 92);
    glVertex2f(110, 92);
    glVertex2f(110, 97);
    glVertex2f(215, 97);

    glEnd();

    glBegin(GL_POLYGON);      //mirror
    glColor3f(0.3, 0.9, 0.6); //body
    //glColor3ub(255,250,0);
    glVertex2f(211.5, 134.5);
    glVertex2f(204.5, 135.5);
    glVertex2f(203.5, 129);
    glVertex2f(210.5, 127);
    glEnd();
}

void fullCar()
{

    CarBody();

    // glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();

    glTranslatef(142.5, 95.5, 0);
    glRotatef(-_angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-142.5, -95.5, 0);
    CarTire();
    glPopMatrix();
    // glutSwapBuffers();

    glPushMatrix();
    glTranslatef(60, 0, 0);

    glTranslatef(142.5, 95.5, 0);
    glRotatef(-_angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-(142.5), -95.5, 0);
    CarTire();
    // CarTire();
    glPopMatrix();
}
void CarForward()
{
    glMatrixMode(GL_MODELVIEW);

    // init();
    glPushMatrix();

    glTranslatef(-142.5, 100, 0);
    glTranslatef((_carangle / 2) % 500, 0, 0);
    glScalef(0.7, 0.7, 0);
    fullCar();

    glPopMatrix();

    glutSwapBuffers();
}

void carupdate(int value)
{
    _carangle += 1;
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, carupdate, 0);
}
void circle1(int xx, int yy, float r)
{

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        // glColor3ub(255, 215, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        // float r = 4.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xx, y + yy);
    }
    glEnd();
}
void Roadbody()
{
    int x = 0, y = 0;


    glBegin(GL_POLYGON);
    glColor3ub(204, 122, 0);
    glVertex2f(500, 180);
    glColor3ub(153, 61, 0);
    glVertex2f(500, 145);
    glColor3ub(255, 170, 0);
    glVertex2f(0, 145);
    glColor3ub(179, 89, 0);
    glVertex2f(0, 180);


    glEnd();
    ;
    /*
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 90, 140);
    glVertex2f(y + 135, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 180, 140);
    glVertex2f(y + 225, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 270, 140);
    glVertex2f(y + 315, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 360, 140);
    glVertex2f(y + 405, 140);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(x + 450, 140);
    glVertex2f(y + 495, 140);
    glEnd();*/

}

void road()
{
    /* glMatrixMode(GL_MODELVIEW);
     glPushMatrix();
     glTranslatef(0, 100, 0);*/
    Roadbody();
    /*glTranslatef(0, -100, 0);
    glPopMatrix();*/
}

void BoatBodyStick()//boitha
{
    glBegin(GL_LINES);
    glColor3ub(165, 42, 42);//brown-stick
    glVertex2f(210, 75);
    glVertex2f(220, 10);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);//brown-stick
    glVertex2f(218, 20);
    glVertex2f(220, 10);
    glVertex2f(230, 10);
    glEnd();

}
void BoatBodyShell()
{
    glBegin(GL_POLYGON);
    glColor3ub(165, 42, 42);//brown-shell
    glVertex2f(120, 30);
    glVertex2f(200, 30);
    glVertex2f(195, 55);
    glVertex2f(125, 55);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);//yellow-shell-stripe-pattern
    glVertex2f(120, 30);
    glVertex2f(200, 30);

    glVertex2f(121, 35);
    glVertex2f(199, 35);

    glVertex2f(122, 40);
    glVertex2f(198, 40);

    glVertex2f(123, 45);
    glVertex2f(197, 45);

    glVertex2f(124, 50);
    glVertex2f(196, 50);

    glVertex2f(125, 55);
    glVertex2f(195, 55);


    glEnd();


}
void BoatBody()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);//black-base
    glVertex2f(120, 10);
    glVertex2f(200, 10);
    glVertex2f(200, 30);
    glVertex2f(120, 30);
    glEnd();
    glBegin(GL_TRIANGLES);//black-nose-front
    glVertex2f(120, 10);
    glVertex2f(120, 30);
    glVertex2f(80, 40);
    glEnd();
    glBegin(GL_TRIANGLES);//black-nose-back
    glVertex2f(200, 10);
    glVertex2f(200, 30);
    glVertex2f(240, 40);
    glEnd();

    glBegin(GL_POLYGON);//yellow-inside-shape
    glColor3ub(255, 255, 0);
    glVertex2f(240, 40);
    glVertex2f(80, 40);
    glVertex2f(120, 30);
    glVertex2f(200, 30);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0, 0, 0);//black_stripe
    /*
    for(int i=0;i<4;i++)
    {
        int x1=205,y1=30,x2=200,y2=40,dx=5,dy=5;
    }*/

    glVertex2f(205, 30);
    glVertex2f(200, 40);

    glVertex2f(210, 30);
    glVertex2f(205, 40);

    glVertex2f(215, 30);
    glVertex2f(210, 40);

    glVertex2f(220, 30);
    glVertex2f(215, 40);

    glVertex2f(225, 30);
    glVertex2f(220, 40);

    //
    glVertex2f(115, 30);
    glVertex2f(120, 40);

    glVertex2f(110, 30);
    glVertex2f(115, 40);

    glVertex2f(105, 30);
    glVertex2f(110, 40);

    glVertex2f(100, 30);
    glVertex2f(105, 40);

    glVertex2f(95, 30);
    glVertex2f(100, 40);

    glEnd();
    BoatBodyShell();
   // BoatBodyStick();
}
void Boat()
{
    glLineWidth(1);
    //BoatBody();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(10, 310, 0);
    glScalef(0.7, 0.7, 0);
    // glRotatef(250, 0, 0, 1);
    BoatBody();
    glTranslatef(310, 50, 0);
    glScalef(0.6, 0.6, 0);
    // glRotatef(250, 0, 0, 1);
    BoatBody();
    glTranslatef(-110, 100, 0);
    glScalef(0.3, 0.3, 0);
    // glRotatef(250, 0, 0, 1);
    BoatBody();
    glTranslatef(410, 0, 0);
    BoatBody();
    glPopMatrix();
}

void Container(float x, float y)
{
    glBegin(GL_POLYGON);
    glVertex2f(x, 125 + y);
    glVertex2f(x, 150 + y);
    glVertex2f(10 + x, 150 + y);
    glVertex2f(10 + x, 125 + y);
    glEnd();
}

void Window(float x, float y)
{
    glBegin(GL_POLYGON);
    glVertex2f(x, 175 + y);
    glVertex2f(x, 170 + y);
    glVertex2f(5 + x, 170 + y);
    glVertex2f(5 + x, 175 + y);
    glEnd();
}

void Railing(float x, float y)
{
    glLineWidth(5);
    glColor3ub(36, 36, 74);
    glBegin(GL_LINES);
    glVertex2f(x, 125 + y);
    glVertex2f(x, 135 + y);
    glEnd();
}

void Ship()
{
    glBegin(GL_QUADS);  //chimney
    glColor3ub(0, 0, 100);
    glVertex2f(210, 170);
    glVertex2f(195, 170);
    glVertex2f(198, 210);
    glVertex2f(207, 210);
    glEnd();
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(197, 200);
    glVertex2f(208, 200);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(197, 193);
    glVertex2f(208, 193);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(199, 210);
    glVertex2f(206, 210);
    glEnd();

    glBegin(GL_POLYGON); //cabin
    glColor3ub(116, 202, 141);
    glVertex2f(180, 125);
    glVertex2f(180, 180);
    glVertex2f(200, 180);
    glVertex2f(200, 170);
    glVertex2f(220, 170);
    glVertex2f(220, 125);
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(255, 0, 0);
        float pi = 3.1416;
        float A = (i * pi) / 200;
        float r = 8;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 190, y + 185);
    }

    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 200; i++)
    {
        glColor3ub(116, 202, 141);
        float pi = 3.1416;
        float A = (i * pi) / 200;
        float r = 10;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 190, y + 179);
    }

    glEnd();

    glBegin(GL_POLYGON);  //ship body
    glColor3ub(178, 87, 223);
    glVertex2f(90, 150);
    glVertex2f(120, 150);
    glVertex2f(130, 125);
    glVertex2f(130, 100);
    glVertex2f(100, 100);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(178, 87, 223);
    glVertex2f(130, 125);
    glVertex2f(130, 100);
    glVertex2f(200, 100);
    glVertex2f(200, 125);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(178, 87, 223);
    glVertex2f(200, 150);
    glVertex2f(225, 150);
    glVertex2f(230, 125);
    glVertex2f(220, 100);
    glVertex2f(200, 100);
    glVertex2f(200, 125);
    glVertex2f(205, 150);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(111, 3, 165);
    glVertex2f(100, 100);
    glVertex2f(220, 100);
    glVertex2f(220, 95);
    glVertex2f(100, 95);
    glEnd();

    glColor3ub(255, 0, 0);  //Container
    for (int i = 130; i < 171; i++)
    {
        if (i % 20 == 0)
        {
            Container(i, 0);
        }

    }
    glColor3ub(0, 128, 255);
    for (int i = 130; i < 181; i++)
    {
        if (i % 20 == 0)
        {
            Container(i - 10, 0);
        }

    }
    glColor3ub(255, 222, 0);
    for (int i = 130; i < 171; i++)
    {
        if (i % 20 == 0)
        {
            Container(i + 5, 25);
        }

    }
    glColor3ub(9, 255, 0);
    for (int i = 130; i < 171; i++)
    {
        if (i % 20 == 0)
        {
            Container(i - 5, 25);
        }

    }
    glColor3ub(255, 128, 0);
    for (int i = 130; i < 151; i++)
    {
        if (i % 20 == 0)
        {
            Container(i + 10, 50);
        }

    }
    glColor3ub(255, 128, 255);
    for (int i = 130; i < 171; i++)
    {
        if (i % 20 == 0)
        {
            Container(i, 50);
        }

    }

    glColor3ub(0, 0, 0);  //windows
    for (int i = 180; i < 200; i++)
    {
        if (i % 10 == 0)
        {
            Window(i + 2, 0);
        }

    }
    for (int i = 180; i < 220; i++)
    {
        if (i % 10 == 0)
        {
            Window(i + 2, -8);
        }

    }
    for (int i = 180; i < 220; i++)
    {
        if (i % 10 == 0)
        {
            Window(i + 2, -16);
        }

    }
    for (int i = 180; i < 200; i++)
    {
        if (i % 10 == 0)
        {
            Window(i + 2, -24);
        }

    }
    for (int i = 180; i < 200; i++)
    {
        if (i % 10 == 0)
        {
            Window(i + 2, -32);
        }

    }
    glBegin(GL_POLYGON); //cabin
    glColor3ub(0, 0, 0);
    glVertex2f(183, 178);
    glVertex2f(197, 178);
    glVertex2f(197, 183);
    glVertex2f(183, 183);
    glEnd();

    glLineWidth(5);  //railing
    glColor3ub(36, 36, 74);
    glBegin(GL_LINES);
    glVertex2f(125, 135);
    glVertex2f(200, 135);
    glEnd();
    for (int i = 130; i < 200; i++)
    {
        if (i % 10 == 0)
        {
            Railing(i, 0);
        }

    }

}

void scalledship()
{
    glPushMatrix();
    glScalef(1.4, 1.2, 0);
    glTranslatef(120, 100, 0);
    Ship();
    glPopMatrix();
}


//add method
void Boat2Windows()
{
    glBegin(GL_QUADS);
    glColor3ub(202, 202, 0);//yellow-window
    glVertex2f(135, 35);
    glVertex2f(150, 35);
    glVertex2f(150, 50);
    glVertex2f(135, 50);
    glEnd();

}
void Boat2WindowLoop()
{
    Boat2Windows();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    for (int windowNo = 0; windowNo < 4; windowNo++)
    {
        glTranslatef(20, 0, 0);
        Boat2Windows();
    }
    glTranslatef(20, 0, 0);
    Boat2Windows();
    glPopMatrix();
}
void Boat2Shed()
{

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 51);//brown-shed
    glVertex2f(120, 30);
    glVertex2f(240, 30);
    glVertex2f(240, 55);
    glVertex2f(130, 55);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102, 0, 0);//red-shed-ceiling
    glVertex2f(240, 55);
    glVertex2f(130, 55);
    glVertex2f(128, 60);
    glVertex2f(240, 60);
    glEnd();
    Boat2WindowLoop();
}
void Boat2BackStick()
{
    glBegin(GL_LINES);
    glColor3ub(165, 42, 42);//brown-stick
    glVertex2f(210 + 50, 75);
    glVertex2f(220 + 50, 10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);//red-quads
    glVertex2f(218 + 50, 20);
    glVertex2f(220 + 50, 10);
    glVertex2f(230 + 50, 10);
    glVertex2f(280, 20);
    glEnd();

}
void Boat2BackBox()
{
    glBegin(GL_POLYGON);
    glColor3ub(245, 176, 66);//orange-box
    glVertex2f(260 + 5, 40);
    glVertex2f(250 + 5, 30);
    glVertex2f(230 + 5, 30);
    glVertex2f(230 + 5, 70);
    glVertex2f(260 + 5, 70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(245, 0, 0);//red-box-ceiling
    glVertex2f(230, 70);
    glVertex2f(260 + 5 + 5, 70);
    glVertex2f(260 + 5, 75);
    glVertex2f(230 + 5 + 2, 75);
    glEnd();

}
void Boat2Body()
{
    Boat2BackStick();
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 0);//red-base
    glVertex2f(120, 10);
    glVertex2f(250, 10);
    glVertex2f(250, 30);
    glVertex2f(120, 30);
    glEnd();
    glBegin(GL_TRIANGLES);//black-nose-front
    glVertex2f(120, 10);
    glVertex2f(120, 30);
    glVertex2f(80, 40);
    glEnd();

    glBegin(GL_TRIANGLES);//black-nose-back
    glVertex2f(200 + 50, 10);
    glVertex2f(200 + 50, 30);
    glVertex2f(240 + 50, 40 + 20);
    glEnd();

    glBegin(GL_POLYGON);//yellow-inside-shape
    glColor3ub(255, 255, 0);
    glVertex2f(250, 40);
    glVertex2f(80, 40);
    glVertex2f(120, 30);
    glVertex2f(250, 30);
    glEnd();

    Boat2Shed();
    Boat2BackBox();

}
void Boat2()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0, 0, 0);
    Boat2Body();
    glPopMatrix();
}

void ScaledBoat2()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(1.2, 1.2, 0);
    Boat2();
    glPopMatrix();
}

void output(void)
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5);
    sky();
    Border();
    scaledmountain();

    /*SmallMountain(0, 0);
    SmallMountain(140, 0);
    SmallMountain(155, -2);
    SmallMountain(310, 03);
    SmallMountain(335, 07);*/
   
    sun();
    movingCloude();
    river();
    
    road();
    Boat();
    //   tree();
    scalledship();
    TropicalTreeLoop();
 
    CarForward();
    fullBadh3layer();
    ScaledBoat2();
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    //
    glutInitWindowSize(1024, 648);
    glutInitWindowPosition(300, 100);
    glutCreateWindow("Highway");
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(output);
    glutTimerFunc(20, update, 0); //Add a timer
    glutTimerFunc(20, carupdate, 0);
    glutMainLoop();
    return 0;
}
