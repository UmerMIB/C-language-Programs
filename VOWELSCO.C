#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char str[99];
    char v[]="aeiouAEIOU"; //v[0]=a , v[1]=e, v[2]=i , v[5]=A
    int i,j,count=0;
    int consto=0;
    system("CLS");
scanf("%[^\n]",&str);
//for(i=0;i<99;i++)
//{
//	scanf("%c",&std[i])
//}
//	AEIO		STR[0] =A , STR[1] =E
for(i=0;str[i];i++)
{
   for(j=0;v[j];j++)
	{ 
	   if(str[i]==v[j])
		{
    	count++;
		}
	}
}
printf("Vowels=%d",count);
printf("\nConstonat=%d",i-count);
getch();
}
