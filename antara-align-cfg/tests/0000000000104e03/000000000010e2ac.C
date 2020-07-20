#include<stdio.h>
int main()
{
    int t,R,i,j,C,flag=0;
    while(t>0)
    {
        for(i=1;i<R;i++)
        {
            for(j=1;j<C;j++)
            {
                if(i==1||j==1)
                 continue;
                else if(i+j==2||i-j==0)
                 continue;
                else
                 flag=1;
                 
            }
        }
        if(flag==0)
          printf("Case #1: IMPOSSIBLE");
        else if(flag==1)
         { printf("Case #2: POSSIBLE\n");
            for(i=1;i<R;i++)
              {
                  for(j=1;j<C;j++)
                     {
                         printf("%d %d\n",i,j);
                     }
              }
    }
    t--;
    }
}