#include<stdio.h>
#include<conio.h>

void main()
{
int a[5];
int b[5];
int i,j,k;
clrscr();
for(i=0;i<5;i++)
{scanf("%d",&a[i]);
}
for(j=0;j<5;j++)
{scanf("%d",&b[j]);}
for(k=0;k<5;k++)
{printf("Values of array a is%d\n",a[k]=b[k]);
printf("Values of array b is%d\n",b[k]=a[k]);
}
getch();
}