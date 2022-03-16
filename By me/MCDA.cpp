#include <graphics.h>
#include<stdio.h>
#include<conio.h>

void drawCircle(int, int, int, int);
main()
{
    int gd= DETECT, gm;
    int x, y, d, r, xc, yc;

    initgraph(&gd, &gm, "Midpoint Circle Drawing Algorithm");

    printf("Enter the center of circle: ");
    scanf("%d%d", &xc, &yc);
    printf("Enter the value of radius: ");
    scanf("%d", &r);

    x = 0;
    y = r;
    d = 1-r;

    while(x<=y)
    {
        drawCircle(x, y, xc, yc);
        delay(20);

        if(d<0)
        {
            d = d+(2*x)+6;
        }
        else
        {
            d = d+(2*(x-y))+6;
            y--;
        }
        x++;
    }

    getch();
    closegraph();
}
void drawCircle(int x, int y, int xc, int yc)
{
    putpixel(x+xc, -y+yc, GREEN);
    putpixel(-x+xc, -y+yc, GREEN);
    putpixel(y+xc, -x+yc, GREEN);
    putpixel(-y+xc, -x+yc, GREEN);
    putpixel(x+xc, y+yc, GREEN);
    putpixel(-x+xc, y+yc, GREEN);
    putpixel(-y+xc, x+yc, GREEN);
    putpixel(y+xc, x+yc, GREEN);
}
