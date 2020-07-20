#include<stdio.h>
#include<malloc.h>
int length(int num)
{
int count=0;
while(num>0)
{
num = num/10;
count++;
}
return count;
}

int main()
{
int t,N,z,len,k,i;
int *p1,*p2;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&N);
len = length(N);
p1 = (int *)malloc(len*sizeof(int));
p2 = (int *)malloc(len*sizeof(int));
k=len-1;
for(;k!=-1;k--)
{
p1[k] = N%10;
N=N/10;
}
k=len-1;
for(;k>=0;k--)
{
if(p1[k]==4)
{
p1[k] = p1[k]-1;
p2[k] = 1;
}
else
{
p2[k] = 0;
}
}
printf("Case #%d: ",i+1);
for(k=0;k<len;k++) printf("%d",p1[k]);
printf(" ");
for(k=0;k<len;k++) printf("%d",p2[k]);
printf("\n");
}
return 0;
}
