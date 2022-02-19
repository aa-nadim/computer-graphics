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
void circleBres(int xc, int yc, int r){
	int x = 0, y = r;
	int d = 3 - 2 * r;
	drawCircle(xc, yc, x, y);
	while (y >= x){
		x++;
		if (d > 0){
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;
		drawCircle(xc, yc, x, y);
		//delay(50);
	}
}

int main(){
	int xc = 250, yc = 250, r = 200;

	int gd = DETECT, gm;
	initgraph(&gd, &gm, ""); /// initialize graph

	circleBres(xc, yc, r); /// function call

	getch();
    closegraph();
	return 0;
}
