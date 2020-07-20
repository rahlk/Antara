#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,r,c,i,j,str,stc;
    print("enter the no of test cases:");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d\n",&r,&c);
        if(r==c)
        {
            printf("case #1:IMPOSSIBLE\n");
        }
        printf("case #2:POSSIBLE\n");
        str=r;
        stc=c-r;
        for(i=str;i<r;i++)
        {
            for(j=stc;j<c;j++)
            {
                printf("\n %d %d",i,j);
                j++;
            if(j==c)
            {
                j=1;
            }
                
            }
        }
        return 0;
    }
}