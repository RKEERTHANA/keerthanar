#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,large;
printf("\n enter the first values:");
scanf("%d",&a);
printf("\n enter the second value:");
scanf("%d",&b);
printf("\n enter the third value:");
scanf("%d",&c);
if(a>b)
{
if(a>c)
printf("\n %d is greater than %d and %d",a,b,c);
else
printf("\n %d is greater than %d and %d",c,a,b);
}
else if(b>c)
printf("\n %d is greater than %d and %d",b,a,c);
else
printf("\n %d is greater than %d and %d",c,a,b);
return 0;
}
