#include <graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void drawCircle(int, int, int, int);
main()
{
    int gd= DETECT, gm;
    int r, xc, yc;
    float d, theta, x, y;

    initgraph(&gd, &gm, "Polar Coordinate Circle Drawing Algorithm");

    printf("Enter the center of circle: ");
    scanf("%d%d", &xc, &yc);
    printf("Enter the value of radius: ");
    scanf("%d", &r);

    theta = 0;
    d = 3.1416/4;

    while(theta <= d)
    {
        x = r*cos(theta);
        y = r*sin(theta);

        drawCircle(x, y, xc, yc);
        delay(50);

        theta = theta + .01;
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


