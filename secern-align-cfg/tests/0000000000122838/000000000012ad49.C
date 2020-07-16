#include<stdio.h>
int main()
{
    int t,n,k,c[100],d[100],i,j,count=0;
    scanf("%d",&t);
    for(i=0;i<=t;i++)
    {
    scanf("%d\n%d",&n,&k);
    for(i=0;i<n;i++){
    scanf("%d",&c[i]);}
    for(i=0;i<n;i++){
    scanf("%d",&d[i]);}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if((d[i]-c[j])<=k)
          count++;
        }
    }
    printf("Case #%d:%d",i,count);
    count=0;
    }
}