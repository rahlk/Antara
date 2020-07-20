#include <stdio.h>

int main()
{
    int t, k, i;
    char m[100][10000];
    scanf("%d", &t);
    for(k = 0; k < t; k++)
    {
        scanf("%*d%*c%s", m[k]);
    }
    for(k = 0; k < t; k++)
    {
        i = 0;
        while(m[k][i] != '\0')
            m[k][i] = m[k][i] == 'S' ? 'E' : 'S', i++;
        printf("Case #%d: %s\n", k+1, m[k]);
    }
    return 0;
}
