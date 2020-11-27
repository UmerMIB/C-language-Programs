#include<stdio.h>
#include<stdlib.h>
int sumsqr (int,int);
int sum(int,int);
int sqr (int);
int main()
{
	int num1,num2;
	printf("Type two numbers");
	scanf("%d %d",&num1,&num2);
	printf("the sum of squares is %d",sumsqr(num1,num2));
	
}

 int sum(int i,int j)
 {
 	return (i+j);
 }

int sqr (int z)
{
	return (z*z);
 } 
 
 int sumsqr (int i,int j) 
 {
 	return (sum(sqr (i),sqr(j)));
 }
