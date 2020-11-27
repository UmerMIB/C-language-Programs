#include<stdio.h>
#include<conio.h>
int i,j,k; double sum=0;double percentage; double gp_afsum;
int marks_courses[4];double crh[4];double gpe[4]; int tsch;double gpa;
void main()
{
clrscr();
printf("Enter your marks\n");
for(i=0;i<5;i++)
{
scanf("%d",&marks_courses[i]);
}
sum=sum+marks_courses[i];
for(j=0;j<5;j++){
printf("Percentages are\t");
printf("%d%\n",marks_courses[j]);}
getch();
}
void gpa_calc()
{
gp_afsum=(sum)/(500)*100;
gpa=gp_afsum/9.5;
printf("%f",gp_afsum);
}