#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;

void drawB()
{
    //Drawing B
    int x = 100;
    int y = 150;
    int start_angle = 270;
    int end_angle = 90;
    int radius = 100;
    line(100, 50, 100, 450);
    arc(x, y, start_angle, end_angle, radius);
    arc(x, y+200, start_angle, end_angle, radius);
}

void drawK()
{
    line(100,100,200,100);
    line(200,100,200,300);
    line(200,100,120,200);
    line(120,200,200,300);
    line(200,100,278,180);
    circle(255,180,20);
}

void drawKh()
{
    arc(350,100,180,360,30);
    arc(380,158,260,90,60);
    line(370,217,500,280);
    line(500,100,500,280);
    line(500,100,550,100);
}

void drawBDFlag()
{
    //flag box
    setbkcolor(WHITE);
    setcolor(WHITE);
    rectangle(150,40,450,180);
    //green part
    setfillstyle(1,GREEN);
    floodfill(160,50,WHITE);
    setcolor(WHITE);
    rectangle(138,35,150,450);
    setfillstyle(1,WHITE);
    floodfill(140,40,WHITE);
    setcolor(WHITE);
    bar(130,450,160,460);
    setcolor(WHITE);
    circle(300,110,55);
    setfillstyle(1,RED);
    floodfill(320,120,WHITE);

}

void drawShahidMinar();

void drawSmilingFace()
{
    circle(200,200,100);
    arc(200,200,220,320,60);
    ellipse(160,180,0,360,15,30);
    ellipse(230,180,0,360,15,30);
}

void drawSritiShoudh()
{
    line(100,400,500,400);
    line(400,100,450,400);
    line(400,100,400,400);
    line(360,130,400,200);
    line(360,130,360,400);
    line(320,160,360,250);
    line(360,160,320,400);
    line(320,160,320,250);
//    line(280,160,280,400);
//     line(320,160,360,250);
//    line(320,160,320,400);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    //draw-B
    drawB();

    //draw-K & Kh
    //drawK();
    //drawKh();

    //Smiling Face
    //drawSmilingFace();

    //BD-Flag
    //drawBDFlag();

    //Shahid-Minar
    //drawShahidMinar();

    //Sriti Shoudh
    //drawSritiShoudh();



    getch();
    closegraph();

    return 0;
}

void drawShahidMinar()
{
    line(0,444,640,444);
    line(0,442,640,442);
    line(0,440,640,440);
    line(0,438,640,438);
    line(0,436,640,436);
    line(20,434,620,434);
    line(20,432,620,432);
    line(20,430,620,430);
    line(20,428,620,428);
    line(20,426,620,426);
    line(40,424,600,424);
    line(40,422,600,422);
    line(40,420,600,420);
    line(40,418,600,418);
    line(40,416,600,416);
    //First
    line(110,180,110,416);
    line(115,185,115,416);
    line(160,180,160,416);
    line(155,185,155,416);
    line(110,180,160,180);
    line(115,185,155,185);
   //second
    line(175,150,175,416);
    line(180,155,180,416);
    line(225,150,225,416);
    line(220,155,220,416);
    line(175,150,225,150);
    line(180,155,220,155);
    //third
    line(260,150,260,416);
    line(265,150,265,416);
    line(295,150,295,416);
    line(305,150,305,416);
    line(315,150,315,416);
    line(350,150,350,416);
    line(355,150,355,416);
    //third-H
    line(260,150,305,80);
    line(265,150,310,80);
    line(295,150,340,80);
    line(305,150,350,80);
    line(315,150,360,80);
    line(350,150,395,80);
    line(355,150,400,80);
    line(305,80,400,80);
   //fourth
    line(385,150,385,416);
    line(390,155,390,416);
    line(435,150,435,416);
    line(430,155,430,416);
    line(385,150,435,150);
    line(390,155,430,155);
    //first
    line(450,180,450,416);
    line(455,185,455,416);
    line(495,185,495,416);
    line(500,180,500,416);
    line(450,180,500,180);
    line(455,185,495,185);
    /*Circle*/
    circle(307,270,70);
    circle(307,270,69);
    circle(307,270,68);
}



