#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("\n enter any character:");
scanf("%c",&ch);
if(ch=='a','e','i','o','u'||ch=='A','E','I','O','U')
printf("\n %c is vowel",ch);
else
printf("\n %c is consonant");
return 0;
}
