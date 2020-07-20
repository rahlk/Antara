#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,b,f;
        scanf("%d %d %d",&n,&b,&f);
        char s[f][n];
        for(int j=0;j<f;j++)
        {
            for(int k=0;k<n;k++)
            scanf("%c",s[j][k]);
            
        }
        int br[b];
        for(int k;k<b;k++)
        {
            scanf("%d",br[k]);
        }
        for(int j=0;j<f;j++)
        {
            int c=0;
               for(int k=br[c];k<br[b-1];k++)
                {
                    if(c<b)
                    {
                    if(k==br[c])
                    {
                        for(int l=k;l<n-1;l++)
                        s[j][l]=s[j][l+1];
                        c++;
                    }
                    }
                
                } 
            printf("%s",s[j]);
            
        }
    }
    return 0;
}