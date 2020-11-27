#include<stdio.h>
#include<conio.h>

void main()
{ int i,j;
struct books{char bookname[200];int price;char arthur[200];int ed;int yopb;};
struct books type[3];
clrscr();
for(i=0;i<3;i++)
{printf("Book Name,Arthru Name,Edition,Year of Publish,Price");
scanf("%s%s%d%d%d",&type[i].bookname,&type[i].arthur,&type[i].ed,&type[i].yopb,&type[i].price);
}
for(j=0;j<3;j++)
{
printf("%s\n",type[j].bookname[200]);
printf("%s\n",type[j].arthur[200]);
printf("%d\n",type[j].yopb);
printf("%d\n",type[j].ed);
printf("%d\n",type[j].price);}
getch();
}