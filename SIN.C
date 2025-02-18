#include<graphics.h>
#include<conio.h>
#include<math.h>
void main() {
	int gd=DETECT,gm,x,y;
	printf("Program for Sin Curve:");
	initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
	for(x = 0; x < 360; x++){
		y = 80*sin((3.14*x)/180);
		putpixel(x,ceil(y),GREEN);
	}
	getch();
}