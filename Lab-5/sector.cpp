#include<graphics.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void drawLineDDA(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    int length = sqrt(dx*dx + dy*dy);

    float xinc = dx / (float)length;
    float yinc = dy / (float)length;

    float x = x1;
    float y = y1;

    for (int i = 0; i <= length; i++)
    {
        putpixel((int)x, (int)y, WHITE);
        x += xinc;
        y += yinc;
    }
}

void sector_trigonometric()
{
    int x,y,x1,y1,r,h,k,theta,theta1=220,theta2=320;
    float n=3.14159/180;
    h=200;k=200;r=100;
    for(theta=theta1; theta<=theta2; theta++)
    {
        x1=r*cos(theta*n);
        y1=r*sin(theta*n);
        x=int(x1+0.5);
        y=int(y1+0.5);
        putpixel(x+h,y+k, WHITE);
        if(theta==theta1 || theta==theta2) {
            drawLineDDA(h,k,x+h,y+k);
        }
    }
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    sector_trigonometric();
    getch();
    closegraph();
}


