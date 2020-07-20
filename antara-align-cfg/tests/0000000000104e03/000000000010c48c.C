#include<stdio.h>
int main()
{
    int t,v=1;
    scanf("%d",&t);
    while(t--)
    {
      int n,m,tot=1;
      scanf("%d%d",&n,&m);
      int a[n][m],x[n*m],y[n*m],i,j,k,l;
      for(i=0;i<n;i++)
      for(j=0;j<m;j++)
       a[i][j]=0;
      for(i=0;i<n*m;i++)
      {
          x[i]=0;
          y[i]=0;
      }
      a[1][2]=1;
      k=1;l=2;
      x[0]=1;
      y[0]=2;
      while(1)
      {
          if(tot==n*m)
          {
               printf("Case #%d: POSSIBLE\n",v);
                for(i=0;i<tot;i++)
                printf("%d %d\n",x[i]+1,y[i]+1);
                break;
          }
          else
          {
              int h=0;
              for(i=0;i<n;i++)
              {
              for(j=0;j<m;j++)
              {
                  if(i!=k&&j!=l&&i+j!=k+l&&i-j!=k-l&&a[i][j]==0)
                  {
                      k=i;l=j;
                      a[i][j]=1;
                      x[tot]=i;
                      y[tot]=j;
                      tot++;
                      h++;
                      break;
                  }
              }
              if(h==1)
              break;
              }
              if(h==0)
              {
              printf("Case #%d: IMPOSSIBLE\n",v);
              break;
              }
          }
      }
      v++;
    }
    return 0;
}