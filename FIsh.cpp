#include<iostream>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    initwindow(600,600,"fish");
    setcolor(WHITE);
    ellipse(200,200,0,360,130,50);
    setfillstyle(1, BLUE);
    floodfill(201, 201, WHITE);

    setcolor(WHITE);
    line(325,185,390,155);
    line(390,155,360,200);
    line(360,200,395,235);
    line(395,235,325,210);
    setfillstyle(1, RED);
    floodfill(330, 190, WHITE);

    setcolor(WHITE);
    ellipse(100,200,315,45,50,60);
    setfillstyle(1, YELLOW);
    floodfill(101, 201, WHITE);

    setcolor(WHITE);
    circle(120,195,10);
    setfillstyle(1, RED);
    floodfill(121, 196, WHITE);

    circle(60,195,3);
    circle(50,205,6);
    circle(55,180,8);

    setcolor(WHITE);
    line(170,150,260,90);
    line(260,90,220,150);
    setfillstyle(1, RED);
    floodfill(200, 140, WHITE);

    setcolor(WHITE);
    line(170,245,260,290);
    line(260,290,230,245);
    setfillstyle(1, RED);
    floodfill(200, 255, WHITE);
    getch();
    closegraph();
    return 0;
}
