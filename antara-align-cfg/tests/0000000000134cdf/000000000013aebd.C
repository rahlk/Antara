#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int id=1;id<=T;id++)
    {
        int R,C,i,j,count=0,ans=0,d;
        scanf("%d %d",&R,&C);
        char A[R][C];
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            {
             scanf("%c",&A[i][j]);
             if(A[i][j]=='.')
                count++;
            }
        }
        for(i=0;i<R;i++)
        {
            d=0;
            for(j=0;j<C;j++)
            {
             if(A[i][j]!='#')
                {
                    A[i][j]='1';
                    d++;
                }
             else
                break;
            }
            if(d==C)
            {
            count=count-C;
            ans=ans+C;         
            }
        }
        for(i=0;i<C;i++)
        {
            d=0;
            for(j=0;j<R;j++)
            {
             if(A[j][i]!='#')
                {
                    A[i][j]='1';
                    d++;
                }
             else
                break;
            }
            if(d==R)
            {
            count=count-R;
            ans=ans+R;
            }
        }
     
        printf("Case #%d: %d\n",id,ans);
    }
    return 0;
}