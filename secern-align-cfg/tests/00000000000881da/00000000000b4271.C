#include<stdio.h>
int main()
{
 int T,i,j,k;
 scanf("%d",&T);
 for(k=1;k<=T;k++)
 {
    int n;
    scanf("%d",&n);
 char a[2*n-2];
 
 for(i=0;i<2*n-2;i++)
 {
   scanf("%c",&a[i]);
 }
 for(i=0;i<2*n-2;i++)
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
  printf("\nCase #%d: %s",k,a);
  return 0;
}