#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
void drawline(int x0, int y0, int x1, int y1){
    int dx, dy, p, x, y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;y=y0;
    p=2*dy-dx;
    while(x<=x1){
        delay(50);
        putpixel(640-x,480-y,7);
        if(p>=0){
            y++;
            p=p+2*dy-2*dx;
        }
        else{
            p=p+2*dy;
        }
        x++;
    }
    cout<<x<<" "<<y<<endl;
}
int main(){
    int x0, y0, x1, y1;
    int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
    cout<<"x1 and y1 : ";cin>>x0>>y0;
    cout<<"x2 and y2 : ";cin>>x1>>y1;
    drawline(x0, y0, x1, y1);
    getch();
    closegraph();
    return 0;
}
