#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,flag=0;
printf("\n enter any positive number:");
scanf("d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("\n %d is a prime number");
else
printf("\n %d is not a prime number");
return 0;
}
