#include <stdio.h>

int main(){
    int tests,flag;
    long long int n,a,b,atemp,btemp;
    if(scanf("%d",&tests)){}
    for(int i = 1; i <= tests; i++){
        if(scanf("%llu",&n)){}
        if(n%2==1){
            a = n/2;
            b = (n/2)+1;
            atemp = a;
            btemp = b;
            do{
                if(atemp%10==4 || btemp%10==4){
                    a--;
                    b++;
                    atemp = a;
                    btemp = b;
                }
                if(flag){
                    atemp = atemp/10;
                    btemp = btemp/10;
                }
            } while(atemp>0 && btemp>0);
            printf("Case #%d: %llu %llu\n",i,a,b);
        }
        else if(n%2==0){
            a = n/2;
            b = n/2;
            atemp = a;
            btemp = b;
            do{
                flag = 1;
                if(atemp%10==4 || btemp%10==4){
                    a--;
                    b++;
                    atemp = a;
                    btemp = b;
                    flag = 0;
                }
                if(flag){
                    atemp = atemp/10;
                    btemp = btemp/10;
                }
            } while(atemp>0 && btemp>0);
            printf("Case #%d: %llu %llu\n",i,a,b);
        }
    }
    return 0;
}