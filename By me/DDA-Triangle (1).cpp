#include <iostream>
#include <graphics.h>
using namespace std;
void dda(float x1,float y1,float x2,float y2)
{
float x,y,dx,dy,step;
int i;
//gd=DETECT,gm;
//char path[] = "";
//initgraph(&gd,&gm,path);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>=abs(dy))
{
step=abs(dx);
}
else
{
step=abs(dy);
}
dx=dx/step;
dy=dy/step;
x=x1;
y=y1;
for(i=1;i<=step;i++)
{
putpixel(x,y,WHITE);
x=x+dx;
y=y+dy;

}}
int main( )
{
    int gd = DETECT;
    int gm;
    int x1, y1, x2, y2;

    initgraph(&gd, &gm, "Bresenham's Line Algorithm");



    dda(100,270,200,50);
    dda(300,270,200,50);
    dda(100,270,300,270);


    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}
