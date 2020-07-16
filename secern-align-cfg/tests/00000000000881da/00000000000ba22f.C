#include<stdio.h>
int main()
{
    int t,i=1;scanf("%d",&t);
    while(t--)
    {
        int n;scanf("%d",&n);
        char s[n];scanf("%s",s);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='S')
            {
               s[i]='E';
            }
            else if(s[i]=='E')
            {
                s[i]='S';
            }
            
        }
        printf("Case %d: %s",i++,s);
    }
}