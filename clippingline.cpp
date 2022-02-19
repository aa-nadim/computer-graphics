#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

using namespace std;
void storepoints(int,int,int,int,int,int,int[]);
int main(){
    int gd=DETECT,gm;
    int x1=10,y1=10,x2=100,y2=110;
    //int x1=100,y1=40,x2=100,y2=110;
    int xmax=90,ymax=90,xmin=10,ymin=20;
    int a[10],b[10],flag=0,xi1,yi1,m,xi2,yi2;

    storepoints(x2,y2,ymin,ymax,xmax,xmin,b);
    storepoints(x1,y1,ymin,ymax,xmax,xmin,a);

    for(int i=1; i<=4; i++){
        if(a[i]*b[i]==0)
            flag=1;
        else{
            flag=0;break;
        }
        cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
    }
    if(flag==1){
        m=(y2-y1)/(x2-x1);
        xi1=x1;
        yi1=y1;
    }
    if(a[1]==1){
        yi1=ymax;
        xi1=x1+(1/m)*(yi1-y1);
    }
    else if(a[2]==1){
        yi1=ymin;
        xi1=x1+(1/m)*(yi1-y1);
    }
    else if(a[3]==1){
        xi1=xmax;
        yi1=y1+m*(xi1-x1);
    }
    else if(a[4]==1){
        xi1=xmin;
        yi1=y1+m*(xi1-x1);
    }

    if(b[1]==1){
        yi2=ymax;
        xi2=x2+(1/m)*(yi2-y2);
    }
    else if(b[2]==1){
        yi2=ymin;
        xi2=x2+(1/m)*(yi2-y2);
    }
    else if(b[3]==1){
        xi2=xmax;
        yi2=y2+m*(xi2-x2);
    }
    else if(b[4]==1){
        xi2=xmin;
        yi2=y2+m*(xi2-x2);
    }

    initgraph(&gd,&gm,(char*)"");
    rectangle(xmin,ymin,xmax,ymax);
    line(x1,y1,x2,y2);
    delay(5000);
    //closegraph();

    initgraph(&gd,&gm,(char*)"");
    line(xi1,yi1,xi2,yi2);
    rectangle(xmin,ymin,xmax,ymax);

    if(flag==0)
        cout<<"NO Clipping required\n";
    getch();
    closegraph();
}
void storepoints(int x1,int y1,int ymin,int ymax,int xmax,int xmin,int c[10]){
    if((y1-ymax)>0)
        c[1]=1;
    else
        c[1]=0;

    if((ymin-y1)>0)
        c[2]=1;
    else
        c[2]=0;

    if((x1-xmax)>0)
        c[3]=1;
    else
        c[3]=0;

    if((xmin-x1)>0)
        c[4]=1;
    else
        c[4]=0;

    cout<<c[1]<<" "<<c[2]<<" "<<c[3]<<" "<<c[4]<<endl;
}
