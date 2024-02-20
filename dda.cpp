#include<GL/glut.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
float x1,x2,Y1,y2;
void display()
{
float dy,dx,length,x,y,k,Xin,Yin;
dx=x2-x1;
dy=y2-Y1;
if(abs(dx)> abs(dy))
{
length = abs(dx);
}
else
length = abs(dy);
Xin = dx/length;
Yin = dy/length;
x=x1;
y=Y1;
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
for(k=1 ;k<=length;k++)
{
x= x + Xin;
y= y + Yin;
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();

}
glFlush();
}
void init(void)
{
glClearColor(1.1,1.1,1.1,1.1);
glPointSize(10.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-100,100,-100,100);
}
int main(int argc, char** argv)
{
cout<<"Enter the value of x1 :";
cin>>x1;
cout<<"Enter the value of Y1 : ";
cin>>Y1;
cout<<"Enter the value of x2 : ";
cin>>x2;
cout<<"Enter the value of y2 : ";
cin>>y2;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100,100);
glutCreateWindow ("DDA Line Algo");
init();

glutDisplayFunc(display);
glutMainLoop();
return 0;
}
