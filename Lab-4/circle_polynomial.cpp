#include<graphics.h>
#include<bits/stdc++.h>
#include<math.h>
void plot8pixel(int,int,int,int);

void circle_polynomial()
{
    int x,y,r,h,k;
    h=200;
    k=200;
    r=100;
    x=0;
    y=r;

    while(x<=y)
    {
        plot8pixel(x,y,h,k);
        x++;
        y=sqrt((r*r)-(x*x));
    }
    setcolor(8);
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);

    circle_polynomial();

    getch();
    closegraph();
}
void plot8pixel(int x,int y,int h,int k)
{
    putpixel(x+h,y+k,8);
    putpixel(x+h,-y+k,8);
    putpixel(-x+h,y+k,8);
    putpixel(-x+h,-y+k,8);
    putpixel(y+h,x+k,8);
    putpixel(y+h,-x+k,8);
    putpixel(-y+h,x+k,8);
    putpixel(-y+h,-x+k,8);
}
