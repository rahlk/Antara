#include<stdio.h>
int main()
{
int a[100][100],i,j,pylon;
pylon=a[1][1];
while(1)
{
    scanf("%d %d",&i,&j);
    if(i==1 && j==1 && i-j==1-1 && i+j==1+1)
    {
        printf("Case #1: IMPOSSIBLE");
    }
    else
    printf("Case #2: POSSIBLE");
    a[i][j]=pylon;
}
}