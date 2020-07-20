#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int te;
        scanf("%d",&te);
        char a[te];
        scanf("%s",a);
        for(int j=0;j<strlen(a);j++)
        {
            if(a[j]=='E')
            {
                a[j]='S';
            }
            else
            {
                a[j]='E';
            }
        }
        printf("Case #%d: %s\n",i+1,a);
    }
    return 0;
}