#include <stdio.h>
#include <stdlib.h>
long t,tt,l;
char a[300],r1[300],r2[300];

int main() {
    scanf("%ld",&t);
    for (tt=1;tt<=t;tt++){
        scanf("%s",a);
        int i=0;
        for (i=0;a[i];i++){
            if (a[i]=='4'){
                r1[i]='2';
                r2[i]='2';
            }
            else {
                if (i%2==0){
                    r1[i]=a[i];
                    r2[i]='0';
                }
                else {
                    r1[i]='0';
                    r2[i]=a[i];
                }
            }
        }
        r1[i]=0;
        r2[i]=0;
        char *p1,*p2;
        for (p1=r1;*p1=='0';p1++);
        for (p2=r2;*p2=='0';p2++);
        if (!*p2){
            if (r1[0]=='1'){
                r1[0]='0';
                r1[1]='5';
                r2[1]='5';
                p1=r1+1;
                p2=r2+1;
            }
            else if (r1[0]=='5'){
                r1[0]='3';
                r2[0]='2';
                p1=r1;
                p2=r2;
            }
            else {
                r1[0]--;
                r2[0]='1';
                p1=r1;
                p2=r2;
            }
        }
        printf("Case #%ld: %s %s\n",tt,p1,p2);
    }
    return 0;
}
