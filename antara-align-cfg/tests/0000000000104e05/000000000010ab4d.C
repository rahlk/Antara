#include<stdio.h>

int main()

{

int x;


int count1;
char p[52];
int j,w,l,m,largest,t;
scanf("%d",&x);
int i;


for(i=0;i<x;i++)
{
char a[1000][52];

scanf("%d",&j);
int count3[j];
for(t=0;t<j;t++)count3[t]=0;
for(w=0;w<j;w++)
{
scanf("%s",a[w]);
}
for(m=0;m<j;m++)
{
for(w=0;a[m][w]!='\0';w++)p[w]=a[m][w];
p[w]='\0';
for(w=0;a[m][w]!='\0';w++);
count1=w;
for(w=0;w<=j;w++)
{
for(l=0;a[w][l]!='\0';l++);
if(p[count1-1]==a[w][l-1])
{
count3[m]++;
}
}
}
largest=count3[0];
for(m=1;m<j;m++)
{
if(largest<count3[m])largest=count3[m];
}
if(largest==1)
{
printf("Case #%d: %d",i+1,largest-1);
}
else if(count1==2)
{
printf("Case #%d: 2");
}
else
{
printf("Case #%d: %d",i+1,largest);
}
}

return 0;

}