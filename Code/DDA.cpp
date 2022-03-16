#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std ;
void axis(void);

int ploat(int x1,int y1,int x2,int y2);


int main(void)
{

   int gdriver = DETECT, gmode, errorcode,x,y,x1,y1,x2,y2;
   char msg[80];

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");



   cout<<"\nenter co-oridinates point 1:";
   cin>>x1>>y1;
   cout<<"\nenter co-oridinates point 2:";
   cin>>x2>>y2;

   cleardevice();
   axis();
   ploat(x1,y1,x2,y2);


   /* move the C.P. to location (20, 30) */
  // moveto(getmaxx()/2, getmaxy()/2);

   /* plot a pixel at the C.P. */
  // putpixel(getx()+x, gety()-y, getmaxcolor());

   /* create and output a message at (20, 30) */
   //sprintf(msg, " (%d, %d)", getx(), gety());
   //outtextxy(getmaxx()/2,getmaxy()/2,"(0,0)");


   //sprintf(msg, " (%d, %d)", getx(), gety());
   //outtext(msg);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

void axis(void)
{
int i,x,y;
x=getmaxx();
y=getmaxy();
for(i=0;i<=x;i++)
{
//putpixel(i,y/2,getmaxcolor());
putpixel(i,y/2,RED);
//putpixel(x/2,i,getmaxcolor());
putpixel(x/2,i,RED);
}
}

int  ploat(int x1,int y1,int x2,int y2)
{
int i,l,delx,dely;
float dx,dy,x,y;
char msg[80];

delx=x2-x1;
dely=y2-y1;
/*if(delx==0||dely==0)
{
    cout<<"wrong input"<<endl;
    return 0;
}*/
if(abs(delx) > abs(dely))
{
l=abs(delx);
}
else
{
l=abs(dely);
}

dx=abs(delx)/(float)l;
dy=abs(dely)/(float)l;


cout<<"\nformer dx:"<<dx<<" dy:"<<dy;

if(delx<0 && dely<0)
{
dx=-dx;
//dx=-(abs(delx)/(float)l);
}
else if(delx<0 && dely>0)
{
dx=-dx;
dy=-dy;
//dx=-(abs(delx)/(float)l);
//dy=-(abs(dely)/(float)l);
}
else if(delx>0 && dely>0)
{
dy=-dy;
//dy=-(abs(dely)/(float)l);
}

cout<<"\n dx:"<<dx<<" dy:"<<dy;

moveto(getmaxx()/2, getmaxy()/2);
x=getx()+x1;
y=gety()-y1;

sprintf(msg,"(%d,%d)",x1,y1);
outtextxy(x,y,msg);

putpixel(x,y,getmaxcolor());
//ploating points


for(i=0;i<l;i++)
{
x=x+dx;
y=y+dy;
putpixel(x,y,getmaxcolor());
}

sprintf(msg,"(%d,%d)",x2,y2);
outtextxy(x,y,msg);

}
