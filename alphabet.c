#include<stdio.h>
#include<conio.h>
int main()
{
char c;
printf("\n enter a character:\n");
scanf("%c",&c);
if((c>='a' && c<='z')(c>='A' && c<='Z'))
printf("%c is an alphabet",c);
else
printf("\n %c is not an alphabet",c);
return 0;
}
