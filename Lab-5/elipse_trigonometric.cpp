#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void plot4pixels(int,int,int,int);

void ellipse_Trigonometric()
{
    int x,y,x1,y1,a,b,h,k,theta;
    double p=3.14159/180;
    h=200;
    k=200;
    a=150;
    b=100;
    setcolor(8);
    for(theta=0; theta<=90; theta++)
    {
        x1=a*cos(theta*p);
        y1=b*sin(theta*p);
        x=int(x1+0.5);
        y=int(y1+0.5);
        plot4pixels(x,y,h,k);
    }
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    ellipse_Trigonometric();
    getch();
}
void plot4pixels(int x,int y,int h,int k)
{
    putpixel(x+h,y+k,8);
    putpixel(x+h,-y+k,8);
    putpixel(-x+h,y+k,8);
    putpixel(-x+h,-y+k,8);
}
