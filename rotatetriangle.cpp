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

    int x;
    cout<<"Enter rotate angle "<<endl;
    cin>>x;

    double c=cos(x*3.14/180);
    double s=sin(x*3.14/180);

    cout<<c<<" C  S "<<s<<endl;

    int x11=floor(x1*c-y1*s);
    int y11=floor(x1*s+y1*c);

    int x22=floor(x2*c-y2*s);
    int y22=floor(x2*s+y2*c);

    int x33=floor(x3*c-y3*s);
    int y33=floor(x3*s+y3*c);

    cout<<"x1 "<<x11<<endl;
    cout<<"y1 "<<y11<<endl;

    cout<<"x2 "<<x22<<endl;
    cout<<"y2 "<<y22<<endl;

    cout<<"x3 "<<x33<<endl;
    cout<<"y3 "<<y33<<endl;

    cout<<"Triangle after rotation \n";
    initgraph(&gd,&gm,(char*)"");

    line(x11,y11,x22,y22);
    line(x22,y22,x33,y33);
    line(x33,y33,x11,y11);

    getch();
    closegraph();
}
