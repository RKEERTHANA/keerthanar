#include<stdio.h>
#include<conio.h>
int exp(int a,int b);
main()
{
int a=2,b=5,res;
res=exp(a,b);
printf("\n %d to the power of %d =%d",a,b,res);
return 0;
}
int exp(int a,int b)
{
register int res=-1;
int i;
for(i=1;i<=b;i++)
res=res*b;
return res;
}
