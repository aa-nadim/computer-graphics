#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    int p=1,x;
    int a[12]= {100,100,150,150,200,100,200,200,100,200,100,100};
    drawpoly(6,a);

    setfillstyle(SOLID_FILL, 4);
    floodfill(152, 182, WHITE);

    getch();
    closegraph();
}
