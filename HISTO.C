#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main() {
	int gd=DETECT,gm,n=5,m,x=50,y;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	line(50,150,50,400);
	line(50,400,350,400);
	outtextxy(30,400,"0");
	outtextxy(30,360,"20");
	outtextxy(30,320,"40");
	outtextxy(30,280,"60");
	outtextxy(30,240,"80");
	outtextxy(25,200,"100");
	outtextxy(70,410,"C++");
	outtextxy(110,410,"Java");
	outtextxy(170,410,"CG");
	outtextxy(210,410,"PHP");
	outtextxy(260,410,".Net");
	while(n>0){
		printf("Enter Marks of Subject %d: ",5-n+1);
		scanf("%d",&m);
		y = 400-2*m;
		rectangle(x,y,x+50,400);
		setfillstyle(9-n,n+2);
		floodfill(x+5,399,WHITE);
		x+=50;
		n--;
	}
	getch();
	closegraph();
}
