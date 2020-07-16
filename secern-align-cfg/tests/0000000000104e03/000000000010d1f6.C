#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T,R,C,i,j,string,stc;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&R,&C);
        if(R==C)
        {
            printf("Case #1:IMPOSSIBLE\n");
        }
        printf("Case #2:POSSIBLE\n");
        string=R;
        stc=C-R;
        for(i=string;i<R;i++)
        {
            for(j=stc;j<C;j++)
            {
                printf("%d %d\n",i,j);
                j++;
                if(j==c)
                {
                    j==1;
                }
            }
        }
    }
    return 0;
}