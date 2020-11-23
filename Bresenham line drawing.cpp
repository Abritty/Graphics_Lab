
#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main()
{
   int gd=DETECT;
   int gm;
   int xm,ym,xmax,ymax,x1,y1,x2,y2;
   int dx,dy,w,z,p;
   printf("Input x1 & y1 :\n");
   scanf("%d %d",&x1,&y1);
   printf("Input x2 & y2 :\n");
   scanf("%d %d",&x2,&y2);

   printf("point 1 :%d %d point 2: %d %d\n",x1,y1,x2,y2);
   dx=x2-x1;
   dy=y2-y1;
   w=2*dx;
   z=2*dy;
   p=z-dx;

   int x,y;
   x=x1;
   y=y1;


initgraph(&gd,&gm, "C:\\TC\\BGI");
   xmax=getmaxx();
   ymax=getmaxy();
   xm=xmax/2;
   ym=ymax/2;
   line(0,ym,xmax,ym);
   line(xm,0,xm,ymax);

do{
    putpixel(x+xm,ym-y,YELLOW);
    if(p<0){
        p=p+z;
        x++;
    }
    else{
        p=p+z-w;
        x++;
        y++;
    }
   }while(x<=x2);



getch();
closegraph();
return 0;
}
