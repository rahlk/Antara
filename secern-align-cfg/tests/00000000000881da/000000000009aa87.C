#include<stdio.h>
#include<string.h>
int main()
{
    int t,dim[1000],i=0,j,k;
    char e='E';
    char s='S';
    char a[1000][1000],ss[1000][1000]={""};
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&dim[i]);
        scanf("%s",a[i]);
        for(j=0;j<strlen(a[i]);j++)
        {
            if(a[i][j]==e)
                sprintf(ss[i], "%s%c",ss[i],s);
            else if(a[i][j]==s)
                sprintf(ss[i], "%s%c",ss[i],e);
        }
    }
    for(k=0;k<t;k++)
    {
        printf("Case #%d: %s\n",k+1,ss[k]);
    }
    return 0;
}