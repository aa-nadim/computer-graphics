#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int gd = DETECT ,gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    float x, y,dx,dy,steps;
    int x0, x1, y0, y1,i;

    //setbkcolor(WHITE);
    cout<<"\nenter co-oridinates point 1:";
    cin>>x0>>y0;
    cout<<"\nenter co-oridinates point 2:";
    cin>>x1>>y1;
    //x0 = 100 , y0 = 200, x1 = 500, y1 = 300;
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
           {
        steps = dx;
    }
    else
           {
        steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
        putpixel(x, y, RED);
        x += dx;
        y += dy;
        i=i+1;
    }
    getch();
    closegraph();
}
