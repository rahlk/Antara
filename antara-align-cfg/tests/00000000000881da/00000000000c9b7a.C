#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[2 * n];
        scanf("%s",s);
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
