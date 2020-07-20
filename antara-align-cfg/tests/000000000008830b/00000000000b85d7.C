#include <stdio.h>

void eratostene(char *a,int old, int n)
{
    for(int i = old; i <=n; i++)
        if(a[i] == 0)
            for(int j = (i << 1); j <= n; j = j+i)
                a[j] = -1;
}

int main(int argc, char *argv[])
{
    int n, index = 0,t,l, old = 2;
    long litere[26], nr[100];
    char a[10000+1] = {0};

    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        index = 0;
        scanf("%d %d", &n, &l);
        
        if(n > old) {
            eratostene(a,old,n);
            old = n;
        }
        
        for(int j = 0; j < l; j++) 
            scanf("%ld", &nr[j]);
        
        for(int k = 0; k < l; k++)
            if(nr[k] % 2 == 0) {
                litere[index++] = 2;
                break;
            }
        
        for(int j = 3; j <= n; j = j + 2) {
            if(a[j] == 0) {
                for(int k = 0; k < l; k++)
                    if(nr[k] % j == 0)  {
                        litere[index++] = j;
                        break;
                    }
            }
            if(index == 26)
                break;
        }
 
        for(int j = 0; j < 26; j++)
            if(nr[0] % litere[j] == 0 && nr[1] % litere[j] == 0) {
                nr[0] /= litere[j];
                nr[1] /= litere[j];
                int aux = 0;
                while(litere[aux] != nr[0])
                    aux++;
                printf("Case #%d: %c%c",i,'A' + aux,'A' + j);
                break;
            }
        for(int k = 1; k < l; k++)
            for(int j = 0; j < 26; j++)
                if(nr[k] == litere[j]) {
                    putchar('A' + j);
                    nr[k+1] /= nr[k]; 
                    break;
                }
        if(i < t)
            putchar('\n');
    }
    return 0;
}