#include<graphics.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

int npx,npy;
void rotate_point(float cx,float cy,float angle,int px,int py){
    float s = sin(angle*3.14/180);
    float c = cos(angle*3.14/180);

    // translate point back to origin:
    px -= cx;
    py -= cy;

    // rotate point
    float xnew = px * c - py * s;
    float ynew = px * s + py * c;

    // translate point back:
    px = xnew + cx;
    py = ynew + cy;

    npx=px;
    npy=py;
}
int main(){
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "");
    int cx=180,cy=150,angle=30;
    int px=200,py=300,r=30;
    line(cx,cy,px,py);
    circle(px,py,r);

    rotate_point((float)cx,(float)cy,(float)angle,px,py);
    //initgraph(&gd, &gm, "");
    line(cx,cy,npx,npy);
    circle(npx,npy,r);

    getch();
    closegraph();
    return 0;
}
