/// C++ program for Mid-point line generation
#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

/// midPoint function for line generation
void midPoint(int X1, int Y1, int X2, int Y2){
    /// calculate dx & dy
    int dx = X2 - X1;
    int dy = Y2 - Y1;

    if(dy<=dx){
        /// initial value of decision parameter d
        int d = dy - (dx/2);
        int x = X1, y = Y1;

        // Plot initial given point
        // putpixel(x,y) can be used to print pixel
        // of line in graphics
        //cout << x << "," << y << "\n";
        putpixel(x,y,RED);
        // iterate through value of X
        while (x < X2){
            x++;
            // E or East is chosen
            if (d < 0)
                d = d + dy;

            // NE or North East is chosen
            else{
                d += (dy - dx);
                y++;
            }
            putpixel(x,y,RED);
            // Plot intermediate points
            // putpixel(x,y) is used to print pixel
            // of line in graphics
        }
    }
    else if(dx<dy){
        // initial value of decision parameter d
        int d = dx - (dy/2);
        int x = X1, y = Y1;

        // Plot initial given point
        // putpixel(x,y) can be used to print pixel
        // of line in graphics
        //cout << x << "," << y << "\n";
        putpixel(x,y,RED);
        // iterate through value of X
        while (y < Y2){
            y++;
            // E or East is chosen
            if (d < 0)
                d = d + dx;

            // NE or North East is chosen
            // NE or North East is chosen
            else{
                d += (dx - dy);
                x++;
            }
            // Plot intermediate points
            // putpixel(x,y) is used to print pixel
            // of line in graphics
            putpixel(x,y,RED);
        }
    }
}

// Driver program
int main(){
    // graphics driver and mode
    // used in graphics.h
    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");

    int X1 = 2, Y1 = 2, X2 = 180, Y2 = 115;
    midPoint(X1, Y1, X2, Y2);

    getch();
    closegraph();

    return 0;
}
