#include<stdio.h>
#include<conio.h>
main()
{
  int cp,sp,l,p;  //cp=cost price,sp=selling price,l=loss,p=profit
  clrscr();
  printf("Enter Cost Price of an item : RS ");
  scanf("%d",&cp);
  printf("Enter Selling Price of an item : RS ");
  scanf("%d",&sp);
  if(cp>sp) // Loop for Loss
  {
    l=cp-sp;
    printf("You have made LOSS. Your Loss is RS %d",l);
  }
  else if(sp>cp) // Loop for Profit
  {
    p=sp-cp;
    printf("You have gain PROFIT. Your Profit is RS %d",p);
  }
  else if(sp=cp) // Loop for no Loss no Profit
  {
    printf("You have neither Loss nor Profit");
  }
  getch();
}
