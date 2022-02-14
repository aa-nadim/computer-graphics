#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int x1=200,y1=200;
    int x2=300,y2=200;
    int x3=200,y3=300;
    int x4=300, y4=300;

    line(x1,y1,x2,y2);
    line(x2,y2,x4,y4);
    line(x3,y3,x4,y4);
    line(x3,y3,x1,y1);

    double tx,ty;
    cout<<"Enter scaling factor"<<endl;
    cin>>tx>>ty;

    x1=x1+tx;
    y1=y1+ty;

    x2=x2+tx;
    y2=y2+ty;

    x3=x3+tx;
    y3=y3+ty;

    x4=x4+tx;
    y4=y4+ty;

    cout<<"x1 "<<x1<<endl;
    cout<<"y1 "<<y1<<endl;

    cout<<"x2 "<<x2<<endl;
    cout<<"y2 "<<y2<<endl;

    cout<<"x3 "<<x3<<endl;
    cout<<"y3 "<<y3<<endl;

    cout<<"x4 "<<x4<<endl;
    cout<<"y4 "<<y4<<endl;

    cout<<"Squre after Translation \n";
    initgraph(&gd,&gm,(char*)"");

    line(x1,y1,x2,y2);
    line(x2,y2,x4,y4);
    line(x3,y3,x4,y4);
    line(x3,y3,x1,y1);

    getch();
    closegraph();
}
