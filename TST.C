#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char str[99];
	char v[]="aeiouAEIOU";
	int i,j,count=0;
	clrscr();
	scanf("%[^\n]",&str);
	for(i=0;str[i];i++)
		{ 
			for(j=0;v[j];j++)
			{
				if(str[i]==v[j])
				{		
					printf("Vowels are %d",coun++);
				}
			}
		}
	getch();
}
