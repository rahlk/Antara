#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int c=1;
    while(t--)
    {
        int n;
        char a[n];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%c",&a[i]);
            if(a[i]=='R')
                a[i]='P';
            else if(a[i]=='P')
                a[i]='S';
            else
                a[i]='R';
        }
        
    printf("Case #%d: %c",c,a[0]);
        c++;
    }
}