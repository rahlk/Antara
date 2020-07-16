#include<stdio.h>
#include<stdlib.h>
int main()
{ int a[100],b,i,j;
  printf("enter the size of the no\n");
  scanf("%d",&b);
  printf("enter the number\n");
  for(i=0;i<b;i++) 
  scanf("%d",&a[i]);
  for(i=0;i<b;i++)
{   for(j=0;j<b;j++)
  {   if(a[i]==4)
    {    a[i]==2;
        a[j]==a[i]-(2*10^(b-i));
    }
  }
}
printf("the two numbers are %d %d\n,a[i],a[j]");
return 0;
}
