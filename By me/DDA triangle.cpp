#include <graphics.h>
#include<stdio.h>
#include<conio.h>

main()
{
    int gd= DETECT, gm;
    int x1, y1, x2, y2, x3, y3;

    initgraph(&gd, &gm, "DDA Line Drawing Algorithm");

    line(100, 270, 200, 50);
    line(100, 270, 300, 270);
    line(300, 270, 200, 50);

    getch();
    closegraph();
}
