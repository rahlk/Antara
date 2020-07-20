#include<stdio.h>
#include<stdlib.h>
int main()
{
 int tst;
 scanf("%d",&tst);
 int i;
 i=0;
 while(i<tst)
 {
  int n,q;
  scanf("%d %d",&n,&q);
  int a[n],b[n];
  char c[n];
  int j;
  for(j=0;j<n;j++)
   scanf("%d %d %c",&a[j],&b[j],&c[j]);
  if(n==1)
  {
   if(c[0]=='N')
   {
    printf("Case %d: %d %d",i+1,0,b[0]+1);
   }
   else if(c[0]=='S')
   {
    printf("Case %d: %d %d",i+1,0,b[0]-1);
   }
   else if(c[0]=='E')
   {
    printf("Case %d: %d %d",i+1,a[0]+1,0);
   }
   else if(c[0]=='W')
   {
    printf("Case %d: %d %d",i+1,a[0]-1,0);
   }
  }
  else
  {
   int a1[n],b1[n];
   for(j=0;j<n;j++)
   {
    if(c[j]=='N')
    {
     a1[j]=a[j];
     b1[j]=b[j]+1;
    }
    else if(c[j]=='S')
    {
     a1[j]=a[j];
     b1[j]=b[j]-1;
    }
    else if(c[j]=='E')
    {
     a1[j]=a[j]+1;
     b1[j]=b[j];
    }
    else if(c[j]=='W')
    {
     a1[j]=a[j]-1;
     b1[j]=b[j];
    }
   }
   int x,y,v1,v2,t1[n],count;
   for(x=0;x<n;x++)
   {
    v1=a1[x];
    v2=b1[x];
    count=0;
    for(y=x+1;y<n;y++)
    {
      if(a1[y]==v1&&b1[y]==v2)
       count++;
    }
    t1[x]=count;
   }
   int max=t1[0];
   for(x=0;x<n;x++)
   {
    if(t1[x]>max)
     {
    max=t1[x];
    }
   }
   for(x=0;x<n;x++)
   {
    if(t1[x]==max)
   {
     v1=a1[x];
     v2=b1[x];
     break;
    }
   }
   /*for(x=0;x<n;x++)
    printf("%d %d	%d  %d\n",a1[x],b1[x],t1[x],max);*/
   printf("Case %d: %d %d",i+1,v1,v2);
  }
 i++;
 }
 return 0;
}