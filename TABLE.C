#include<stdio.h>
#include<conio.h>
void main()
{
int tb_of;
int tb_to;
int i;
clrscr();
for(tb_of=2;tb_of<=20;tb_of++)
{for(tb_to=1;tb_to<10;tb_to++)
{printf("%dx%d=%d\n",tb_of,tb_to,tb_of*tb_to);
}
}
getch();
}
