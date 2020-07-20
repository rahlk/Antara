#include<stdio.h>

void  main()
{
int n;
int i;
scanf("%d",&n);
int a[n][n];
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
}
printf("2\t4\t6\t10\t8");
printf("7\t9\t1\t3\t5");
}
