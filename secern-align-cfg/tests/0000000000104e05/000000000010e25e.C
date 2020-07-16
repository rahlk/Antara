#include<stdio.h>
#include<string.h>
    
int main() 
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int count=0,j,n,i,k;
        scanf("%d",&n);
        char str[n][60];
        for(i=0;i<n;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=0;i<n-1;i+=2)
        {
            for(j=strlen(str[i])-1,k=strlen(str[i+1])-1;j>=0,k>=0;j--,k--)
            {
                if(str[i][j]==str[i+1][k])
                {
                    count++;
                }
                else
                    break;
            }
        }
        printf("%d",count);
    }
    return 0;
}
