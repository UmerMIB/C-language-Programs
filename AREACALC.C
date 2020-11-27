#include<stdio.h>
#include<conio.h>
#include<math.h>
double area;
double radius;
void surfacearea(double radius){
area=(4*3.141*pow(radius,2));
printf("Area is =%f",area);
}
void main(){
clrscr();
printf("Enter Radius\n");
surfacearea(4);
getch();
}