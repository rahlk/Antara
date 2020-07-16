#include <stdio.h>
#include <string.h>

char prime[10020];
int p[10020];
int k=0;
void isprime(int n)
{
    memset(prime, 1, sizeof(prime));
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            p[k++]=i;
            {
                for(int j=i*i;j<n;j+=i)
                {
                    prime[j] = 0;
                }
            }
        }
    }
}

int main() {
    int case_count;
    scanf("%d", &case_count);
    for(int count = 1; count <= case_count; count++) {
        int n,l;
        scanf("%d %d", &n, &l);
        isprime(n);
        int above = 0;
        int buf[110] = {0};
        for (int i = 0; i < l; i++) {
            int num;
            scanf("%d", &num);
            if (above == 0) {
                int j = 0;
                while(p[j] <= n && num % p[j] != 0)
                    j++;
                above = num / p[j];
                buf[0] = p[j];
                buf[1] = above;
            } else {
                buf[i+1] = num / above;
				above = buf[i+1];
            }
        }

        int limit = 0;
        char res[110] = {0};
        for (int j = 0; j < 26; j++) {
            int min = 100000000;
            for (int i = 0; i <= l; i++) {
                if (buf[i] > limit && buf[i] < min) {
                    min = buf[i];
                }
            }
            limit = min;
            for (int i = 0; i <= l; i++) {
                if (buf[i] == min) {
                    res[i] = 'A' + j;
                }
            }
        }
        res[l+1] = '\0';
        printf("Case #%d: %s\n", count, res);
    }
    return 0;
}