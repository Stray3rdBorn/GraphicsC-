#include <iostream>
#include<graphics.h>
using namespace std;

void drawEmoji();
void drawMovingBoats();
void drawFishTank();
void drawCar();

int main()
{
    int c;
    cout << "= = = = = = = = = = = = = = = = = = =\n";
    cout << "=  1. Emoji                         =\n";
    cout << "=  2. Moving Boats                  =\n";
    cout << "=  3. Fish Tank                     =\n";
    cout << "=  4. Moving car                    =\n";
    cout << "=  0. Exit the program              =\n";
    cout << "= = = = = = = = = = = = = = = = = = =\n";

    //while(1)
    {
        cout << "Enter your choice: ";
        cin >> c;
        switch(c)
        {
        case 1:
        {
            drawEmoji();
            break;
        }
        case 2:
        {
            drawMovingBoats();
            break;
        }
        case 3:
        {
            drawFishTank();
            break;
        }
        case 4:
            {
                drawCar();
                break;
            }
        case 0:
        {
            exit(0);
            break;
        }
        default:
        {
            cout << "Invalid choice. Please try again!" << endl;
        }
        }
    }
}

void drawEmoji()
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
void drawMovingBoats()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    initwindow(1000,700,"line");

    for(int i=0; i<=1000; i=i + 10)
    {
        setcolor(WHITE);
        line(0, 460, 1000, 460);

        line(150+i, 310, 110+i, 400);
        line(150+i, 310, 190+i, 400);
        line(110+i, 400, 190+i, 400);

        setfillstyle(1, RED);
        floodfill(151+i, 320, WHITE);


        line(0+i,400,300+i,400);

        line(0+i,400,80+i,460);

        line(220+i,460,300+i,400);

        line(80+i,460,220+i,460);

        setfillstyle(3, GREEN);
        floodfill(11+i, 401, WHITE);

        setcolor(WHITE);
        line(0, 620, 1000, 620);

        line(1150-i, 460, 1110-i, 570);
        line(1150-i, 460, 1190-i, 570);
        line(1110-i, 570, 1190-i, 570);

        setfillstyle(1, RED);
        floodfill(1151-i, 470, WHITE);


        line(1000-i,570,1300-i,570);

        line(1000-i,570,1080-i,620);

        line(1220-i,620,1300-i,570);

        line(1080-i,620,1220-i,620);

        setfillstyle(3, BLUE);
        floodfill(1011-i, 571, WHITE);
        delay(50);
        cleardevice();

        setcolor(WHITE);
        circle(470,70,50);
        setfillstyle(1, YELLOW);
        floodfill(471, 71, WHITE);


    }
}
void drawFishTank()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    initwindow(1500,800,"fish");

    for(int i=0; i<=700; i=i+10)
    {
        //babyfish1
        line(150+i,350,190+i,390);
        line(150+i,350,90+i,410);
        line(90+i,360,150+i,430);
        line(190+i,390,150+i,430);
        line(90+i,410,90+i,360);
        circle(170+i,390,5);

        //babyfish2
        line(150+i,450,190+i,490);
        line(150+i,450,90+i,510);
        line(90+i,460,150+i,530);
        line(190+i,490,150+i,530);
        line(90+i,510,90+i,460);
        circle(170+i,490,5);

        circle(60,195-i,3);
        circle(50,205-i,6);
        circle(55,180-i,8);

        delay(50);
        cleardevice();

        //fish tank body
        line(30, 60, 30, 700);
        line(1350, 60, 1350, 700);
        line(30, 700, 1350, 700);
        line(30, 60, 1350, 60);

        //rocks
        ellipse(90,680,0, 360, 60,20);
        ellipse(200,680,0, 360, 50,20);
        ellipse(300,680,0, 360, 50,20);
        ellipse(400,680,0, 360, 50,20);
        ellipse(500,680,0, 360, 50,20);
        ellipse(600,680,0, 360, 50,20);
        ellipse(700,680,0, 360, 50,20);
        ellipse(800,680,0, 360, 50,20);
        ellipse(900,680,0, 360, 50,20);
        ellipse(1000,680,0, 360, 50,20);
        ellipse(1100,680,0, 360, 50,20);
        ellipse(1200,680,0, 360, 50,20);
        ellipse(1300,680,0, 360, 50,20);
        ellipse(90,640,0, 360, 60,20);
        ellipse(1250,640,0, 360, 100,20);
        ellipse(1050,640,0, 360, 100,20);
        ellipse(850,640,0, 360, 100,20);
        ellipse(650,640,0, 360, 100,20);
        ellipse(450,640,0, 360, 100,20);
        ellipse(250,640,0, 360, 100,20);

        //fishmommy
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
    }
}
void drawCar()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    initwindow(600,600,"car");
    int i;
    for(i=1; i<600; i=i+5)
    {
        line(100+i,350,100+i,370);
        line(100+i,350,110+i,350);
        line(110+i,350,130+i,325);
        line(130+i,325,190+i,325);
        line(190+i,325,210+i,350);
        line(210+i,350,240+i,350);
        line(240+i,350,240+i,370);

        //adjust wheels
        line(100+i,370,110+i,370);
        line(130+i,370,210+i,370);
        line(230+i,370,240+i,370);

        //left window
        line(120+i,350,135+i,330);
        line(120+i,350,160+i,350);
        line(160+i,350,160+i,330);
        line(160+i,330,135+i,330);

        //right window
        line(165+i,350,165+i,330);
        line(188+i,330,205+i,350);
        line(165+i,350,205+i,350);
        line(165+i,330,188+i,330);

        circle(120+i,370,10);
        circle(220+i,370,10);


        delay(50);
        cleardevice();

        line(1,150,800,150);
        line(1,380,800,380);

        //1st mountain
        setcolor(WHITE);
        line(100,70,1,150);
        line(100,70,200,150);
        setfillstyle(1, GREEN);
        floodfill(110, 80, WHITE);

        //2nd mountain
        line(300,70,200,150);
        line(300,70,400,150);
         setfillstyle(1, GREEN);
        floodfill(310, 80, WHITE);

        //3rd mountain
        line(500,70,400,150);
        line(500,70,600,150);
         setfillstyle(1, GREEN);
        floodfill(510, 80, WHITE);

        //sun
        ellipse(200,130,20,160,50,50);
         setfillstyle(1, YELLOW);
        floodfill(201, 131, WHITE);
    }
}
