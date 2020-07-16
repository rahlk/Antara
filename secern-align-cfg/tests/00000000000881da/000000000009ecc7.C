#include <stdio.h>
int main()
{
    int t;
     char v;
    scanf("%d",&t);
     scanf("%c",&v);
    for(int j=1;j<=t;j++)
    {
        int n;
        scanf("%d",&n);
         scanf("%c",&v);
        char st[2*n-2];
        char ans[2*n-2];
        scanf("%s",st);
        scanf("%c",&v);
        for(int i=0;i<2*n-2;i++)
        {
            if(st[i]=='S')
            {
                ans[i]='E';
            }
            else
            ans[i]='S';
        }
        for(int i=0;i<2*n-2;i++)
        {
            printf("%c",ans[i]);
        }
        printf("\n");
    }
    return 0;
}