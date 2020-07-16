#include<stdio.h>
#include<math.h>
int main()
{
int t,n,a[100],i,j,N,a1,b[100]={0},min,flag,k,u=65,c[100]={0},j1,d[100];
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d %d",&N,&n);
for(j=0;j<n;j++)
{
   scanf("%d ",&a[j]);
}
for(j=3;j<N;j=j+2)
{
    if(a[0]%j==0)
    {
        a1=j;
       break;
    }
}
for(j1=0;j1<=n;j1++)
{
    if(j1==0)
    {
      if(a[1]%a1==0)
      {
          b[j1]=a[j1]/a1;
      }
      else
        {
            b[j1]=a1;
        }
        min=b[j1];
    }
    else
        {
        b[j1]=a[j1-1]/b[j1-1];
       }

if(min>b[j1])
{
    min=b[j1];
}
for(j=0;j<=n;j++)
{
    d[j]=b[j];
}
}

for(j=min;;j++)
{
    flag=0;
    if(j%2==0)
    {
        continue;
    }
   for(k=2;k<=sqrt(j);k++)
   {
       if(j%k==0)
       {
       flag++;
       goto l1;
       }
   }
       if(flag==0)
       {
           c[j]=u;
           u++;
           if(u==91)
           {
               break;
           }
       }
l1:;
}
printf("Case #%d: ",i);
for(j=0;j<=n;j++)
{
 printf("%c",c[d[j]]);
}
}
}