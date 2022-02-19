#include<graphics.h>
#include<iostream>
#include<math.h>
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
int main()
{
    int gd = DETECT;
    int gm;
    int h = 0,k = 0,r;
    float Xend, x = 0,y = 0;

    initgraph(&gd, &gm, "Circle Using Polynomial Method");

    cout << "Enter the values of center of circle: ";
    cin >> h >> k;
    cout<<"Enter the value of radius of circle: ";
    cin >> r;

    Xend = (r/sqrt(2)); //calculate the end point of x

    while(x <= Xend)
    {
        x = x + 1;
        y = sqrt(pow(r, 2) - pow(x, 2));

        drawCircle(x, y, h, k);
    }

    getch();
    closegraph();

    return 0;
}
