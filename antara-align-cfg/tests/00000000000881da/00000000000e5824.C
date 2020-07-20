#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x=1;
    while(x<=t)
    {
        long int n;
        char a[100001];
        long int i;
        scanf("%ld",&n);
        scanf("\n%s^\n",a);
        printf("Case #%d: ",x);
        for(i=0;i<2*n-2;i++)
        {
            if(a[i]=='E')
            printf("S");
            else
            printf("E");
        }
        printf("\n");
        x++;
    }
}        


