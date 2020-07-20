#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int n1, n2, n3;
        scanf("%d", &n1);
        n2=n1/3;
        n3=(n1%3)+(n2*2);
        printf("Case #%d: %d %d\n",i,n2,n3);
    }
}
