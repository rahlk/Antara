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
    isprime(10005);
    int case_count;
    scanf("%d", &case_count);
    for(int count = 1; count <= case_count; count++) {
        int n,l;
        scanf("%d %d", &n, &l);
        long long buf0[210] = {0};
        long long buf1[210] = {0};
        int flag = 0;
        for (int i = 0; i < l; i++) {
            long long num;
            scanf("%lld", &num);
            if (i == 0) {
                int j = 0;
                while(num % p[j] != 0)
                    j++;
                buf0[0] = p[j];
                buf0[1] = num / p[j];
                buf1[0] = num / p[j];
                buf1[1] = p[j];
            } else {
                if (buf0[i] != 0 && num % buf0[i] == 0) {
                    buf0[i+1] = num / buf0[i];
                }
                if (buf1[i] != 0 && num % buf1[i] == 0) {
                    buf1[i+1] = num / buf1[i];
                }
                if (buf0[i] != 0 && num % buf0[i] != 0)
                    flag = 1;
            }
        }

        long long limit = 0;
        char res[210];
        long long *buf = buf0;
        if (flag) buf = buf1;
        for (int j = 0; j < 26; j++) {
            long long min = 1000000000;
            for (int i = 0; i <= l; i++) {
                if (buf[i] > limit && buf[i] < min) {
                    min = buf[i];
                }
            }
			//printf("### limit %d min %lld char %c\n",limit ,min, 'A'+j);
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