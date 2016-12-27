#include<stdio.h>
#include<conio.h>
int main()
{
int num,sum=0,r,n;
printf("\n enter the number:");
scanf("%d",&num);
n=num;;
while(n>0)
{
r=n%10;
sum+=pow(r,3);
n=n/10;
}
if(sum==num)
printf("\n %d is armstrong number",num);
else
printf("\n %d is not armstrong number",num);
return 0;
}
