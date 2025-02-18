#include<graphics.h>
#include<conio.h>
void main() {
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	circle(250,150,100);
	circle(205,110,10);
	circle(300,110,10);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(250,150,15);
	setcolor(0);
	arc(250,160,190,350,50);
	line(200,170,300,170);
	setfillstyle(SOLID_FILL,RED);
	floodfill(250,180,0);
	getch();
	closegraph();
}