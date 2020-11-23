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
   float m,b,b1;
   printf("Input x1 & y1 :\n");
   scanf("%d %d",&x1,&y1);
   printf("Input x2 & y2 :\n");
   scanf("%d %d",&x2,&y2);

   printf("point 1 :%d %d point 2: %d %d\n",x1,y1,x2,y2);
   if(x2<x1){
    swap(x1,x2);
    swap(y1,y2);
   }
   float p=x2-x1;
   float q=y2-y1;
   printf("dx=%.2f\n",p);
   printf("dy=%.2f\n",q);
   m=float(y2-y1)/(x2-x1);
   printf("m=%.2f\n",m);
   b1=float(y1-m*x1);
   b=round(b1);
   printf("b=%.2f\n",b);

   int x,y;
   x=x1;
   y=y1;

if(m>0 && m<1){
initgraph(&gd,&gm, "C:\\TC\\BGI");
   xmax=getmaxx();
   ymax=getmaxy();
   xm=xmax/2;
   ym=ymax/2;
   line(0,ym,xmax,ym);
   line(xm,0,xm,ymax);

do{
    putpixel(x+xm,ym-y,YELLOW);
    x++;
    y=int(b+m*x);
   }while(x<x2);



getch();
closegraph();}
else{
    printf("It didn't fulfilled ");
}
return 0;
}
