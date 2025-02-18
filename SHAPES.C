#include<graphics.h>
#include<conio.h>
void main() {
	int gd=DETECT, gm, n=2;
	int x[] = {320,320,360,250,400,320,320,320};
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setfillstyle(n,n+2);
	rectangle(20,30,60,90);
	floodfill(30,40,WHITE);
	n+=1;
	setfillstyle(n,n+2);
	circle(150,150,50);
	floodfill(155,155,WHITE);
	n+=1;
	setfillstyle(n,n+2);
	ellipse(240,240,0,360,60,40);
	floodfill(245,245,WHITE);
	n+=1;
	setfillstyle(n,n+2);
	fillpoly(4,x);
	getch();
	closegraph();
}
