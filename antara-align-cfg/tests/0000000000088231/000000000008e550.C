#include <stdio.h>

int main(){
    int tests,flag;
    long long int n,a,b,atemp,btemp;
    if(scanf("%d",&tests)){}
    for(int i = 1; i <= tests; i++){
        if(scanf("%llu",&n)){}
        if(n%3==1){
            a = n/3;
            b = ((2*n)/3)+1;
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
        else if(n%3==0){
            a = n/3;
            b = 2*(n/3);
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
        else if(n%3==2){
            a = n/3;
            b = ((2*n)/3)+2;
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