#include<stdio.h>
#include<string.h>
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[2*n-2];
        scanf("%s",a);
        int l=2*n-2;
        if(a[0]=='E')
            b[0]='S';
        else b[0]='E';
        for(int i=1;i<l;i++)
        {
            if(a[i]=='S')
                a[i]='E';
            else a[i]='S';
        }
        printf("%s\n",a);
    }
}