#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	
	
	int a,b;

	a=2;
	b=2 * (a++);
	printf("%d\n",b);
	printf("%d\n",a);
	
	
	a=2;
	b=2 * (++a);	
	printf("%d\n",b);
	printf("%d\n",a);
	
	
	/*
	for(a=0; a<5; ++a)
	{
		printf("%d  ",a);
		printf("%d  ",a);
		printf("%d  ",a);
		printf("%d  ",a);
		printf("\n");
	}
	*/

}
