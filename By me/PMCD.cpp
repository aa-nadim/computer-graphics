#include <graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void drawCircle(int, int, int, int);
main()
{
    int gd= DETECT, gm;
    int x, y, r, xc, yc;
    float d;

    initgraph(&gd, &gm, "Polynomial Circle Drawing Algorithm");

    printf("Enter the center of circle: ");
    scanf("%d%d", &xc, &yc);
    printf("Enter the value of radius: ");
    scanf("%d", &r);

    x = 0;
    y = r;
    d = r/sqrt(2);

    while(x <= d)
    {
        x++;
        y = sqrt(r*r - x*x);

        drawCircle(x, y, xc, yc);
        delay(50);
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

