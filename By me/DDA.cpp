#include <graphics.h>
#include<stdio.h>
#include<conio.h>

void ddaline(int, int, int, int);

main()
{
    int gd= DETECT, gm;
    int x1, y1, x2, y2;

    initgraph(&gd, &gm, "DDA Line Drawing Algorithm");

    printf("Enter the value of x1 & y1: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter the value of x2 & y2: ");
    scanf("%d%d", &x2, &y2);

    ddaline(x1, y1);
    ddaline(x2, y2);

    getch();
    closegraph();
}
void ddaline(int x1, int y1)
{
    int dx, dy, m, i;

    m = (y2-y1)/(x2-x1);

    for(i=x1; i<x2; i++)
    {
        if(m <= 1)
    {
        dx = 1;
        dy = m*dx;
    }
    else
    {
        dy = 1;
        dx = dy/m;
    }
    x1 = x1+dx;
    y1 = y1+dy;

    putpixel(x1, y1, GREEN);
    delay(10);
    }
}

