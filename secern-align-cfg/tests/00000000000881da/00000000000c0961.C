#include<stdio.h>
#include<string.h>
int main()
{
    int t,v=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        char a[2*n-1];
        scanf("%s",a);
        printf("Case #%d: ",v);
        v++;
        for(i=0;i<strlen(a);i++)
        {
        if(a[i]=='E')
        printf("S");
        else
        printf("E");
        }
        printf("\n");
    }
    return 0;
}