#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j,k,A[100],st[100][300],countr[100][300],counts[100][300],countp[100][300];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",A[i]);
        for(j=0;j<A[i];j++)
        {
            scanf("%s",st[j][]);
            
        }
    }
    for(i=0;i<T;i++)
    {
        for(j=0;j<A[i];j++)
        {
           // for(k=0;k<strlen(st);k++)
            //{
            if(st[j][0]=='R')
            {
                countr[i][j]++;
            }
            else
            if(st[j][0]=='P')
            {
                countp[i][j]++;
                
            }
            else
            counts[i][j]++;
        //    }
            
        }
    }
    
    for(i=0;i<T;i++)
    {
        for(j=0;j<A[i];j++)
        {
            if(countp[i][j]==0 && countr[i][j]==0 && counts[i][j]!=0)
            {
                printf("Case #%d: S",i+1);
            
            }
            else
            
            if(countp[i][j]==0 && counts[i][j]==0 && countr[i][j]!=0)
            {
                printf("Case #%d: R",i+1);
            
            }
            else
            
            if(counts[i][j]==0 && countr[i][j]==0 && countp[i][j]!=0)
            {
                printf("Case #%d: P",i+1);
            
            }
            else
            {
                printf("Case #%d: IMPOSSIBLE",i+1);
            }
        }
    }
}