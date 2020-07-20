#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,k;
    int ii,jj,kk;
    int now;
    int max;
    int maxi;
    int res;
    int len;
    int count=0;
    char line[1000];
    int ss[100];
    int ans;
    int sum;
    char n[200];
    char a[200];
    char b[200];

    scanf("%d", &kk);
    
    for(ii = 1; ii <= kk; ii++)
    {
        i = 0;
        j = 0;
        memset(a, 0, 200);
        memset(b, 0, 200);
        memset(n, 0, 200);
        scanf("%s", n);
        
        for(k = 0; k < strlen(n); k++)
        {
            switch(n[k])
            {
                case '0':
                case '1':
                case '2':
                case '3':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                {
                    a[i++] = n[k];
                    if(j > 0)
                        b[j++] = '0';
                    break;
                }
                case '4':
                    a[i++] = '2';
                    b[j++] = '2';
                    break;
            }
        }
        if(j == 0)
            b[j] = '0';
        
        printf("Case #%d %s %s\n", ii, a, b);
    }
}