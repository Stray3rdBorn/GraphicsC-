#include <graphics.h>

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(BLACK);
    cleardevice();

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(320, 180, 180, 50);


    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    bar(310, 200, 330, 400);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    fillellipse(320, 400, 20, 20);

    getch();
    closegraph();
    return 0;
}
