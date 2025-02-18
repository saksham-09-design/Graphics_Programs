#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main() {
	int gm, gd=DETECT;
	int t[] = {50,180,115,80,180,180,50,180};
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	printf("   Graphics Program to Draw a HUT");
	rectangle(0,0,getmaxx(), getmaxy());//Outer
	rectangle(180,180,getmaxx()-100,getmaxy()-100);//Hut right
	rectangle(50,180,180,getmaxy()-100);//Hut Left
	rectangle(80,250,155,getmaxy()-100);//Hut Door
	rectangle(300,220,400,300);//window
	line(350,220,350,300);
	line(300,260,400,260);
	line(115,80,getmaxx()-150,80);
	line(getmaxx()-150,80,getmaxx()-100,180);
	circle(115,140,15);
	circle(140,330,5);
	circle(570,50,30);
	drawpoly(4,t);
	getch();
	closegraph();
}
