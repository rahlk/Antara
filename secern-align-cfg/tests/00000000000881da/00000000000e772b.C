#include<stdio.h>
int main(void)
{
    int t,i = 1;
    scanf("%d",&t);
    while(i <= t)
    {
        long n;
        int a = 0;
        scanf("%ld",&n);
        char l[2 * n - 2];
        scanf("%s",l);
        printf("Case #%d:",i);
        while(l[a] != '\0')
        {
            if(l[a] == 'S')
            {
                printf("E");
            }
            else
            {
                printf("S");
            }

            a++;
        }
        printf("\n");
        i++;
    }

    return 0;
}