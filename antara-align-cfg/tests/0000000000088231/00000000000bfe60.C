#include<stdio.h>
void main ()
{
    int n,A,B,i,j;
printf("Enter n");
scanf("%d",&n);
scanf("%d",&A);
scanf("%d",&B);
for(i=0;i<=n;i++)
{
    for(j=1;j<=n;j++)
    if(A&&B!=4||A+B==n)
    {
      printf("%d %d",&A,&B);
    }
    else
    {
        printf("%d%d",&A,&B);
    }
}
}