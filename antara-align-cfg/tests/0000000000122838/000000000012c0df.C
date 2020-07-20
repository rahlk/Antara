#include<stdio.h>
#include<stdlib.h>
int main()
{
int t;
scanf("%d",&t);
for(int i=0;i<t;i++)
{
  int c=0;
  int n,d;
  scanf("%d %d",&n,&d);
  int a[n],b[n];
  for(int j=0;j<n;j++)
  {
    scanf("%d",&a[j]);
  }
  for(int k=0;k<n;k++)
  {
    scanf("%d",&b[k]);
  }
  for(int j=0;j<n;j++)
  {
    for(int k=0;k<n;k++)
    {
        if(a[j]!=0)
    if(abs(a[j]-b[k])>=0&&abs(a[j]-b[k])<=d)
    c++;
    }
  }
  printf("Case #%d: %d",i+1,c);
}
return 0;
}