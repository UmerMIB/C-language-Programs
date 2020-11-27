#include<stdio.h>
#include<conio.h>

void main()
{int count=0;
char ch=NULL;
while(ch!='d')
{clrscr();
printf("Type letter from A-Z\n");
count=count++;
printf("%d",count);
scanf("%c",&ch);

}
printf("Correct");
}