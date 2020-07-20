#include<stdio.h>
int main()
{
 int i,n;
 scanf("%d",&n);
 int a[2*n-1];
 for(i=0;i<2*n-1;i++)
 {
   scanf("%d",&a[i]);
 }
 for(i=0;i<2*n-1;i++)
  {
    if(a[i]=='E')
    {
      a[i]='S';
    }
    else
    {
      a[i]='E';
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  return 0;
}