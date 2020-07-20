#include<stdio.h>
#include<string.h>
int main()
{
    int p, t;
    scanf("%d",&t);
    for(p=0;p<t;p++)
    {
        int i, j, n,m;
        m=p+1;
        scanf("%d",&n);
        j=(2*n)-2;
        char q[j];
        scanf("%s",q);
        printf("\nCase #%d: ",m);
        for(i=0;i<j;i++)
        {
            if(q[i]==E)
            {
                printf("S");
            }
            if(q[i]==S)
            {
                printf("E");
            }
        }
    }
    return 0;
}