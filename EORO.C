#include<stdio.h>
#include<conio.h>
void main()
{int num;
int rem;
clrscr();
printf("EnterNumber");
scanf("%d",&num);
rem=num%2;
if(rem==0){printf("Even");}else{printf("Odd");}
getch();
}