#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int h,k;
    cout<<"Enter coordinates of point around which rotation is  done"<<endl;
    cin>>h>>k;

    int t;
    cout<<"Enter angle of rotation "<<endl;
    cin>>t;
    double c=cos(t*3.14/180);
    double s=sin(t*3.14/180);

    int x2=(h*c-k*s);
    int y2=(h*s+k*c);

    delay(500);
    line(0,0,h,k);
    delay(500);
    line(0,0,x2,y2);

    getch();
    closegraph();
}
