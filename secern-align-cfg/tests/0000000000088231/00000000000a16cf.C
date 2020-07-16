#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1001

int main(void)
{
    int t;
    char str[MAX];
    char a[MAX], b[MAX];
    int i, j;
    int len;
    int flag;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", str);
        len = strlen(str);
        a[len] = 0;
        b[len] = 0;
        for(j = len-1; j>=0; j--)
        {
            if(str[j] == '4')
                a[j] = '1', b[j] = '3';
            else
                a[j] = str[j], b[j] = '0';
        }
        printf("Case #%d: ",i+1);
        flag = 1;
        for(j = 0; j< len; j++)
        {
            if(flag && a[j] == '0')
            {
                continue;
            }
            else
            {
                flag = 0;
                printf("%c",a[j]);
            }
        }
        printf(" ");
        flag = 1;
        for(j = 0; j< len; j++)
        {
            if(flag && b[j] == '0')
            {
                continue;
            }
            else
            {
                flag = 0;
                printf("%c",b[j]);
            }
        }
        printf("\n");    
    }

    return 0;
}
