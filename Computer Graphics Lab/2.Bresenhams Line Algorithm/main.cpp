#include <graphics.h>
#include <iostream>
using namespace std;

void drawline(int x1, int y1, int x2, int y2)
{
    int dx, dy, p, x, y;

    x = x1;
    y = y1;
    dx = x2 - x1;
    dy = y2 - y1;
    int dT = 2*(dy-dx);
    int dS = 2*dy;
    p = 2*dy - dx;

    while(x < x2){
        putpixel(x, y, 7);
        delay(100);
        x++;

        if(p < 0){
            p = p + dS;
        }
        else{
            p = p + dT;
            y++;
        }
    }
}

int main( )
{
    int gd = DETECT;
    int gm;
    int x1, y1, x2, y2;

    initgraph(&gd, &gm, "Bresenham's Line Algorithm");

    cout << "Enter co-ordinates of first point: ";
    cin >> x1 >> y1;
    cout << "Enter co-ordinates of second point: ";
    cin >> x2 >> y2;

    drawline(x1, y1, x2, y2);

    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}
