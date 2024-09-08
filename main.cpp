#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
#include <iostream>

# define PI           3.14159265358979323846

using namespace std;

GLfloat maxLength=400;
GLfloat maxFieldLength=15;
GLfloat maxWaterLength=maxFieldLength+10;
GLfloat maxSandLength=maxWaterLength+11;

GLfloat roadMidLine=6200;


GLfloat j = 0.0f;
GLfloat HOUR = 0.0f;
GLfloat MIN = 0.0f;
GLfloat SEC = 0.0f;


GLfloat position = 0.0f;
GLfloat speed = 0.08f;



GLfloat position2 = -0.0f;
GLfloat speed2 = 0.01f;

GLfloat position3 = 0.0f;
GLfloat speed3 = 0.08f;



GLfloat carXMax = 0.06f;
GLfloat carXMin = -0.06f;
GLfloat carYMax = -0.8f;
GLfloat carYmin = -0.99f;





//GLfloat ob2xMin=x-0.15;
//GLfloat ob2xMax=x+0.15;
//GLfloat ob2yMin=y-0.15;
//GLfloat ob2yMax=y+0.15;



char buffer[10];
int score = 0;




void drawText(char ch[],int xpos, int ypos)//draw the text for score and game over
{
    int numofchar = strlen(ch);
    glLoadIdentity ();
    glRasterPos2f( xpos , ypos);
    for (int i = 0; i <= numofchar - 1; i++)
    {

    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, ch[i]);//font used here, may use other font also
    }
}




void drawTextNum(char ch[],int numtext,int xpos, int ypos)//counting the score
{
    int len;
    int k;
    k = 0;
    len = numtext - strlen (ch);
    glLoadIdentity ();
    glRasterPos2f( xpos , ypos);
    for (int i = 0; i <=numtext - 1; i++)
    {
    if ( i < len )
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,'0');
    else
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, ch[k]);
        k++;
    }

    }
}





void update(int value) {

    if(position >3)
        position = 0.0f;

    position -= speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void update3(int value) {

    if(position3 >3)
        position3 = 0.0f;

    position3 -= speed3; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}


//void update2(int value) {
//
//    if(position2 >3)
//        position2 = 0.0f;
//
//    position2 -= speed2; //position=position-speed;1-.1=.9
//
//	glutPostRedisplay();
//
//
//	glutTimerFunc(100, update2, 0);
//}



void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}




int i;

GLfloat x=-0.2f; GLfloat y=.5f;
int triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;


GLfloat obxMin=x-0.15;
GLfloat obxMax=x+0.15;
GLfloat obyMin=y-0.15;
GLfloat obyMax=y+0.15;



void object(GLfloat x, GLfloat y){

//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
//	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    GLfloat radius =.15f;



        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(0, 0, 0);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        //cout<<"ff";
        //x=x+0.8;
        //y=y+0.2;

}



void object2(GLfloat x, GLfloat y){

//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
//	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    GLfloat radius =.04f;



        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(0, 0, 0);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        //cout<<"ff";
        //x=x+0.8;
        //y=y+0.2;

}

void object3(GLfloat x, GLfloat y){

//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
//	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    GLfloat radius =.03f;



        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(0, 0, 0);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        //cout<<"ff";
        //x=x+0.8;
        //y=y+0.2;

}
void object4(GLfloat x, GLfloat y){

//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
//	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



    GLfloat radius =.02f;



        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(0, 0, 0);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        //cout<<"ff";
        //x=x+0.8;
        //y=y+0.2;

}


void roads()

{
    glBegin(GL_QUADS);
    glColor3ub(83, 82, 83);

    glVertex2f(.5,maxLength);
    glVertex2f(-.5,maxLength);
    glVertex2f(-.5,-1);
    glVertex2f(.5,-1);

    glEnd();//Roads



    GLfloat yi=-0.90;
    GLfloat yy=-1;

    for(int i=0;i<=roadMidLine;i++){


        glLineWidth(4);//Roads Middle Line//Roads Middle Line//Roads Middle Line//Roads Middle Line
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255 );
        glVertex2f(.0,yy);
        glVertex2f(.0,yi);
        glEnd();//Roads Middle Line

        yy=yi+0.1;
        yi=yi+0.15;


    }




    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-.47,maxLength);
    glVertex2f(-.47,-1);
    glEnd();// Roads Left Line

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(.47,maxLength);
    glVertex2f(.47,-1);
    glEnd();// Roads Right Line


//    //test object//test object//test object//test object//test object
//    glBegin(GL_QUADS);
//    glColor3ub(0,0,0);
//
//    glVertex2f(0.2,0.2);
//    glVertex2f(-0.2,0.2);
//    glVertex2f(-0.2,-0.2);
//    glVertex2f(0.2,-0.2);
//    glEnd();





}
void grassGreen(GLfloat x,GLfloat y)
{
    ///Left Grass 1
    glBegin(GL_POLYGON);
    glColor3ub(20, 90, 50);

    glVertex2f(x+.08,y+.2);
    glVertex2f(x+.16,y+.16);
    glVertex2f(x+.15,y+.21);
    glVertex2f(x+.21,y+.20);
    glVertex2f(x+.19,y+.26);
    glVertex2f(x+.24,y+.31);
    glVertex2f(x+.19,y+.34);
    glVertex2f(x+.22,y+.4);
    glVertex2f(x+.16,y+.39);
    glVertex2f(x+.17,y+.46);
    glVertex2f(x+.09,y+.43);
    glVertex2f(x+.06,y+.48);

    glVertex2f(x+.02,y+.43);
    glVertex2f(x-.04,y+.46);
    glVertex2f(x-.04,y+.4);
    glVertex2f(x-.1,y+.39);
    glVertex2f(x-.07,y+.33);
    glVertex2f(x-.12,y+.28);
    glVertex2f(x-.06,y+.26);
    glVertex2f(x-.09,y+.21);
    glVertex2f(x-.04,y+.23);
    glVertex2f(x-.06,y+.15);
    glVertex2f(x+0,y+.2);
    glEnd();

}



void boat(GLfloat x,GLfloat y)
{
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 0);
    glVertex2f(x-0.89f,y-0.62f);
    glVertex2f(x-0.78f,y-0.87f);
    glVertex2f(x-0.66f,y-0.62f);
    glEnd();//body white



    glBegin(GL_POLYGON);
    glColor3ub(255, 0, 0);
    glVertex2f(x-0.89f,y-0.62f);
    glVertex2f(x-0.66f,y-0.62f);
    glVertex2f(x-0.69f,y-0.35f);
    glVertex2f(x-0.86f,y-0.35f);
    glEnd();//body white



    glBegin(GL_QUADS);
    glColor3ub(235, 152, 78);
    glVertex2f(x-0.87f,y-0.62f);
    glVertex2f(x-0.68f,y-0.62f);
    glVertex2f(x-0.68f,y-0.43f);
    glVertex2f(x-0.87f,y-0.43f);
    glEnd();//body water colour



    glBegin(GL_POLYGON);
    glColor3ub(140, 215, 255);
    glVertex2f(x-0.87f,y-0.61f);
    glVertex2f(x-0.85f,y-0.57f);
    glVertex2f(x-0.71f,y-0.57f);
    glVertex2f(x-0.68f,y-0.61f);
    glEnd();//mirror



    glBegin(GL_QUADS);
    glColor3ub(9255, 109, 126);
    glVertex2f(x-0.86f,y-0.35f);
    glVertex2f(x-0.69f,y-0.35f);
    glVertex2f(x-0.72f,y-0.29f);
    glVertex2f(x-0.83f,y-0.29f);
    glEnd();//body sky



    glBegin(GL_QUADS);
    glColor3ub(62, 139, 181);
    glVertex2f(x-0.87f,y-0.50f);
    glVertex2f(x-0.81f,y-0.50f);
    glVertex2f(x-0.81f,y-0.43f);
    glVertex2f(x-0.87f,y-0.43f);
    glEnd();//sit left



    glBegin(GL_QUADS);
    glColor3ub(62, 139, 181);
    glVertex2f(x-0.75f,y-0.43f);
    glVertex2f(x-0.75f,y-0.50f);
    glVertex2f(x-0.69f,y-0.50f);
    glVertex2f(x-0.69f,y-0.43f);
    glEnd();//sit right
}



void gameover()
{
    glLineWidth(4);//GGGGGGGGGGGG
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.8,.2);
    glVertex2f(-.7,.2);
    glEnd();

    glLineWidth(4);//GGGGGGGGGGGG
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.8,.2);
    glVertex2f(-.8,0);
    glEnd();

    glLineWidth(4);//GGGGGGGGGGGG
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.8,0);
    glVertex2f(-.75,0);
    glEnd();

    glLineWidth(4);//GGGGGGGGGGGG
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.75,0);
    glVertex2f(-.75,.05);
    glEnd();

    glLineWidth(4);//GGGGGGGGGGGG
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.75,.05);
    glVertex2f(-.7,.05);
    glEnd();

    glLineWidth(4);//GGGGGGGGGGGG
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.7,.05);
    glVertex2f(-.7,-.005);
    glEnd();

    glLineWidth(4);//AAAAAAAAA
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.6,.2);
    glVertex2f(-.6,0);
    glEnd();

    glLineWidth(4);//AAAAAAAAAAAA
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.6,.2);
    glVertex2f(-.5,.2);
    glEnd();

    glLineWidth(4);//AAAAAAAAAAAAA
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.5,.2);
    glVertex2f(-.5,0);
    glEnd();

    glLineWidth(4);//AAAAAAAAAAAA
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.6,.1);
    glVertex2f(-.5,.1);
    glEnd();



    glLineWidth(4);//MMMMMMMMMMM
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.4,.2);
    glVertex2f(-.4,0);
    glEnd();

    glLineWidth(4);//MMMMMMMMMMM
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.3,.2);
    glVertex2f(-.3,0);
    glEnd();

    glLineWidth(4);//MMMMMMMMMMM
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.4,.2);
    glVertex2f(-.35,.1);
    glEnd();

     glLineWidth(4);//MMMMMMMMMMM
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.35,.1);
    glVertex2f(-.3,.2);
    glEnd();

    glLineWidth(4);//EEEEEEEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.2,.2);
    glVertex2f(-.2,0);
    glEnd();

    glLineWidth(4);//EEEEEEEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.2,.2);
    glVertex2f(-.1,.2);
    glEnd();

    glLineWidth(4);//EEEEEEEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.2,.1);
    glVertex2f(-.1,.1);
    glEnd();

    glLineWidth(4);//EEEEEEEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(-.2,0);
    glVertex2f(-.1,0);
    glEnd();






    glLineWidth(4);//OOOOOOO
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.1,.2);
    glVertex2f(.1,0);
    glEnd();

    glLineWidth(4);//OOOOOOO
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.2,.2);
    glVertex2f(.2,0);
    glEnd();

    glLineWidth(4);//EEEEEEEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.1,.2);
    glVertex2f(.2,.2);
    glEnd();

    glLineWidth(4);//EEEEEEEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.1,.0);
    glVertex2f(.2,.0);
    glEnd();

    glLineWidth(4);//OOOOOOO
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.3,.2);
    glVertex2f(.3,0);
    glEnd();

    glLineWidth(4);//OOOOOOO
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.4,.2);
    glVertex2f(.4,0);
    glEnd();

    glLineWidth(4);//OOOOOOO
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.3,.0);
    glVertex2f(.4,0);
    glEnd();

    glLineWidth(4);//EEEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.5,.2);
    glVertex2f(.5,0);
    glEnd();

    glLineWidth(4);//EEEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.5,.2);
    glVertex2f(.6,.2);
    glEnd();

    glLineWidth(4);//EEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.5,.1);
    glVertex2f(.6,.1);
    glEnd();

     glLineWidth(4);//EEEEE
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.5,.0);
    glVertex2f(.6,.0);
    glEnd();

    glLineWidth(4);//RRRRRR
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.7,.2);
    glVertex2f(.7,0);
    glEnd();


    glLineWidth(4);//RRRRRR
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.7,.2);
    glVertex2f(.8,.2);
    glEnd();


    glLineWidth(4);//RRRRRR
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.8,.2);
    glVertex2f(.8,.1);
    glEnd();

    glLineWidth(4);//RRRRRR
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.8,.1);
    glVertex2f(.7,.1);
    glEnd();

    glLineWidth(4);//RRRRRR
    glBegin(GL_LINES);
    glColor3ub(223, 255, 0);
    glVertex2f(.75,.1);
    glVertex2f(.8,.0);
    glEnd();




}


void field()
{
    //green field //green field //green field //green field //green field //green field
    glBegin(GL_QUADS);
    glColor3ub(20, 194, 8);

    glVertex2f(-1,maxFieldLength);
    glVertex2f(-1,-1);
    glVertex2f(-.5,-1);
    glVertex2f(-.5,maxFieldLength);
    glEnd();//Left Field

    glBegin(GL_QUADS);
    glColor3ub(20, 194, 8);

    glVertex2f(1,maxFieldLength);
    glVertex2f(1,-1);
    glVertex2f(.5,-1);
    glVertex2f(.5,maxFieldLength);
    glEnd();//Right Field//green field //green field //green field //green field //green field //green field






    //green grass //green grass //green grass //green grass //green grass //green grasss

    GLfloat gy=0;
    GLfloat gi=-0.5;


    for(int i=0;i<=roadMidLine;i++){


        grassGreen(0.7,gi);
        grassGreen(-0.8,gy);


        gi=gi+0.8;
        gy=gy+0.8;


    }





    //water////water////water////water////water////water////water////water////water//
    glBegin(GL_POLYGON);
    glColor3ub(90, 178, 241);

    glVertex2f(-1,maxWaterLength);
    glVertex2f(-1,maxFieldLength);
    glVertex2f(-.5,maxFieldLength);
    glVertex2f(-.5,maxWaterLength);
    glEnd();//Left Field

    glBegin(GL_POLYGON);
    glColor3ub(90, 178, 241);

    glVertex2f(1,maxWaterLength);
    glVertex2f(1,maxFieldLength);
    glVertex2f(.5,maxFieldLength);
    glVertex2f(.5,maxWaterLength);
    glEnd();//Right Field




    boat(0,maxWaterLength-1);


    boat(1.5,maxWaterLength-1.8);



    boat(0,maxWaterLength-3);

    boat(1.5,maxWaterLength-4);





    //sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand

    glBegin(GL_POLYGON);
    glColor3ub(245, 224, 169);

    glVertex2f(-1,maxSandLength);
    glVertex2f(-1,maxWaterLength);
    glVertex2f(-.5,maxWaterLength);
    glVertex2f(-.5,maxSandLength);
    glEnd();//Left //sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand

    glBegin(GL_POLYGON);
    glColor3ub(245, 224, 169);

    glVertex2f(1,maxSandLength);
    glVertex2f(1,maxWaterLength);
    glVertex2f(.5,maxWaterLength);
    glVertex2f(.5,maxSandLength);
    glEnd();//Right  /sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand//sand



}








void car()
{

    glBegin(GL_POLYGON);//Car main body
    glColor3ub(255, 0, 0);

    glVertex2f(-.06f,-.99f);
    glVertex2f(.06,-.99);
    glVertex2f(.06,-.8);
    glVertex2f(-.06,-.8);
    glEnd();




    glBegin(GL_POLYGON);//front Glass
    glColor3ub(0, 0, 0);

    glVertex2f(-.04f,-.85f);
    glVertex2f(.04,-.85);
    glVertex2f(.03,-.9);
    glVertex2f(-.03,-.9);
    glEnd();

    glBegin(GL_POLYGON);//BackGlass
    glColor3ub(0, 0, 0);

    glVertex2f(-.04f,-.97f);
    glVertex2f(.04,-.97);
    glVertex2f(.03,-.95);
    glVertex2f(-.03,-.95);
    glEnd();


     glBegin(GL_POLYGON);//Left Glass
    glColor3ub(0, 0, 0);

    glVertex2f(-.04f,-.96f);
    glVertex2f(-.03,-.94);
    glVertex2f(-.03,-.91);
    glVertex2f(-.04,-.87);
    glEnd();

    glBegin(GL_POLYGON);//Right Glass
    glColor3ub(0, 0, 0);

    glVertex2f(.04f,-.96f);
    glVertex2f(.03,-.94);
    glVertex2f(.03,-.91);
    glVertex2f(.04,-.87);
    glEnd();

    glLineWidth(2);//Left Front wheel
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.06,-.82);
    glVertex2f(-.06,-.86);
    glEnd();

    glLineWidth(2);//Right Front wheel
    glBegin(GL_LINES);
    glColor3ub(0,0,0);;
    glVertex2f(.06,-.82);
    glVertex2f(.06,-.86);
    glEnd();

    glLineWidth(2);//Left Back wheel
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.06,-.93);
    glVertex2f(-.06,-.97);
    glEnd();

    glLineWidth(2);//Right Back wheel
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.06,-.93);
    glVertex2f(.06,-.97);
    glEnd();


    glLineWidth(2);//Left Head Light
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-.055,-.8);
    glVertex2f(-.035,-.8);
    glEnd();

    glLineWidth(2);//Right Head Light
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(.055,-.8);
    glVertex2f(.035,-.8);
    glEnd();

    glLineWidth(4);//Left Side Glass
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(-.07,-.87);
    glVertex2f(-.055,-.87);
    glEnd();

    glLineWidth(4);//Right Side Glass
    glBegin(GL_LINES);
    glColor3ub(255,0,0);
    glVertex2f(.07,-.87);
    glVertex2f(.055,-.87);
    glEnd();

}











void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)





    glPushMatrix();
    glTranslatef(0,position,0);
    roads();
    field();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,position3,0);



    GLfloat x=-0.2f;
    GLfloat y=.5f;

    for(int i=0;i<=20;i++){

        object(x,y);
        object2(0.3,y);
        y=y+0.8;
        object3(0.05,y+2.5);
        object4(0.2,y+3);


    }

    glPopMatrix();



    glPushMatrix();
    glTranslatef(position2,0,0);
    car();
    glPopMatrix();
    //drawText("Score:", 0.9,0.9);
//    itoa (score, buffer, 10);
//    drawTextNum(buffer, 6, 0.1,0.1);



//left side conditions//left side conditions//left side conditions//left side conditions//left side conditions//left side conditions//left side conditions//left side conditions
    if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin) && position3<=(carYMax-obyMin) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-0.8) && position3<=(carYMax-obyMin-0.8) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-1.6) && position3<=(carYMax-obyMin-1.6) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-2.4) && position3<=(carYMax-obyMin-2.4) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-3.2) && position3<=(carYMax-obyMin-3.2) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-4.0) && position3<=(carYMax-obyMin-4.0) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-4.8) && position3<=(carYMax-obyMin-4.8) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-5.6) && position3<=(carYMax-obyMin-5.6) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-6.4) && position3<=(carYMax-obyMin-6.4) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-7.2) && position3<=(carYMax-obyMin-7.2) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-8.0) && position3<=(carYMax-obyMin-8.0) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-8.8) && position3<=(carYMax-obyMin-8.8) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-9.6) && position3<=(carYMax-obyMin-9.6) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}




	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-10.4) && position3<=(carYMax-obyMin-10.4) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-11.2) && position3<=(carYMax-obyMin-11.2) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-12.0) && position3<=(carYMax-obyMin-12.0) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-12.8) && position3<=(carYMax-obyMin-12.8) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin<=position2 && obxMax>=position2 && position3>=(carYmin-obyMin-13.6) && position3<=(carYMax-obyMin-13.6) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	//right side conditions//right side conditions//right side conditions//right side conditions//right side conditions//right side conditions



    GLfloat obxMin2=0.30-0.04;
	GLfloat obxMax2=0.30+0.04;
	GLfloat obyMin2=y-0.04;
	GLfloat obyMax2=y+0.04;


    if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-0.1) && position3<=(carYMax-obyMin-0.1) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-0.9) && position3<=(carYMax-obyMin-0.9) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}


	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-1.7) && position3<=(carYMax-obyMin-1.7) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-2.5) && position3<=(carYMax-obyMin-2.5) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-3.3) && position3<=(carYMax-obyMin-3.3) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-4.1) && position3<=(carYMax-obyMin-4.1) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-4.9) && position3<=(carYMax-obyMin-4.9) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-5.7) && position3<=(carYMax-obyMin-5.7) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

    if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-6.5) && position3<=(carYMax-obyMin-6.5) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-7.3) && position3<=(carYMax-obyMin-7.3) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-8.1) && position3<=(carYMax-obyMin-8.1) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-8.9) && position3<=(carYMax-obyMin-8.9) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-9.1) && position3<=(carYMax-obyMin-9.1) ){
                GLfloat exPos=position2;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin2<=position2 && obxMax2>=position2 && position3>=(carYmin-obyMin-9.9) && position3<=(carYMax-obyMin-9.9) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}




    GLfloat obxMin3=0.07-0.03;
	GLfloat obxMax3=0.07+0.03;
	GLfloat obyMin3=3.5-0.04;
	GLfloat obyMax3=3.5+0.04;


    if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-3.4) && position3<=(carYMax-obyMin-3.4) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

    if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-4.2) && position3<=(carYMax-obyMin-4.2) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-5.0) && position3<=(carYMax-obyMin-5.0) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-5.8) && position3<=(carYMax-obyMin-5.8) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

    if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-6.6) && position3<=(carYMax-obyMin-6.6) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



	if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-7.4) && position3<=(carYMax-obyMin-7.4) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

    if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-8.2) && position3<=(carYMax-obyMin-8.2) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-9.0) && position3<=(carYMax-obyMin-9.0) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-9.8) && position3<=(carYMax-obyMin-9.8) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

    if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-10.6) && position3<=(carYMax-obyMin-10.6) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

	if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-11.4) && position3<=(carYMax-obyMin-11.4) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

    if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-12.2) && position3<=(carYMax-obyMin-12.2) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-13.0) && position3<=(carYMax-obyMin-13.0) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-13.8) && position3<=(carYMax-obyMin-13.8) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

    if(obxMin3<=position2 && obxMax3>=position2 && position3>=(carYmin-obyMin-14.6) && position3<=(carYMax-obyMin-14.6) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}



    GLfloat obxMin4=0.15-0.02;
	GLfloat obxMax4=0.25+0.02;
	GLfloat obyMin4=4.0-0.02;
	GLfloat obyMax4=4.0+0.02;

    if(obxMin4<=position2 && obxMax4>=position2 && position3>=(carYmin-obyMin-3.89) && position3<=(carYMax-obyMin-3.89) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin4<=position2 && obxMax4>=position2 && position3>=(carYmin-obyMin-4.69) && position3<=(carYMax-obyMin-4.69) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin4<=position2 && obxMax4>=position2 && position3>=(carYmin-obyMin-5.49) && position3<=(carYMax-obyMin-5.49) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin4<=position2 && obxMax4>=position2 && position3>=(carYmin-obyMin-6.29) && position3<=(carYMax-obyMin-6.29) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}

	 if(obxMin4<=position2 && obxMax4>=position2 && position3>=(carYmin-obyMin-7.09) && position3<=(carYMax-obyMin-7.09) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin4<=position2 && obxMax4>=position2 && position3>=(carYmin-obyMin-7.89) && position3<=(carYMax-obyMin-7.89) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin4<=position2 && obxMax4>=position2 && position3>=(carYmin-obyMin-8.69) && position3<=(carYMax-obyMin-8.69) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}
	if(obxMin4<=position2 && obxMax4>=position2 && position3>=(carYmin-obyMin-9.49) && position3<=(carYMax-obyMin-9.49) ){
                GLfloat exPos=position2;
                //cout<<obxMin<<endl<<position2<<endl<<obxMax<<endl<<position3<<endl;
                gameover();
                speed=0.0;
                speed3=0.0;
                //position2=exPos;

	}







	glFlush();  // Render now
}



void SpecialInput(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_LEFT:
            if(position2 <-0.43f){
                    position2 = -0.43f;
                    glutPostRedisplay();
             }
            speed2 = 0.02f;
            position2=position2-speed2;

            glutPostRedisplay();



            break;

        case GLUT_KEY_RIGHT:
            if(position2 >0.43f){
                    position2 = 0.43f;
                    glutPostRedisplay();
             }
            speed2 = 0.02f;
            position2=position2+speed2;
            glutPostRedisplay();
            break;

    }

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(400, 400);                 // Initialize GLUT
	glutCreateWindow("Mini Car Game"); // Create a window with the given title
	   // Set the window's initial width & height
	glutDisplayFunc(display);

    glutIdleFunc(Idle);

    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update3, 0);
    //glutTimerFunc(100, update2, 0); // Register display callback handler for window re-paint
	//glutKeyboardFunc(handleKeypress);

	glutSpecialFunc(SpecialInput);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}





