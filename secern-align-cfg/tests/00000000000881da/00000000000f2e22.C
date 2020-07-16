#include<stdio.h>
int main()
{
    int i,j,t,b;
    scanf("%d",&t);
    int n;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        b=(2*n)-1;
        char a[b];
        scanf("%s",a);
        for(j=0;j<b-1;j++)
        {
            if(a[j]=='E')
                a[j]='S';
            else
                a[j]='E';
        }
        printf("%s",a);
        
    }
    return 0;
}