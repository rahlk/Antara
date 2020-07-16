#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    int n;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        char a[(2*n)-1];
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