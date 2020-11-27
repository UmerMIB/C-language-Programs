#include<stdio.h>
#include<conio.h>
void main()
{
float num1,num2;
char ch;
char op;
clrscr();
printf("Enter num1,operator,num2\n");
scanf("%f%c%f",&num1,&op,&num2);
switch(op)
{
case '+':printf("=%f",num1+num2);break;
case '-':printf("=%f",num1-num2);break;
case '*':printf("=%f",num1*num2);break;
case '/':printf("=%f",num1/num2);break;
}
getch();
}

