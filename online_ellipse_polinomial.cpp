#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
void plot4pixels(int,int,int,int);
int main()
{
int x,y,r,i,h,k,a,b;

cout<<"\nenter the x and y coordinates:-\n";
cin>>h>>k;
cout<<"\nenter the first radius:-\n";
cin>>a;
cout<<"\nenter the second radius:-\n";
cin>>b;
x=0;
y=b;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
setbkcolor(WHITE);
while(x<a)
{
plot4pixels(x,y,h,k);
x++;
y=b*sqrt(((a*a)-(x*x*1.0))/(a*a));
}
plot4pixels(x,y,h,k);
setcolor(8);
// ellipse(200,400,0,360,10,8);
outtextxy(100,60,"ellipse using polynomial method");
getch();
}
void plot4pixels(int x,int y,int h,int k)
{
putpixel(x+h,y+k,8);
putpixel(x+h,-y+k,8);
putpixel(-x+h,y+k,8);
putpixel(-x+h,-y+k,8);
}


