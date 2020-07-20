#include<stdio.h>
int main()
{
    int n,n1, n2, n3, i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &n1);
        n2=n1/3;
        n3=(n1%3)+(n2*2);
        printf("Case #%d: %d %d\n",i,n2,n3);
    }
    return 0;
}
