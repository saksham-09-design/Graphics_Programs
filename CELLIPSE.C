#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main() {
	int gd=DETECT,gm,xr=40,yr=20,i,x,y;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	x = getmaxx()/2;
	y = getmaxy()/2;
	for(i=1; i<=10; i++) {
		setcolor(i+1);
		ellipse(x,y,0,360,xr,yr);
		xr += 20;
		yr += 10;
		delay(300);
	}
	getch();
	closegraph();
}