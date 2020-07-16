#include<stdio.h>
#include<string.h>

void main()
{
    char a[1000],b[1000];
    int c,i,n,t,j=0;
    scanf("%d",&t);
    
    while(t--)
    {
    j++;
    scanf("%d",&c);
    scanf("%s",a);
    n=strlen(a);
    
    for(i=0;i<n;i++)
    {
        if(a[i]=='S')
        {
            a[i]='E';
        }
        else if(a[i]=='E')
        {
            a[i]='S';
        }
    }
    printf("Case #%d: %s\n",j,a);
    }
}