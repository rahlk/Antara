#include <stdio.h>
#include <string.h>

int main()
{
    int cases;
    char n[105];
    int a[105], b[105];
    
    scanf("%d", &cases);
    for (int cas = 1; cas <= cases; cas++)
    {
        scanf("%s", &n);
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        int len = strlen(n);
        
        for (int i = 0; i < len; i++)
        {
            if (n[i] == '4')
            {
                a[i] = 1;
                b[i] = 3;
            }
            else
            {
                a[i] = 0;
                b[i] = n[i] - 48;
            }
        }
        
        printf("Case #%d: ", cas);
        for (int i = 0 ;; i++)
        {
            if (a[i] != 0)
            {
                for (int j = i; j < len; j++)
                {
                    printf("%d", a[j]);
                }
                break;
            }
        }
        printf(" ");
        for (int i = 0 ;; i++)
        {
            if (b[i] != 0)
            {
                for (int j = i; j < len; j++)
                {
                    printf("%d", b[j]);
                }
                break;
            }
        }
        printf("\n");
    }
    
    return 0;
}