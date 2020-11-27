#include<stdio.h>
#include<conio.h>
void main()
{int a=10;
int b=10;
int i;
clrscr();
for(i=1;i<=a;i++)
{ a++;
b--;
printf("a=%d,b=%d\t",a,b);
}
getch();
}