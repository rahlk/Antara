#include<stdio.h>
int grid[11][11];
int main(void)
{
    int p,q,i,j,test,t;
    scanf("%d",&t);
    for(test=0;test<t;test++)
    {
        
        scanf("%d%d",&p,&q);
        for(i=0;i<=q;++i)
        for(j=0;j<=q;++j)
           grid[i][j]=0;
        while(p>0)
        {
    
        int x,y;
        char ch[2];
        scanf("%d%d%s",&x,&y,ch);
         
        if(ch[0]=='N')
        {
         
        for(i=0;i<=x;++i)
        {
            for(j=y+1;j<=q;++j)
              grid[i][j]++;
        }
          
        }
        else if(ch[0]=='S')
        {
           for(i=0;i<=x;++i)
          {
            for(j=0;j<=y-1;++j)
              grid[i][j]++;
          }
          
        }
        else if(ch[0]=='E')
        {
           for(i=x+1;i<=q;++i)
          {
            for(j=0;j<=y;++j)
              grid[i][j]++;
          }
          
        }
        else if(ch[0]=='W')
        {
           for(i=0;i<=x-1;++i)
          {
            for(j=0;j<=y;++j)
              grid[i][j]++;
          }
          
        }
        p--;
        }
        int max=0,xx,yy;
        for(i=0;i<=q;++i)
        for(j=0;j<=q;++j)
        {
            if(grid[i][j]>max)
              {
                  max=grid[i][j];
                  xx=i;
                  yy=j;
              }
             else if(grid[i][j]==max && (i+j)<(xx+yy))
             {
                 xx=i;
                 yy=j;
             }
        }
        printf("Case #%d: %d %d\n",test+1,xx,yy);
        
    }
    return 0;
}
