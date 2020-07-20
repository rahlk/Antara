#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int x=1 ; x <= t;x++)
    {
        int n;
        scanf("%d",&n);
        char s[2 * n];
        scanf("%s",s);
        printf("Case #%d: ",x);
        for(int i = 0 ; i < 2 * n - 2 ; i ++)
        {
            if(s[i] == 'S')
                printf("E");
            else
                printf("S");
        }
        printf("\n");
    }
}
