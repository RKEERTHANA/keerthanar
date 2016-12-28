#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
int fact=1;
scanf("%d",&n);
if(n>0)
{
for(i=1;i<=n;i++)
fact*=i;
printf("factorial=%d",fact);
}
else
printf("negative number");
return 0;
}
