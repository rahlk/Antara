#include <stdio.h>

int main()
{
    int n,n1,f1=0,i=1;
    scanf("%d",&n);
    int p,r,n2=0;
    while(i<n+1){
        p=1;r=0;n2=0;
        scanf("%d",&n1);
        f1=n1;
        while(n1>0){
            r=n1%10;
            if(r==4){r=r-1;}
            n2=n2+p*r;
            n1=n1/10;
            p=p*10;
        }
        printf("Case #%d: %d %d\n",i,n2,f1-n2);
        i++;
    }

    return 0;
}
