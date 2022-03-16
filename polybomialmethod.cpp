#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;
void axis(void){
    int j,a,b;
    a=getmaxx();
    b=getmaxy();
    for(j=0;j<=a;j++)
    {

    putpixel(j,b/2,GREEN);
    putpixel(a/2,j,BLUE);
    }
}
void drawCircle(int x, int y, int h, int k)
{
    putpixel(x+h, y+k, RED);
    putpixel(-x+h, y+k, RED);
    delay(5);

    putpixel(-x+h, -y+k, BLUE);
    putpixel(x+h, -y+k, BLUE);
    delay(5);

    putpixel(y+h, x+k, YELLOW);
    putpixel(-y+h, x+k, YELLOW);
    delay(5);

    putpixel(-y+h, -x+k, RED);
    putpixel(y+h, -x+k, RED);

}
int main()
{
    int gd = DETECT;
    int gm;
    int h = 0,k = 0,r;
    float Xend, x = 0,y = 0;

    initgraph(&gd, &gm,"");

    cout << "Enter the values of center of circle: ";
    cin >> h >> k;
    moveto(getmaxx()/2,getmaxy()/2);
    h = getx()+x;
    k = gety()+y;
    cout<<"Enter the value of radius of circle: ";
    cin >> r;

    Xend = (r/M_SQRT2); //calculate the end point of x
    axis();
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
