#include <graphics.h>
#include <iostream>
using namespace std;

void drawCircle(int x, int y, int xc, int yc)
{
    putpixel(x+xc, y+yc, GREEN);
    putpixel(-x+xc, y+yc, GREEN);
    putpixel(x+xc, -y+yc, GREEN);
    putpixel(-x+xc, -y+yc, GREEN);
    putpixel(y+xc, x+yc, GREEN);
    putpixel(y+xc, -x+yc, GREEN);
    putpixel(-y+xc, x+yc, GREEN);
    putpixel(-y+xc, -x+yc, GREEN);
}

int main( )
{
    int gd = DETECT;
    int gm;
    int r, xc, yc, d, x, y;

    initgraph(&gd, &gm, "Midpoint Circle Algorithm");

    cout << "Enter the center co-ordinate: ";
    cin >> xc >> yc;
    cout << "Enter the radius of circle: ";
    cin >> r;

    d = 1 - r;
    x = 0;
    y = r;

    while(x <= y){
        drawCircle(x, y, xc, yc);
        delay(100);

        if(d < 0){
            d = d + (2*x) + 3;
        }
        else{
            d = d + (2*(x-y)) + 5;
            y--;
        }
        x++;
    }

    while (!kbhit( ))
    {
        delay(200);
    }
    closegraph();

    return 0;
}
