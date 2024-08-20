#include<iostream>
 #include<graphics.h>

 int main()
 {
       int gd=DETECT,gm;
       initgraph(&gd,&gm,"");
       initwindow(1000,800,"line");

       for(int i=0; i<=1000; i=i + 10)
       {
             setcolor(WHITE);
             line(0, 500, 1000, 500);

             line(50+i, 310, 10+i, 400);
             line(50+i, 310, 90+i, 400);
             line(10+i, 400, 90+i, 400);

             setfillstyle(1, RED);
             floodfill(51+i, 320, WHITE);

             line(0+i,400,0+i,490);
             line(0+i,400,100+i,400);
             line(0+i,490,100+i,490);
             line(100+i,400,100+i,490);

             setfillstyle(3, GREEN);
             floodfill(11+i, 410, WHITE);

             delay(100);
             cleardevice();


       }
 }
