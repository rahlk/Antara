#include<stdio.h>
#include<string.h>
int main()
{
    char a[50002];
    int i,t,l,j,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&x);
        scanf("%s",a);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]=='E')
            {
                a[j]='S';
            }
            else if(a[j]='S')
            {
                a[j]='E';
            }
        }
        printf("Case #%d: ",i);
        for(j=0;j<l;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
}

