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
    char n[150000];
    char a[200];
    char b[200];

    scanf("%d", &kk);
    
    for(ii = 1; ii <= kk; ii++)
    {
        memset(n, 0, 150000);
        scanf("%d", &len);
        scanf("%s", n);
        
        for(k = 0; k < strlen(n); k++)
        {
            if(n[k] == 'S')
                n[k] = 'E';
            else if(n[k] == 'E')
                n[k] = 'S';
        }
        
        printf("Case #%d %s\n", ii, n);
    }
}
