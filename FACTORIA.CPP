#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int factorial=1;
int count=1;
int getnum;
scanf("%d",&getnum);
while(count<getnum)
{count=count++;
factorial=count*factorial;
}
printf("%d",factorial);
getch();
}
