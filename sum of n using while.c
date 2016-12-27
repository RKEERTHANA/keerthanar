#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
printf("\n enter the value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum=%d",sum);
return 0;
}
