#include<stdio.h>
#include<conio.h>

void main()
{int i,j;
struct tab{char name[20];int marks;char grade;float percentage;};
struct tab sheet[3];
clrscr();
for(i=0;i<3;i++){
printf("Enter Name,Marks,Grade,Percentage\n");
scanf("%s%d%c%d",&sheet[i].name,&sheet[i].marks,&sheet[i].grade,&sheet[i].percentage);
}
printf("Names\n");
for(j=0;j<3;j++){printf("\n%s",sheet[j].name);}
printf("\t\tMarks\n");
for(j=0;j<3;j++){printf("\t\t\n%d",sheet[j].marks);}
printf("\t\t\tGrade\n");
for(j=0;j<3;j++){printf("\t\t\t\n%d",sheet[j].grade);}
printf("\t\t\t\tPerecentage\n");
for(j=0;j<3;j++){printf("\t\t\t\t\n%d",sheet[j].percentage);}
getch();
}