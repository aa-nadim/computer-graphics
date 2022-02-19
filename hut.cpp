#include<graphics.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
 int gd = DETECT,gm;
    initgraph(&gd, &gm, "");
    /* Draw Hut */
    delay(500);
    rectangle(100,100,200,300);
    rectangle(200,100,350,300);
    rectangle(130,200,170,300);

    line(100,100,150,50);
    line(150,50,200,100);
    line(150,50,300,50);
    line(300,50,350,100);


    setfillstyle(SOLID_FILL, 22);
    floodfill(152, 182, WHITE);

    setfillstyle(LINE_FILL, 3);
    floodfill(252, 182, WHITE);

    setfillstyle(HATCH_FILL, 1);
    floodfill(131, 201, WHITE);

    setfillstyle(SLASH_FILL, 15);
    floodfill(150, 51, WHITE);

    setfillstyle(LTSLASH_FILL, 7);
    floodfill(300, 51, WHITE);

    getch();
    closegraph();
    return 0;
}
