#include<iostream>
#include<graphics.h>

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    circle(300, 240, 110);
    setfillstyle(1, WHITE);
    floodfill(301, 241, WHITE);

    setcolor(BLACK);
    //line(235, 190, 285, 190);
    //line(235, 189, 285, 189);
    ellipse(260, 190, 0, 180, 27, 5);
    ellipse(260, 189, 0, 180, 27, 5);
    circle(260, 220, 25);
    setcolor(BLACK);
    circle(260, 220, 10);
    setfillstyle(11, 10);
    floodfill(261, 221, BLACK);

    setcolor(BLACK);
    //line(315, 190, 365, 190);
    //line(315, 189, 365, 189);
    ellipse(340, 190, 0, 180, 27, 5);
    ellipse(340, 189, 0, 180, 27, 5);
    circle(340, 220, 25);
    setcolor(BLACK);
    circle(340, 220, 10);
    setfillstyle(11, 10);
    floodfill(341, 221, BLACK);

    setcolor(1);
    circle(300, 260, 5);
    setfillstyle(1, 1);
    floodfill(301, 261, 1);

    setcolor(0);
    line(250, 279, 350, 279);
    ellipse(300, 280, 180, 360, 50, 30);
    setfillstyle(8, 4);
    floodfill(251, 280, 0);
    getch();
    closegraph();
}
