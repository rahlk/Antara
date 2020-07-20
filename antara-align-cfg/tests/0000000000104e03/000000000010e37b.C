#include<stdio.h>
int f=0,k, a[100][2],z=0;
void test(int i, int j, int r, int c)
{
    int l,m;
    for(l=1;l<=r;l++)
       {
            for(m=1;m<=c;m++)
            {
                if(i==l&&j==m)
                continue;
                if(i==l)
                   continue;
                if(j==m)
                  continue;
                if(i+j==l+m)
                continue;
                if(i-j==l-m)
                continue;
                if(f==0)
                {
                  printf("Case #%d: POSSIBLE\n",k);
                  a[0][0]=l;
                  a[0][1]=m;
                  z++;
                }
                else
                {
                      a[z][0]=l;
                      a[z][1]=m;
                      z++;
                }
                f=1;         
            }
    }
}
int main()
{
    int t;
    int count=0;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
       int r,c,i,j,l,m;
       count=0;
       scanf("%d %d",&r,&c);
       f=0;
       for(i=1;i<=r;i++)
       {
          for(j=i;j<=c;j++)
          {   
             test(i,j,r,c);
          }
       }
       if(f==0)
       printf("Case #%d: IMPOSSIBLE\n",k);
       else
       {
           for(int u=0;u<z;u++)
           {
               for(int p=u+1;p<z;p++)
               {
                   if(a[u][0]==a[p][0]&&a[u][1]==a[p][1])
                   {
                       a[p][0]=c+1;
                       a[p][1]=c+1;
                   }
               }
           }
           for(int u=0;u<z;u++)
           if(a[u][0]!=c+1&&a[u][1]!=c+1)
           printf("%d %d\n",a[u][0],a[u][1]);
       }
    }
}