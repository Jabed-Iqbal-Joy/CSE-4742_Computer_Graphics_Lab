#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void plot4pixels(int,int,int,int);

void ellipse_polynomial()
{
    int x,y,r,i,h,k,a,b;
    h=200;
    k=200;
    a=150;
    b=100;
    x=0;
    y=b;
    while(x<a)
    {
        plot4pixels(x,y,h,k);
        x++;
        y=b*sqrt(((a*a)-(x*x*1.0))/(a*a));
    }
    plot4pixels(x,y,h,k);
    setcolor(8);
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    ellipse_polynomial();
    getch();
}
void plot4pixels(int x,int y,int h,int k)
{
    putpixel(x+h,y+k,8);
    putpixel(x+h,-y+k,8);
    putpixel(-x+h,y+k,8);
    putpixel(-x+h,-y+k,8);
}
