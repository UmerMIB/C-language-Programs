#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd, &gm,"c:/tc/bgi");
clrscr();
textmode(RED);
cprintf("c programing");
circle(330,190,20);
getch();
closegraph();
restorecrtmode();
}