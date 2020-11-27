#include<stdio.h>
#include<conio.h>

void main()
{int num[10],i,max;
clrscr();
for(i=0;i<=9;i++) {
scanf("%d",&num[i]);}
max=num[0];
for(i=1;i<=9;i++) {
if(max<num[i]){
max=num[i];}}
printf("Largest number is %d",max);
getch();
}