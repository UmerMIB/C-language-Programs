#include<stdio.h>
#include<conio.h>
void main()
{int countpos;
int countneg;
int till;
int tillneg;
clrscr();
scanf("%d",&till);
for(countpos=1;countpos<=till;countpos++)
{printf("%d\n",countpos);}
tillneg=(-1)*till;
for(countneg=0;countneg>=tillneg;--countneg)
{printf("%d\n",countneg);}
getch();
}
