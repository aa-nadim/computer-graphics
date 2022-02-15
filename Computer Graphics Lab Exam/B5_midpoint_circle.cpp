#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
void drawCircle(int xc, int yc, int x, int y){
	putpixel(xc+x, yc+y, 1);
	putpixel(xc-x, yc+y, 2);
	putpixel(xc+x, yc-y, 3);
	putpixel(xc-x, yc-y, 4);
	putpixel(xc+y, yc+x, 5);
	putpixel(xc-y, yc+x, 6);
	putpixel(xc+y, yc-x, 7);
	putpixel(xc-y, yc-x, 8);
}
void midpoint_circle(int xc, int yc, int r){
	int x=0,y=r,p=1-r;
	while(x<=y){
        delay(50);
        drawCircle(xc,yc,x,y);
        if(p<0)
            p=p+2*x+3;
        else{
            p=p+2*(x-y)+5;
            y--;
        }
        x++;
    }
}
int main(){
	int xc=250, yc=250, r=200;
	int gd=DETECT,gm;
	initgraph(&gd, &gm, "");
	midpoint_circle(xc, yc, r);
	getch();
    closegraph();
	return 0;
}
