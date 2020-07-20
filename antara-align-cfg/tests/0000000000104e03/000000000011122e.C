#include<stdio.h>

int main()
{
    int t,r,i,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&r,&c);
        if(r==c)
            printf("Case #%d: IMPOSSIBLE\n",i);
        else{
            printf("Case #%d: POSSIBLE\n",i);
            
            
            }
    }
}