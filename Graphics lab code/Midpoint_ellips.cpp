/// C-program for circle drawing using Bresenham’s Algorithm
#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include<bits/stdc++.h>
using namespace std;

/// Function to put pixels at subsequence points
void drawellips(int xc, int yc, int x, int y){
    putpixel(xc+x, yc+y, RED);
	putpixel(xc-x, yc+y, RED);
	putpixel(xc+x, yc-y, RED);
	putpixel(xc-x, yc-y, RED);
}
/// Function for circle-generation using Bresenham's algorithm
void ellipsedraw(int xc, int yc, int a, int b){
	int x=0,y=b;
	int fx=0,fy=2*a*a*b;
	int p=b*b - a*a*b + 0.25 * a* a;
	cout<<"fx "<<fx<<" "<<fy<<endl;
	while(fx<fy){
        delay(50);
        drawellips(xc,yc,x,y);
        fx+=2*b*b;
        if(p<0)
            p+=2*b*b*x+3*b*b;
        else{
            fy-=2*a*a;
            p+=2*b*b*x+3*b*b-(2*a*a*(y-1));
            y--;
        }
        x++;
    }
    int q=(b*b*(x+0.5)*(x+0.5)) + (a*a*(y-1)*(y-1))- a*a*b*b;
    while(y>=0){
        delay(50);
        drawellips(xc,yc,x,y);
        if(q<0){
            q+= 2*b*b*x - 2*a*a*y + 2*b*b + 3*a*a;
            x++;
        }
        else
            q+=3*a*a - 2*a*a*y;
        y--;
    }
}
int main(){
	int xc = 200, yc = 200, a=140,b=50;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, ""); // initialize graph

	ellipsedraw(xc, yc, a, b); // function call

    setfillstyle(HATCH_FILL, RED);
    floodfill(xc, yc, RED);

	getch();
    closegraph();
	return 0;
}
