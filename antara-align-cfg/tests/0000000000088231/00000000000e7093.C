#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[10000],a[10000],b[10000];
    int i,ln,j;
    int t;
    scanf("%d",&t);
    for(i = 0; i < t ; i++)
    {
        scanf("%s",&s);
        ln = strlen(s);
        for(j=0;j<ln;j++)
        {
            if(s[j]== 4)
            {
                a[j] = 3;
                b[j] = 1;
            }
            else
            {
                a[j] = s[j];
                b[j] = 0;
            }
        }
        printf("case #%d: %s %s",t,a,b);

    }
    return 0;
}
