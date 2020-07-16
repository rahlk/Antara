#include<stdio.h>
int main()
{
    int t,m=1,i;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[2*n-2];
        scanf("%s",a);
        printf("Case #%d: ",m++);
        for(i=0;i<2*n-2;i++)
        {
            if(a[i]=='S')
            printf("E");
            else
            printf("S");
        }
        printf("\n");
    }
}