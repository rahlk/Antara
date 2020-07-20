#include <stdio.h>
#define N 20

int a[N+1][N+1];
int res[N*N+1][2];
int t,r,c;
int isfnsh=0;
int it;

void input(void)
{
    scanf("%d %d",&r,&c);
}

void process(int x,int y,int cnt)
{
    int i,j;
    
    res[cnt][0]=x;
    res[cnt][1]=y;
    if(isfnsh)
    {
        return;
    }
    if(cnt==r*c)
    {
        isfnsh=1;
        printf("Case #%d: POSSIBLE\n",it);
        for(i=1; i<=cnt; i++)
        {
            printf("%d %d\n",res[i][0],res[i][1]);
        }
    }
    else
    {
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                if(!a[i][j] && x!=i && y!=j && x-y!=i-j && x+y!=i+j)
                {
                    a[i][j]=cnt+1;
                    process(i,j,cnt+1);
                    a[i][j]=0;
                }
            }
        }
    }
}

int main(void)
{
    int j,k;
    
    scanf("%d",&t);
    for(it=1; it<=t; it++)
    {
        input();
        isfnsh=0;
        for(j=1; j<=r; j++)
        {
            for(k=1; k<=c; k++)
            {
                a[j][k]=1;
                process(j,k,1);
                a[j][k]=0;
                if(isfnsh)
                    break;
            }
            if(isfnsh)
                break;
        }
        if(!isfnsh)
        {
            printf("Case #%d: IMPOSSIBLE\n",it);
        }
    }
    return 0;
}