#include<stdio.h>
int main()
{
    int T , N , i , mod , s , count=0 , j;
    scanf("%d",&T);
    
    for(i=2;i<=N;i++)
    {
        mod = N%i;
        s = N-i;
        count+=1;
        
    }
    for(j=1;j<=count;i++)
    {
        printf("Case #%d: %d %d",j,mod,s);
    }
    return 0;
}