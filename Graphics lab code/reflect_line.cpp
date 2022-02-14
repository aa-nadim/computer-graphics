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
    int x2=200,y2=50;

    line(0,240,639,240);
    line(320,0,320,479);

    line(x1,y1,x2,y2);

    int xo1,xo2,yo1,yo2;

    int x;
    cout<<"Enter 1. for rotation about x axis "<<endl;
    cout<<"Enter 2. for rotation about y axis "<<endl;
    cout<<"Enter 3. for rotation about both axis "<<endl;
    cin>>x;

    if(x==1 or x==3){
        xo1=640-x1;
        xo2=640-x2;
        yo1=y1;
        yo2=y2;

        line(0,240,639,240);
        line(320,0,320,479);
        line(xo1,yo1,xo2,yo2);
    }
    if(x==2 or x==3){
        yo1=480-y1;
        yo2=480-y2;
        xo1=x1;
        xo2=x2;

        line(0,240,639,240);
        line(320,0,320,479);
        line(xo1,yo1,xo2,yo2);
    }
    getch();
    closegraph();
}
