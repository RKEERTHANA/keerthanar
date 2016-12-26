#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,sum=0;
printf("\n enter the value:");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum=sum+1;
i++;
}
printf("sum=%d",sum);
return 0;
}
