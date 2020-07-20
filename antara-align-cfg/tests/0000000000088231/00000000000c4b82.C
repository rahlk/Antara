#include<stdio.h>
int main()
{
  int i,j,k,N,a[100],c,b;
  printf("enter the number of test cases:");
  scanf("%d",&i);
  for(k=0;k<i;k++)
  {
    printf("enter the value of N:");
    scanf("%d",&N);
    N=c;
    for(b=0;N/10!=0;b++)
     N=N/10;
    N=c;
    for(j=0;N/10!=0;j++)
    {
      
      a[j]=N%10;
      if(a[j]==4)
       a[j]=2;
       i=j;
      N=N/10;
    }
    for(j=b;j>=0;j--)
      printf("%d",a[j]);
    b=2*pow(10,i);
    printf("\t%d",b);
  }
}