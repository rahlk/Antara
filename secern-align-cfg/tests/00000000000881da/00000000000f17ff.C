#include <stdio.h>
#include <stdlib.h>
char a[300000];
long t,tt;

int main() {
    scanf("%ld",&t);
    for (tt=1;tt<=t;tt++){
        long n;
        scanf("%ld",&n);
        scanf("%s",a);
        printf("Case #%ld: ",tt);
        for (int i=0;i<n*2-2;i++){
            if (a[i]=='E')
                printf("S");
            else
                printf("E");
        }
        printf("\n");
        
    }
    return 0;
}
