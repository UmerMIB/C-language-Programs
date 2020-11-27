#include<stdio.h>
#include<conio.h>
 main()
{
 int x,y;
 for (y=1;y<20;y++)
  {
   for(x=1;x<20;x++)
    {
     if((x+y)%2==0)
        printf("\xDB \xDB");
     else
        printf(" ");
     }
    printf("\n");
   }
  getche();
}
