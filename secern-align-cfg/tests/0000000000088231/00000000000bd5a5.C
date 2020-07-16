#include<stdio.h>
int main()
{
    int T ,  i , mod , s , count=0 , j;
    scanf("%d",&T);


        mod = T%2;
        s = T-mod;
        count+=1;



        printf("Case #1: %d %d",mod,s);

    return 0;
}
