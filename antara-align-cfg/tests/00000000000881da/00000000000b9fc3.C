#include<stdio.h>
#include<string.h>

int main(void)
{
    int testcase, ca = 1;
    scanf("%d", &testcase);
    while (ca <= testcase) {
        unsigned int n;
        scanf("%u", &n);
        char lydia[100001];
        scanf("%s", lydia);
        unsigned int east, south;
        east = south = n - 1;
        
        printf("Case #%d: ", ca++);
        for (unsigned int i = 0, l = strlen(lydia); i < l; i++) {
            if (!east || !south)
                break;
            if (lydia[i] == 'S') {
                printf("E");
                east--;
            }
            else {
                printf("S");
                south--;
            }
        }
        while (east-- > 0)
            printf("E");
        while(south-- > 0)
            printf("S");
        printf("\n");
    }
}