#include  <stdio.h>
int isprime(int n) {
    for(int i=2;i<n;i++)
    if(n%i==0)
    return 0;
    return 1;
}
int main() {
    int count=26,i,j,k,l,t,m,c,w[101],p[count];
    char ch;
    scanf("%d", &t);
    for(j=1;i<=t;j++) {
        scanf("%d %d", &m, &c);
        for(i=0;i<c;i++) {
            scanf("%d", &w[i]);
        }
        for(k=m;k>1;k--) {
            if(isprime(k)==1) {
                count--;
                p[count] = k;
            }
        }
        for(i=0;i<c;i++) {
            for(l=0;l<26;l++) {
                if(w[i]%p[l]==0) {
                    ch=l+65;
                    printf("%c ", ch);
                }
            }
        }
    }
}