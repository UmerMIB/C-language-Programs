#include<stdio.h>
#include<conio.h>
main()
{
  int l,b,a,p; // l=length,b=breadth,a=area,p=perimeter of rectangle
  clrscr();
  printf("Enter Length of a rectangle : ");
  scanf("%d",&l);
  printf("Enter Breadth of a rectangle : ");
  scanf("%d",&b);
  p=2*(l+b);
  a=l*b;
  if(a>p)
  {        // "\n" is use for new line
    printf("\nYes! Area[%d] is greater that its perimeter[%d]",a,p);
  }
  else
  {
    printf("\nNo! Area[%d] is not greater that its perimeter[%d]",a,p);
  }
  getch();
}