#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y, x1, y1, x2, y2, dx, dy, step;
    int dd = DETECT; ///driver,,
    int mm;

    initgraph(&dd, &mm,""); ///  initgraph initializes the graphics system by loading a graphics driver from disk (or validating a registered driver), and putting the system into graphics mode.

    cout << "Enter the value of x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter the value of x2 and y2: ";
    cin >> x2 >> y2;

    dx = abs(x2 - x1); ///slope m = dy/dx;
    dy = abs(y2 - y1);

    if(dx >= dy)  /// deciding if |m|<=1
        step = dx;
    else
        step = dy; /// if |m|>1

    dx = dx/step;
    dy = dy/step;

    x = x1;
    y = y1;

    for(int i = 1; i <= step; i++){
        putpixel(x, y, BLUE);  ///setting pixel with color
        x = x + dx;
        y = y + dy;
        delay(100);
    }

    while(!kbhit()){ ///if console becomes idle
        delay(200);
    }
    closegraph();

    return 0;
}
