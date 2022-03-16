#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

void DDA(float x1, float y1, float x2, float y2)
{
    float x, y, dx, dy, tx, ty, step;

    y1 = getmaxy() - y1;
    y2 = getmaxy() - y2;

    dx = x2 - x1;
    dy = y2 - y1;
    tx = abs(dx);
    ty = abs(dy);

    if(tx > ty)
        step = tx;
    else
        step = ty;

    dx = dx/step;
    dy = dy/step;

    x = x1;
    y = y1;

    for(int i = 1; i <= step; i++){
        putpixel(x, y, 5);
        x = x + dx;
        y = y + dy;
        delay(20);
    }
}

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

void drawHalfCircle(int x, int y, int xc, int yc)
{
    putpixel(x+xc, -y+yc, GREEN);
    putpixel(-x+xc, -y+yc, GREEN);
    putpixel(y+xc, -x+yc, GREEN);
    putpixel(-y+xc, -x+yc, GREEN);
}

void midpointCircle(int xc, int yc, int r, char s)
{
    int d, x, y;

    yc = getmaxy() - yc;

    d = 1 - r;
    x = 0;
    y = r;

    while(x <= y){
        if(s == 'f')
            drawCircle(x, y, xc, yc);
        else
            drawHalfCircle(x, y, xc, yc);
        delay(100);

        if(d < 0)
            d = d + 2*x + 3;
        else {
            d = d + 2*(x-y) + 5;
            y--;
        }
        x++;
    }
}

int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, xc, yc, r;
    int gd = DETECT;
    int gm;


    initgraph(&gd, &gm, "Triangle");

    cout << "Enter the co-ordinates of the Triangle: " << endl;
    cout << "Enter the 1st co-ordinate: ";
    cin >> x1 >> y1; /// 200 100
    cout << "Enter the 2nd co-ordinate: ";
    cin >> x2 >> y2; /// 400 100
    cout << "Enter the 3rd co-ordinate: ";
    cin >> x3 >> y3; /// 300 300
    cout << endl;

    DDA(x1, y1, x2, y2);
    DDA(x2, y2, x3, y3);
    DDA(x3, y3, x1, y1);

    cout << "Enter the co-ordinates of the Rectangle: " << endl;
    cout << "Enter the 1st co-ordinate: ";
    cin >> x1 >> y1; /// 200 300
    cout << "Enter the 2nd co-ordinate: ";
    cin >> x2 >> y2; /// 400 300
    cout << "Enter the 3rd co-ordinate: ";
    cin >> x3 >> y3; /// 400 100
    cout << "Enter the 4th co-ordinate: ";
    cin >> x4 >> y4; /// 200 100
    cout << endl;

    cleardevice();

    DDA(x1, y1, x2, y2);
    DDA(x2, y2, x3, y3);
    DDA(x3, y3, x4, y4);
    DDA(x4, y4, x1, y1);

    cout << "Enter the co-ordinates of the Star: " << endl;
    cout << "Enter the 1st co-ordinate: ";
    cin >> x1 >> y1; /// 200 50
    cout << "Enter the 2nd co-ordinate: ";
    cin >> x2 >> y2; /// 450 200
    cout << "Enter the 3rd co-ordinate: ";
    cin >> x3 >> y3; /// 150 200
    cout << "Enter the 4th co-ordinate: ";
    cin >> x4 >> y4; /// 400 50
    cout << "Enter the 5th co-ordinate: ";
    cin >> x5 >> y5; /// 300 300
    cout << endl;

    cleardevice();

    DDA(x1, y1, x2, y2);
    DDA(x2, y2, x3, y3);
    DDA(x3, y3, x4, y4);
    DDA(x4, y4, x5, y5);
    DDA(x5, y5, x1, y1);

    cout << "Enter the co-ordinates of the Circle with Quadrants: " << endl;
    cout << "Enter the center of the circle: ";
    cin >> xc >> yc; /// 300 220
    cout << "Enter the radius: ";
    cin >> r; /// 100
    cout << "Enter the 1st co-ordinate: ";
    cin >> x1 >> y1; /// 300 120
    cout << "Enter the 2nd co-ordinate: ";
    cin >> x2 >> y2; /// 300 320
    cout << "Enter the 3rd co-ordinate: ";
    cin >> x3 >> y3; /// 400 220
    cout << "Enter the 4th co-ordinate: ";
    cin >> x4 >> y4; /// 200 220
    cout << endl;

    cleardevice();

    midpointCircle(xc, yc, r, 'f');
    DDA(x1, y1, x2, y2);
    DDA(x3, y3, x4, y4);

    cout << "Enter the co-ordinates of the half Circle: " << endl;
    cout << "Enter the center of the circle: ";
    cin >> xc >> yc; /// 300 220
    cout << "Enter the radius: ";
    cin >> r; /// 100
    cout << "Enter the 1st co-ordinate: ";
    cin >> x1 >> y1; /// 400 220
    cout << "Enter the 2nd co-ordinate: ";
    cin >> x2 >> y2; /// 200 220

    cleardevice();

    midpointCircle(xc, yc, r, 'h');
    DDA(x1, y1, x2, y2);

    getch();
    closegraph();

    return 0;
}
