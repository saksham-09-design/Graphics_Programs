#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main() {
	int gd=DETECT,gm,x,xr,yr;
	float y;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	line(10,100,460,100);
	line(100,0,100,370);
	outtextxy(11,105,"(10,100)");
	outtextxy(368,105,"(460,100)");
	outtextxy(101,371,"(100,370)");
	xr = getmaxx();
	yr = getmaxy();
	for(x=10;x<=360;x++){
		y = 80*sin(x*3.14/180);
		putpixel(100+x,ceil(100-y),3);
	}
	getch();
	closegraph();
	printf("%d*%d",xr,yr);
	getch();
}