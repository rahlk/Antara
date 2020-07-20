#include <stdio.h>
#define X 0
#define Y 1

int main(int argc, char const *argv[])
{
    int t;
    scanf ("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        int n;
        char str[2*1000];
        scanf ("%d", &n);
        int tam = (2*n-2);
        scanf ("%s", str);


        printf("Case #%d: ",i+1 );

        for (int i = 0; i < tam; ++i)
            if (str[i] == 'E') printf("S");
            else printf("E");
        printf("\n");
    }
    return 0;
}