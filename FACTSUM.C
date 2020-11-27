#include<stdio.h>
#include<conio.h>
void main()
{double i,sum=0,j;
double factorial=1;
clrscr();
for(i=1;i<=10;i++)
{for(j=0;j<=i;j++)
{factorial=factorial*j;}
sum=sum+factorial;
factorial=1;
}
getch();
}