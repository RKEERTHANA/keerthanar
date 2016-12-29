#include<stdio.h>
#include<conio.h>
int main()
{
char ch[100],rev[100];
int len,i,index,wordStart,wordEnd;
printf("enter any string: ");
gets(ch);
len=strlen(ch);
index=0;
wordStart=len-1;
wordEnd=len-1;
while(wordStart>0)
{
if(ch[wordStart]==0)
{
i=wordStart+1;
while(i<=wordEnd)
{
rev[index]=ch[i];
i++;
index++;
}
rev[index++]==0;
wordEnd=wordStart-1;
}
wordStart--;
}
for(i=0;i<=wordEnd;i++)
{
rev[index]=ch[i];
index++;
}
rev[index]=0;
printf("original string \n%s\n\n",ch);
printf("reverse order words\n%s",rev);
return 0;
}
