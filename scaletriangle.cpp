#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int x1=100,y1=100;
    int x2=200,y2=100;
    int x3=150,y3=50;

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    double sx,sy;
    cout<<"Enter scaling factor"<<endl;
    cin>>sx>>sy;

    int x4=sx*x1-x1;
    int y4=sy*y1-y1;

    x1=x1*sx;
    y1=y1*sy;

    x2=x2*sx;
    y2=y2*sy;

    x3=x3*sx;
    y3=y3*sy;

    cout<<"x1 "<<x1<<endl;
    cout<<"y1 "<<y1<<endl;

    cout<<"x2 "<<x2<<endl;
    cout<<"y2 "<<y2<<endl;

    cout<<"x3 "<<x3<<endl;
    cout<<"y3 "<<y3<<endl;

    cout<<"Triangle after rotation \n";
    initgraph(&gd,&gm,(char*)"");

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    getch();
    closegraph();
}
