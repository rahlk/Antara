#include<stdio.h>
int main()
{
    int i,t,b;
    scanf("%d",&t);
    int n;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        b=2n-1;
        char a[b];
        scanf("%s",a);
        for(i=0;a[i]!=0;i++)
        {
            if(a[i]=='E')
                a[i]='S';
            else
                a[i]='E';
        }
        printf("%s",a);
        
    }
}