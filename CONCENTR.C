#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
void main() {
	int gd = DETECT, gm, r, ru, i, num, col, pat, x, y;
	printf("Program for Concentric Circles");
	printf("\nEnter the number of Circles: ");
	scanf("%d", &num);
	printf("Enter the Step Size");
	scanf("%d",&r);
	ru = r;
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	x = getmaxx()/2;
	y = getmaxy()/2;
	for(i = 0,col=3,pat=3; i < num; i++,r+=ru,col++,pat++) {
		if(r > getmaxx()/2 || r > getmaxy()/2){
			outtextxy(10,10,"Screen Limit Reached!");
			break;
		}
		circle(x,y,r);
		if(col>15)
			col=3;
		if(pat>11)
			pat=3;
		setfillstyle(pat,col);
		floodfill(x+(ru*i)+5,y,15);
		delay(300);
	}
	getch();
	closegraph();

}