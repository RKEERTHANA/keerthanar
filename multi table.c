#include<stdio.h>
#include<conio.h>
int main()
{
int i,j;
for(i=1;i<=20;i++)
{
printf("\n\n\n\t\t multiplication table of %d",i);
printf("\n ********************");
for(j=1;j<=20;j++)
printf("\t %d x %d",i,j,(i*j));
}
getch();
return 0;
}
