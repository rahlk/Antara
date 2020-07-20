#include <stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        scanf("%d",&n);
        char st[2*n-2];
        char ans[2*n-2];
        scanf("%s",st);
        for(int i=0;i<2*n-2;i++)
        {
            if(st[i]=='S')
            {
                ans[i]='E';
            }
            else
            ans[i]='S';
        }
        printf("Case #%d: %s\n",t,ans);
        t--;
    }
}