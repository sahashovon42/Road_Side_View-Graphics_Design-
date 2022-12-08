#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>


float p=0;
float q=0;
float x,y,i;
float PI=3.1416;


void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  //glOrtho(1.0, 15.0, 1.0, 15.0, -1.0, 15.0);
  gluOrtho2D(0,100,0,100); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);



    //Circle_Algo
    float x, y;
    int i;
    GLfloat radius;
    int triangleAmount =60;
    GLfloat twicePi = 2.0 * PI;
    //###############################//


    //Motion_Algo
    if (p<101)
    p=p+0.005;
    else
    p=-100;



//##################################################################//


    //sky
    glutPostRedisplay();
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0, 70);
    glVertex2f(100, 70);
    glVertex2f(100, 100);
    glVertex2f(0, 100);
    glEnd();






//##################################################################//
    //sun

    // 1
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 0.0);
        x=20; y=92; radius =4;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    // 2
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, .8);
        x=20; y=92; radius =3.7;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();





//##################################################################//

     //CLOUD_N0_1



     //1
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=41; y=88; radius =3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


    //2
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=44; y=90; radius =3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


    //3
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=47; y=90; radius =3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


    //4
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=49; y=88; radius =03;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


    //5
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=46; y=87; radius =03;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    //6
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=44; y=87; radius =03;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();








//##################################################################//


    //CLOUD_N0_2



     //1
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=61; y=88; radius =3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


    //2
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=64; y=90; radius =3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


    //3
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=67; y=90; radius =3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


    //4
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=70; y=90; radius =03;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();




    //5
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=72; y=88; radius =03;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    //6
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=69; y=87; radius =03;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();




    //7
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=66; y=87; radius =03;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    //8
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 1.0);
        x=64; y=87; radius =03;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();




//##################################################################//




    //Ground

    glutPostRedisplay();
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0, 30);
    glVertex2f(100, 30);
    glVertex2f(100, 70);
    glVertex2f(0, 70);
    glEnd();


//##################################################################//

    //Pond

    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0, 1.0, .8);
        x=10; y=50; radius =13;
        twicePi = 12 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


//##################################################################//





    //Tree

    //body
    glutPostRedisplay();
    glColor3f(1.0, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(23, 50);
    glVertex2f(25, 50);
    glVertex2f(25, 60);
    glVertex2f(23, 60);
    glEnd();



    //leap

    //1
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0, 0.6, 0.0);
        x=22; y=63; radius =04;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    //2
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0, 0.6, 0.0);
        x=26; y=63; radius =04;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    //3
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0, 0.6, 0.0);
        x=23; y=68; radius =03.2;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    //4
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0, 0.6, 0.0);
        x=25; y=68; radius =03.2;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    //5
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0, 0.6, 0.0);
        x=24; y=72; radius =02.5;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();

//##################################################################//



    //House


    //front

    glutPostRedisplay();
    glColor4f(0.8, 0.9, 1.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(50, 54);
    glVertex2f(80, 54);
    glVertex2f(80, 60);
    glVertex2f(50, 60);
    glEnd();


    //back

    glutPostRedisplay();
    glColor3f(1.0, .9, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(50, 60);
    glVertex2f(80, 60);
    glVertex2f(76, 67);
    glVertex2f(55, 67);
    glEnd();


    //main_house_1

    glutPostRedisplay();
    glColor3f(0.5, .5, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(55, 60);
    glVertex2f(65, 60);
    glVertex2f(65, 70);
    glVertex2f(55, 70);
    glEnd();



    //main_house_2

    glutPostRedisplay();
    glColor3f(0.0, .1, 1.0);//blue
    glBegin(GL_POLYGON);
    glVertex2f(65, 60);
    glVertex2f(75, 60);
    glVertex2f(75, 70);
    glVertex2f(65, 70);
    glEnd();



    //main_house_3

    glutPostRedisplay();
    glColor3f(0.5, .5, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(55, 70);
    glVertex2f(65, 70);
    glVertex2f(60, 78);
    glEnd();



    //main_house_4(chal)

    glutPostRedisplay();
    glColor3f(1., .5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(65, 70);
    glVertex2f(75, 70);
    glVertex2f(70, 78);
    glVertex2f(60, 78);
    glEnd();



    //dorja

    glutPostRedisplay();
    glColor3f(0.5, .1, .0);
    glBegin(GL_POLYGON);
    glVertex2f(58.5, 60);
    glVertex2f(61.5, 60);
    glVertex2f(61.5, 65);
    glVertex2f(58.5, 65);
    glEnd();


    //Janala_box
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(68, 63);
    glVertex2f(72, 63);
    glVertex2f(72, 67);
    glVertex2f(68, 67);
    glEnd();


    //janala_line
    glColor3f(1.0,0.0,0.0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2i(68, 65);
    glVertex2i(72, 65);


    glVertex2i(70, 67);
    glVertex2i(70, 63);
    glEnd();

    //dorja_line
    glColor3f(1.0,1.0,1.0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2i(60.5, 60);
    glVertex2i(60.5, 64);
    glEnd();





    //front_dorja_box

    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(60, 54);
    glVertex2f(70, 54);
    glVertex2f(70, 60);
    glVertex2f(60, 60);
    glEnd();


    //front_dorja_line
    glColor3f(0.0,0.0,0.0);
    glLineWidth(1);
    glBegin(GL_LINES);

    //+_line
    glVertex2i(65, 54);
    glVertex2i(65, 60);


    glVertex2i(60, 57);
    glVertex2i(70, 57);

    //square_line_box


    glVertex2i(60, 54);
    glVertex2i(70, 54);

    glVertex2i(70, 54);
    glVertex2i(70, 60);

    glVertex2i(70, 60);
    glVertex2i(60, 60);


    glVertex2i(60, 60);
    glVertex2i(60, 54);

    glEnd();


    //#################################################################//



    //Traffic_Light

    //stand
    glutPostRedisplay();
    glColor3f(0.1, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(92, 30);
    glVertex2f(94, 30);
    glVertex2f(94, 50);
    glVertex2f(92, 50);
    glEnd();

    //light_box
    glutPostRedisplay();
    glColor3f(0.1, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(90, 50);
    glVertex2f(96, 50);
    glVertex2f(96, 65);
    glVertex2f(90, 65);
    glEnd();



    //red_light

     glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 0.0, 0.0);
        x=93; y=62.5; radius =2;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


    //yellow_light

     glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0, 1.0, 0.0);
        x=93; y=58; radius =2;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();


    //green_light

     glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0, 1.0, 0.0);
        x=93; y=53; radius =2;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    //################################################################//






    //Road


    //Main_road
    glutPostRedisplay();
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(00, 00);
    glVertex2f(100, 00);
    glVertex2f(100, 30);
    glVertex2f(00, 30);
    glEnd();


    //road_line

    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(00, 28);
    glVertex2f(100, 28);
    glVertex2f(100, 30);
    glVertex2f(00, 30);
    glEnd();

    //##########################//


    //road_line_middle_1
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(00, 14);
    glVertex2f(15, 14);
    glVertex2f(15, 16);
    glVertex2f(00, 16);
    glEnd();




    //road_line_middle_2
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(20, 14);
    glVertex2f(35, 14);
    glVertex2f(35, 16);
    glVertex2f(20, 16);
    glEnd();



    //road_line_middle_3
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(40, 14);
    glVertex2f(55, 14);
    glVertex2f(55, 16);
    glVertex2f(40, 16);
    glEnd();




    //road_line_middle_4
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(60, 14);
    glVertex2f(75, 14);
    glVertex2f(75, 16);
    glVertex2f(60, 16);
    glEnd();



    //road_line_middle_5
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(80, 14);
    glVertex2f(95, 14);
    glVertex2f(95, 16);
    glVertex2f(80, 16);
    glEnd();





    //####################################################################################//

//################################################################################################################################//

    //###################################################################################//




    //BUS's

    //bus_no_1

    //down_part
    glutPostRedisplay();
    glColor3f(0.1, 0.5, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(p+20, 12);
    glVertex2f(p+55, 12);
    glVertex2f(p+55, 25);
    glVertex2f(p+20, 25);
    glEnd();



    //up_part
    glutPostRedisplay();
    glColor3f(0.1, 0.5, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(p+20, 25);
    glVertex2f(p+55, 25);
    glVertex2f(p+52, 35);
    glVertex2f(p+20, 35);
    glEnd();


    //Glass_1
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(p+22, 25);
    glVertex2f(p+28, 25);
    glVertex2f(p+28, 33);
    glVertex2f(p+22, 33);
    glEnd();




    //Glass_2
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(p+32, 25);
    glVertex2f(p+40, 25);
    glVertex2f(p+40, 33);
    glVertex2f(p+32, 33);
    glEnd();


    //up_part_Glass_3
    glutPostRedisplay();
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(p+44, 25);
    glVertex2f(p+54, 25);
    glVertex2f(p+51, 33);
    glVertex2f(p+44, 33);
    glEnd();



    //chaka_1_1st_bus

     glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0, 0.0, 0.2);
        x=p+30; y=12; radius =3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();

    //chaka_2_1st_bus

     glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0, 0.0, 0.2);
        x=p+45; y=12; radius =3;
        twicePi = 2.0 * PI;
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }
    glEnd();



    //##################################################################################################################################//

    //Bus_Name_DIU

    glColor3f(0.0,1.0,0.0);
    glLineWidth(5);
    glBegin(GL_LINES);

    //D


    glVertex2i(p+30, 16);
    glVertex2i(p+30, 22);




    glVertex2i(p+30, 22);
    glVertex2i(p+32, 22);




    glVertex2i(p+32, 22);
    glVertex2i(p+34, 20);




    glVertex2i(p+34, 18);
    glVertex2i(p+34, 20);



    glVertex2i(p+32, 16);
    glVertex2i(p+34, 18);



    glVertex2i(p+30, 16);
    glVertex2i(p+32, 16);



    //####//



    // I

    glVertex2i(p+38, 16);
    glVertex2i(p+38, 22);



    glVertex2i(p+36, 22);
    glVertex2i(p+40, 22);



    glVertex2i(p+36, 16);
    glVertex2i(p+40, 16);


    //#######//



    //U

    glVertex2i(p+43, 17);
    glVertex2i(p+43, 22);



    glVertex2i(p+48, 17);
    glVertex2i(p+48, 22);



    glVertex2i(p+44, 16);
    glVertex2i(p+43, 17);


    glVertex2i(p+47, 16);
    glVertex2i(p+48, 17);


    glVertex2i(p+44, 16);
    glVertex2i(p+47, 16);



    glEnd();



glutSwapBuffers();
}








int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(800,800);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
