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

    int x,y;
    cout<<"Enter translation factor"<<endl;
    cin>>x>>y;

    x1+=x;
    y1+=y;

    x2+=x;
    y2+=y;

    x3+=x;
    y3+=y;

    cout<<"x1 "<<x1<<endl;
    cout<<"y1 "<<y1<<endl;

    cout<<"x2 "<<x2<<endl;
    cout<<"y2 "<<y2<<endl;

    cout<<"x3 "<<x3<<endl;
    cout<<"y3 "<<y3<<endl;

    cout<<"Triangle after translation \n";
    initgraph(&gd,&gm,(char*)"");

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    getch();
    closegraph();
}
