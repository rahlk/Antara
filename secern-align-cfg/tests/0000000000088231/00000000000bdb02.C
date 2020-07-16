#include<stdio.h>
int main()
{
    int T ,  i , mod , s , count,val=0 , j;
    scanf("%d",&T);

    for(i=2;i<=T/2;i++)
       {

        mod = T%i;
        s = T-mod;
        val+=1;
       }
    for(count=1;count<=val;count++)
    printf("Case #%d: %d %d\n",count,mod,s);

    return 0;
}
