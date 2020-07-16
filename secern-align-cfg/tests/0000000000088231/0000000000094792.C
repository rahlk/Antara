#include <stdio.h>
#include <math.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for (i=0;i<t;i++) {
        int d,j;
        long long n,x,y,z=1,f=0;
        scanf("%lli",&n);
        d = floor(log10(abs(n))) + 1;
        for (j=1;j<d;j++) {
            z=z*10;
        }
        y=n;
        while (z>0) {
            x=y/z;
            y=n%z;
            if (x!=4) {
                f=f+(x*z);
            } else {
                f=f+((x/2)*z);
            }
            z=z/10;
        }
        printf("Case #%d: %d %d\n",t+1,f,n-f);
    }
    return 0;
}