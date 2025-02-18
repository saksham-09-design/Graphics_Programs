#include<graphics.h>
#include<conio.h>
void main() {
	int gd=DETECT,gm;
	int x[] = {300,50,50,400,500,150,50,150,500,400,300,50};
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setbkcolor(15);
	setcolor(BLUE);
	drawpoly(6,x);
	getch();
	closegraph();
}