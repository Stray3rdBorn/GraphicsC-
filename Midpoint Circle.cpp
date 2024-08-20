#include <graphics.h>
#include <stdio.h>

void plotPoints(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void drawCircle(int xc, int yc, int r) {
    int x = 0, y = r;
    int d = 1 - r;

    plotPoints(xc, yc, x, y);

    while (x < y) {
        x++;
        if (d < 0) {
            d += 2 * x + 1;
        } else {
            y--;
            d += 2 * (x - y) + 1;
        }
        plotPoints(xc, yc, x, y);
    }
}

int main() {
    int gd = DETECT, gm;
    int xc, yc, r;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    printf("Enter the center of the circle (xc, yc): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    setcolor(WHITE);
    outtextxy(100,50,"MD Wahidul Islam 8021");

    drawCircle(xc, yc, r);

    getch();
    closegraph();
    return 0;
}
