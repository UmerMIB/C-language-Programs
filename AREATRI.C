#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c;
	float s,area;
	clrscr();
	printf("Enter three sides of triangle : ");
	scanf("%f%f%f",&a,&b,&c);
if((a+b)>c&&(b+c)>a&&(a+c)>b)
{
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of the triangle is: %f",area);

}
else{
printf("Values are not valid ");
}
getch();	
}