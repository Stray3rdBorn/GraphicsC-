#include <iostream>
#include <graphics.h>
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    //HI
    setcolor(13);
    line(50,50,50,100);
    line(75,50,75,100);
    line(50,75,75,75);

    //I
    line(90,50, 90, 100);

    //I
    line(125,50, 125, 100);

    //AM
    line (175,50, 155, 100);
    line (165, 75, 185, 75);
    line (175,50, 195, 100);

    line (200, 50, 200, 100);
    line (230,50,230,100);
    line (200, 50,215,75);
    line (215,75,230,50);

    //SIAM
    line (265, 75, 265, 50);
    line (285, 75, 285, 100);
    line (265,75,285,75);
    line (265, 50, 285,50);
    line (265,100,285,100);

    line (300,50, 300, 100);

    line (335,50, 315, 100);
    line (335,50, 355, 100);
    line (325, 75, 345, 75);

    line (360, 50, 360, 100);
    line (390,50,390,100);
    line (360, 50,375,75);
    line (375,75,390,50);
    getch();
    closegraph ();
}
