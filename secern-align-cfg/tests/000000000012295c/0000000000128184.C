#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int tt=1;tt<=t;tt++)
    {
        int p,q;
        scanf("%d %d",&p,&q);
        int x[q+2];
        int y[q+2];
        for(int i=0;i<q+2;i++)
        {
            x[i]=0;y[i]=0;
        }
        int a,b,i;
        char c;
        for(i=0;i<p;i++)
        {
            scanf("%d %d %c",&a,&b,&c);
            if(c=='W')
            {
                x[0]+=1;
                x[a]-=1;
            }
            else if(c=='E')
                x[a+1]+=1;
            else if(c=='N')
                y[b+1]+=1;
            else
            {
                y[0]+=1;
                y[b]-=1;
            }
        }
        for(i=1;i<q+1;i++)
        {
            x[i]=x[i]+x[i-1];
            y[i]=y[i]+y[i-1];
        }
        int max_x=-1,max_y=-1,index_x,index_y;
        for(int i=0;i<q+1;i++)
        {
            if(x[i]>max_x)
            {
                index_x=i;
                max_x=x[i];
            }
            if(y[i]>max_y)
            {
                index_y=i;
                max_y=y[i];
            }
        }
        printf("Case #%d: %d %d\n",tt,index_x,index_y);
    }
}