#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;


int main()
{
int gd=DETECT;
   int gm;

   int xm,ym,xmax,ymax,x,y,d,r=50,dif;
   x=0;
   y=r;
   d=3-2*r;

   initgraph(&gd,&gm, "C:\\TC\\BGI");
   xmax=getmaxx();
   ymax=getmaxy();
   xm=xmax/2;
   ym=ymax/2;
   line(0,ym,xmax,ym);
   line(xm,0,xm,ymax);

    while(x<=y)
    {
       putpixel(xm+x, ym+y,RED);
    putpixel(xm-x, ym+y, RED);
	putpixel(xm+x, ym-y, RED);
	putpixel(xm-x, ym-y, RED);
	putpixel(xm+y, ym+x, RED);
	putpixel(xm-y, ym+x, RED);
	putpixel(xm+y, ym-x, RED);
	putpixel(xm-y, ym-x, RED);
        if(d<0){
            d=d+4*x+6;
        }
        else{
            dif=x-y;
            d=d+4*dif+10;
            y--;
        }
        x++;
    }

getch();
closegraph();
return 0;

}
