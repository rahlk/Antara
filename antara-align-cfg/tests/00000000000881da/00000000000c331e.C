#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        int l,k,p=0,o=0;
        char s[20];
        scanf("%d",&l);
        int a[l][l];
        scanf("%s",s);
        k=strlen(s);
        for(i=0;i<k;i++)
        {
            if(i==k-1)
            {
                continue;
            }
            a[p][o]=1;
            if(s[i]=='E')o++;
            else p++;
        }
        printf("Case #%d: ",j);
        p=0;
        o=1;
        for(i=0;i<k;i++)
        {
            if(a[p][o]==1)
            {
                printf("S");
                o--;
                p++;
            }
            else
            {
                printf("E");
                p++;
            }
        }
    }
}
