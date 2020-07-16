#include <stdio.h>

void eratostene(int *a,int old, int n)
{
    for(int i = old; i <=n; i++)
        if(a[i] == 0)
            for(int j = (i << 1); j <= 10000; j = j+i)
                a[j] = -1;
}

int main(int argc, char *argv[])
{
    int n, index = 0,t,l, old = 2;
    long litere[26], nr[101];
    int a[10000+1] = {0};
    char res[102];

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

        // for (int j1 = 0; j1 < 26; j1++)
        //   printf("%c %d\n",'A'+ j1, litere[j1]);

        for(int j = 0; j < 26; j++)
            if(nr[0] % litere[j] == 0 && nr[1] % litere[j] == 0) {
                nr[0] /= litere[j];
                nr[1] /= litere[j];
                int aux = 0;
                while(litere[aux] != nr[0])
                    aux++;
                res[0] = 'A' + aux;
                res[1] = 'A' + j;
                break;
            }
        index = 2;
        for(int k = 1; k < l; k++)
            for(int j = 0; j < 26; j++)
                if(nr[k] == litere[j]) {
                    res[index++] = 'A' + j;
                    if(k != l -1)
                        nr[k+1] /= nr[k];
                    break;
                }
        res[index++] = '\0';
        printf("Case #%d: %s\n",i,res);

    }
    return 0;
}
