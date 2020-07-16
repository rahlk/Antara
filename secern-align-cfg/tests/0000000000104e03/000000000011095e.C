#include<stdio.h>
int main()
{
    int t,R,i,j,C,flag=0,q=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d",&R,&C);
        for(i=1;i<=R;i++)
        {
            for(j=1;j<=C;j++)
            {
                if(i==1||j==1)
                { q++;}
                else if(i+j==2||i-j==0)
                { q++;}
                else
                 flag=1;
                 
            }
        }  if(flag==1)
         { printf("\nCase #2: POSSIBLE\n");
            for(i=1;i<=R;i++)
              {
                  for(j=1;j<=C;j++)
                     {
                         printf("%d %d\n",i,j);
                     }
              }
    }
        else
          printf("Case #1: IMPOSSIBLE");
       
    t--;
    }
}