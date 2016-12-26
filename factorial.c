#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
int num;
printf("\n enter an integer:");
scanf("\%d",&num);
printf("\n factorial of %d = %d",num,fact(num));
return 0;
}
int fact(int n)
{
if(n==1)
return 1;
return(n*fact(n-1));
}
