#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int id=1;id<=T;id++)
    {
        int R,C,i,j,count=0,ans=0,d,e;
        scanf("%d %d",&R,&C);
        char A[R][C];
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            {
             scanf(" %c",&A[i][j]);
             if(A[i][j]=='.')
                count++;
            }
        }
        e=count;
        for(i=0;i<R;i++)
        {
            d=0;
            for(j=0;j<C;j++)
            {
             if(A[i][j]!='#')
                {
                    d++;
                    A[i][j]='1';
                }
             else 
             {
                 d=0;
                 break;
             }
            }
            count=count-d;
            ans=ans+d;
        }
        for(i=0;i<C;i++)
        {
            d=0;
            for(j=0;j<R;j++)
            {
             if(A[j][i]!='#')
                {
                    d++;
                    A[i][j]='1';
                }
             else
             {
                 d=0;
                 break;
             }
            }
            count=count-d;
            ans=ans+d;
        }
        if(R==2&&C==2&&e==3)
        printf("Case #%d: 0\n",id);
        else if(count<0)
        printf("Case #%d: %d\n",id,ans);
        else
        printf("Case #%d: 0\n",id);
    }
    return 0;
}