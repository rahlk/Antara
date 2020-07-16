#include<stdio.h>
int main()
{
int n,a[11],i,k;
scanf("%d",&n);
for(i=1;i<n+1;i++)
{
    scanf("%d",&a[i]);
  if(a[i]!=0)
  {
      k=a[i];
      a[i]=a[i]/10;
      
  
  }
  a[i]=a[i]%10;
}
for(i=1;i<n+1;i++)
{
  if(a[i]==4)
  {
    printf("Case #%d: %d %d\n",i,k/2,k/2);
  }

  else
  {
  return 0;
  }
}
  
  return 0;
}