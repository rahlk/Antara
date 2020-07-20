#include<stdio.h>
#include<math.h>

    void main() {
        int t,k;
        char n[100];
        long d,i=0,a=0,b=0;
        scanf("%d",&t);
        for(k=0;k<t;k++){
            scanf("%s",&n);
            i=0,a=0,b=0;
            while(n[i]!='\0'){
                d=n[i]-'0';
                if(d!=4)
                    a= (long) (10*a+d);
                else{
                    a=(long) (10*a+2);
                    b=(long) (10*b+2);
                }
                i++; 
            }
            printf("Case #%d : %ld %d",k+1,a,b);
        }
    }