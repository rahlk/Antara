#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, k = 0;
    char input[128], out1[128], out2[128];
    char q, w, e;
    scanf("%d\n",&i);
    while(k++ < i)
    {
        gets(input);
        j = strlen(input);
        out1[j] = 0;
        out2[j] = 0;
        while(j--)
        {
            q = input[j] - '0';
            // 9-> w=4 e=5
            // 8-> w=4 e=4
            // 7-> w=3 e=4
            w = q / 2;
            e = q - w;
            if(e == 4 || w == 4) { w--; e++; }
            out1[j] = w + '0';
            out2[j] = e + '0';
        }
        j = 0;
        while(out1[j] == '0') j++;
        printf("Case #%d: %s %s\n", k, out1+j, out2);
    }
    return 0;
}