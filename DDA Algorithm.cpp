#include<iostream>
#include<cmath>
#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    float x1 ,x2, y1, y2, step, x, y;
    int gd=DETECT, gm;
    initgraph(&gd,&gm," ");

    cout<<("X1: ");
    cin >> x1;
    cout<<("Y1: ");
    cin >> y1;
    cout<<("X2: ");
    cin >> x2;
    cout<<("Y2: ");
    cin >> y2;

    int dx=abs(x2-x1);
    int dy=abs(y2-y1);

    if(dx>dy)
        step=dx;
    else
        step=dy;
    cout << "Step: " << step << endl;

    float xin,yin;
    xin=dx/step;
    yin=dy/step;
    cout << xin <<" " << yin << endl;

    x=x1;
    y=y1;

    for(int i=0; i<step; i++)
    {
        putpixel(x,y,LIGHTGREEN);
        x=x+xin;
        y=y+yin;
        cout << x <<" " << y << endl;
        delay(200);
    }
    getch();
    closegraph();
    return 0;
}
