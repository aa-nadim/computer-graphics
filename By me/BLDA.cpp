#include <graphics.h>
#include<stdio.h>
#include<conio.h>

void brline(int, int, int, int);

main()
{
    int gd= DETECT, gm;
    int x1, y1, x2, y2;

    initgraph(&gd, &gm, "Bresenham's Line Drawing Algorithm");

    printf("Enter the value of x1 & y1: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the value of x2 & y2: ");
    scanf("%d%d", &x2, &y2);

    brline(x1, y1, x2, y2);
    getch();
    closegraph();
}
void brline(int x1, int y1, int x2, int y2)
{
    int dx, dy, ds, dt, di;

    dx = x2 - x1;
    dy = y2 - y1;
    di = 2*dy - dx;
    ds = 2*dy;
    dt = 2*(dy - dx);


    while(x1<x2)
    {
        x1++;
        if(di<0)
        {
            di = di+ds;
        }
        else
        {
            y1++;
            di = di+dt;
        }
        putpixel(x1, y1, GREEN);
        delay(10);
    }
}
