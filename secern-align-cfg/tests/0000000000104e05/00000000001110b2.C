#include<stdio.h>
#include<string.h>
    
int main() 
{
    int test,d;
    scanf("%d",&test);
    for(d=1;d<=test;d++)
    {
        int count=0,j,n,i,k,flag;
        scanf("%d",&n);
        char str[n][60];
        for(i=0;i<n;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=0;i<n-1;i+=2)
        {
            flag=0;
            for(j=strlen(str[i])-1,k=strlen(str[i+1])-1;j>=0,k>=0;j--,k--)
            {
                if(str[i][j]==str[i+1][k])
                {
                    flag=1;
                }
                else
                    break;
                if(flag==1)
                {
                    count+=2;
                    break;
                }
            }
        }
        printf("Case #%d: %d\n",d,count);
    }
    return 0;
}