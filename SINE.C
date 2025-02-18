#include<graphics.h>
#include<math.h>
#include<conio.h>
void main() {
	int gd=DETECT,gm,i;
	double x,y;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setbkcolor(0);
	setcolor(CYAN);
	line(100,1,100,400);
	line(1,220,600,220);
	for(i=0;i<=720;i++){
		x = (3.14/180)*i;
		y = sin(x);
		putpixel(x*35+100,y*150+220,CYAN);
		putpixel(x*35+101,y*150+220,CYAN);
	}
	moveto(102,2);
	outtext("Y");
	moveto(100,402);
	outtext("-Y");
	moveto(1,301);
	outtext("-X");
	moveto(600,222);
	outtext("X");
	getch();
	closegraph();
	restorecrtmode();
}