#include<stdio.h>
int main()
{
int testcases;
scanf("%d",&testcases);
for(int p=1;p<=testcases;p++)
{
int m,num,inputSize;
scanf("%d",&num);
scanf("%d",&inputSize);
int a[inputSize],c[26];
char b[inputSize+1];
char d[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int found=0;
int count=25;
for(int z=0;z<inputSize;z++) scanf("%d",&a[z]);
for(int i=num;count>=0;i--)
{
found=0;
for(int y=2;y<=i/2;y++)
{
if((i%y)==0)
{
found=1;
break;
}
}
if(found==0)
{
c[count]=i;
count--;
}
}
int j=0;
m=a[0];
for(int i=0;i<26 && m>1;i++)
{
if((m%(c[i]))==0)
{
m=m/(c[i]);
b[j]=d[i];
j++;
}
}
for(int k=1;k<inputSize;k++)
{
m=a[k];
for(int i=0;i<26 && m>1;i++)
{
if((m%(c[i]))==0)
{
m=m/(c[i]);
if(b[j-1]!=d[i])
{
b[j]=d[i];
j++;
break;
}
}
}
}
b[j]='\0';
printf("Case #%d: %s\n",p,b);
}
return 0;
}