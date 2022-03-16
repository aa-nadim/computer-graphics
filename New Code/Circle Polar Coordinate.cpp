#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

void drawCircle(int x, int y, int h, int k)
{
    putpixel(x+h, y+k, RED);
    putpixel(-x+h, y+k, RED);
    delay(50);

    putpixel(-x+h, -y+k, RED);
    putpixel(x+h, -y+k, RED);
    delay(50);

    putpixel(y+h, x+k, RED);
    putpixel(-y+h, x+k, RED);
    delay(50);

    putpixel(-y+h, -x+k, RED);
    putpixel(y+h, -x+k, RED);
}

int main( )
{
    int gd = DETECT;
    int gm;
    int h, k, r;
    float x, y, theta;

    initgraph(&gd, &gm, "Circle Using Polar Coordinate");

    cout << "Enter the values of center of circle: ";
    cin >> h >> k;
    cout << "Enter the value of radius of circle: ";
    cin >> r;

    theta = 0;

    while(theta <= 45){
        x = r*cos(theta);
        y = r*sin(theta);

        drawCircle(x, y, h, k);

        theta += 0.1;
    }

    getch();
    closegraph();

    return 0;
}
