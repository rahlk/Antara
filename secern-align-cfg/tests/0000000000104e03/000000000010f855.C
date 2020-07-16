#include<stdio.h>
int main()
{
    int t,r,c,i,j,str,stc;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            printf("%d %d",i,j);
            j++;
        }
        if(j==i){
            j=1;
        }
    }
    return 0;
}