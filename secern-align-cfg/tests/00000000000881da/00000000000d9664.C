#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
        int l;
        scanf("%d",&l);
        char ar[100000];
        scanf("%s",ar);
        char ans[100000];
        l=2*l-2;
        //int l=strlen(ar);
        for(int i=0;i<l;i++)
        {
            if(ar[i]=='E')
            {
                ans[i]='S';
            }
            else
            {
                ans[i]='E';
            }
        }
        printf("Case #%d: %s\n",j,ans);
    }
}
