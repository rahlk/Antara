#include<stdio.h>
#include<string.h>
void main()
{ long N,M;
int len, i,c,T;
scanf("%d",&T);
for(i=0;i<T;i++)
{
N=M=0;
c=0;
char str[15],str1[15];
loop:printf("enter the no");
scanf("%s",str);
len=strlen(str);
for(i=0;i<len;i++)
{ if(str[i]=='4')
{c=c+1;
break;}
}
if(c==0)
{ printf("invalid input");
goto loop;
}
for(i=0;i<len;i++)
{
if(str[i]=='4')
{str1[i]='2';
}else
str1[i]=str[i];
}
str1[i]='\0';
for(i=0;i<len;i++)
{ N=(N*10)+str[i]-48;
M=(M*10)+str1[i]-48;
}
N=N-M;
printf("Case #%d: %lu %lu\n",i+1,N,M);
}
exit(0);
}