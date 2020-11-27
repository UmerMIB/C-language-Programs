#include<stdio.h>
#include<conio.h>
main()
{
float physics,maths,comp,tot,per;
clrscr();
printf("ENTER PHY MARKS=");scanf("%f",&physics);
printf("\nENTER MATH MARKS=");scanf("%f",&maths);
printf("\nENTER COMPUTER MARKS=");scanf("%f",&comp);
tot=physics+maths+comp;
per=tot/300*100;
printf("\nYOUR TOTAL MARKS ARE:%0.0f/300",tot);
printf("\nYOUR PERCENTAGE IS:%0.0f%",per);
getch();
}
