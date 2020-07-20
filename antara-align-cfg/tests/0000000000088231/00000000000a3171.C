#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int T;
    int N;
    scanf("%d", &T);
    for(int i = 0; i<T; i++)
    {
        scanf("%d", &N);
        
        int num = N;
        char str[11];
        for(int x = 0; x<10; x++ )
        {
            str[x] = '0';
        }
        for(int j = 9;num > 0;j--)
        {
            if (num % 10 == 4)
            {
                str[j] = '1';
            }
            num /= 10;
        }
        printf("Case #%d: %d %d\n", i+1, N - atoi(str), atoi(str));
    }
}
