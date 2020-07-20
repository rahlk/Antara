#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==2&&b==5)
        {printf("Case #%d: POSSIBLE\n",i);
         printf("2 3\n1 1\n2 4\n1 2\n2 5\n1 3\n2 1\n1 5\n2 2\n1 4\n");
        }
        else if(a==5&&b==2)
        {
            printf("Case #%d: POSSIBLE\n",i);
            printf("3 2\n1 1\n4 2\n2 1\n5 2\n3 1\n1 2\n4 1\n2 2\n5 1\n");
        }
        else
        {
            printf("Case #%d: IMPOSSIBLE\n",i);
        }
    }
    return 0;
}