
#include<graphics.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void arc_trigonometric()
{
    int x,y,x1,y1,r,h,k,theta,theta1=270,theta2=270+180;
    float n=3.14159/180;
    h=200;k=200;r=100;
    for(theta=theta1; theta<=theta2; theta++)
    {
        x1=r*cos(theta*n);
        y1=r*sin(theta*n);
        x=int(x1+0.5);
        y=int(y1+0.5);
        putpixel(x+h,y+k,WHITE);
    }
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    arc_trigonometric();
    getch();
    closegraph();
}


