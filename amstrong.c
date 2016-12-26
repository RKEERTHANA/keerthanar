#include<stdio.h>
#include<conio.h>
int main()
{
int n,reverse=0,rem,temp;
printf("\n enter the number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rem=temp%10;
reverse=reverse*10+rem;
temp=temp/10;
}
if(reverse==n)
printf("\n %d is an amstrong number");
else
printf("\n %d is not an amstrong number");
return 0;
}
