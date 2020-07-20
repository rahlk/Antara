gcd(unsigned long a, unsigned long b)
{
        if (a == 0)
                return b;
        gcd(b%a, a);
}

unsigned long Prime[26];
int Pend=0;
void insert(unsigned long a) {
        int i,j;
        for(i=0;i<Pend+1;i++) {
                if (Prime[i] == a)
                        return;
                if (Prime[i] > a) {
                        for(j=Pend+1;j>i;j--)
                                Prime[j] = Prime[j-1];
                        Prime[i] = a;
                        Pend +=1;
                        return;
                }
        }
        Pend += 1;
        Prime[Pend] = a;
}

int find(unsigned long a) {
        int i;
        for(i=0;i<Pend+1;i++) {
                if (Prime[i] == a)
                        return i;
        }
}

unsigned long p[100];
unsigned long e[101];
char r[101];
main()
{
        int cnt, L, i , j;
        unsigned long N;
        scanf("%d", &cnt);
        for(i=1;i<=cnt;i++)
        {
                scanf("%lu %d", &N, &L);
                for(j=0;j<L-1;j++) {
                        scanf("%lu ", &p[j]);
                }
                scanf("%lu", &p[j]);
                e[1] = gcd(p[0], p[1]);
                Prime[0] = e[1];
                Pend = 0;
                e[0] = p[0]/e[1];
                insert(e[0]);
                for(j=1;j<L;j++) {
                        e[j+1] = p[j]/e[j];
                        insert(e[j+1]);
                }
                for(j=0;j<=L;j++) {
                        r[j] = find(e[j]) + 'A';
                }
                r[L+1] = '\0';
                printf("Case #%d: %s\n", i, r);
        }
}
