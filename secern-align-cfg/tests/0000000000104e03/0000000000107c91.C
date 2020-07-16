#include<stdio.h>
int a[20][20],b[20],c[20],h;
int main()
{
  int t,n,i,j,m,p=1,x,y,k,mul;
  
  scanf("%d",&t);
  while(t--)
  {
    printf("Case #%d: ",p++);
    scanf("%d %d",&n,&m);
    mul=m*n;
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    a[i][j]=1;
    x=y=h=0;
    for(i=0,k=0;i<n&&k!=mul;i++)
    for(j=0;j<m&&k!=mul;j++)
    {
      if((x==i||y==j||x-y==i-j||x+y==i+j) || !a[i][j])
      {k++;continue;}
      a[i][j]=0;
      b[h++]=i+1;
      c[h-1]=j+1;
      x=i;y=j;k=0;i=-1;j=-1;
      break;
    }
   
    if(h!=mul)
    printf("IMPOSSIBLE\n");
    else
    {
      printf("POSSIBLE\n");
    for(i=0;i<h;i++)
    printf("%d %d\n",b[i],c[i]);
    }
  }
}