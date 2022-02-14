/// C-program for circle drawing using Bresenham’s Algorithm
#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include<bits/stdc++.h>

/// Function to put pixels at subsequence points
void drawCircle(int xc, int yc, int x, int y){
	putpixel(xc+x, yc+y, RED);
	putpixel(xc-x, yc+y, RED);
	putpixel(xc+x, yc-y, RED);
	putpixel(xc-x, yc-y, RED);
	putpixel(xc+y, yc+x, RED);
	putpixel(xc-y, yc+x, RED);
	putpixel(xc+y, yc-x, RED);
	putpixel(xc-y, yc-x, RED);
}
/// Function for circle-generation using Bresenham's algorithm
void circlemid(int xc, int yc, int r){
	int x = 0, y = r,p=1-r;
	while(x<=y){
        delay(50);
        drawCircle(xc,yc,x,y);
        if(p<0)
            p= p+2*x+3;
        else{
            p= p + 2*(x-y)+ 5;
            y--;
        }
        x++;
    }
}
/// Driver code
int main(){
	int xc = 250, yc = 250, r = 200;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, ""); /// initialize graph

	circlemid(xc, yc, r); /// function call

	getch();
    closegraph();
	return 0;
}
