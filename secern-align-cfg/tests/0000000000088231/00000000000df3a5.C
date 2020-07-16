#include <stdio.h>

int main(){
    long int t,n,n1,n2,di;
    int cs;
    scanf("%d",&t);
    for(int i =0; i<t;i++){
        cs = t+1;
        n1 = 0;
        n2 = 0;
        scanf('%d',&n);
        if(n < 10){
            n1 = 1;
            n2 = 3;
        }else if(n < 100){
            di = n/10;
            if(di == 4){
                n1 +=10;
                n2 += 30;
            }else{
                n1 += di*10;
            }
            di = n%10;
            if(di == 4){
                n1 += 1;
                n2 += 3
            }else{
                n1 += di;
            }
            printf("Case #%ld: %ld %ld\n",cs,n1,n2);
        }else if(n < 1000){
            di = n/100;
            if(di == 4){
                n1 += 100;
                n2 += 300;
            }else{
                n1 += di*100;
            }
            di = n-(di*100);
            di = n/10;
            if(di == 4){
                n1 +=10;
                n2 += 30;
            }else{
                n1 += di*10;
            }
            di = n%10;
            if(di == 4){
                n1 += 1;
                n2 += 3
            }else{
                n1 += di;
            }
            printf("Case #%ld: %ld %ld\n",cs,n1,n2);
        }else if(n < 10000){
            di = n/1000;
            if(di == 4){
                n1 += 1000;
                n2 += 3000;
            }else{
                n1 += di*1000;
            }
            di = n-(di*1000);
            di = n/100;
            if(di == 4){
                n1 += 100;
                n2 += 300;
            }else{
                n1 += di*100;
            }
            di = n-(di*100);
            di = n/10;
            if(di == 4){
                n1 +=10;
                n2 += 30;
            }else{
                n1 += di*10;
            }
            di = n%10;
            if(di == 4){
                n1 += 1;
                n2 += 3
            }else{
                n1 += di;
            }
            printf("Case #%ld: %ld %ld\n",cs,n1,n2);
        }else if(n < 100000){
            di = n/10000;
            if(di == 4){
                n1 += 10000;
                n2 += 30000;
            }else{
                n1 += di*10000;
            }
            di = n-(di*10000);
            di = n/1000;
            if(di == 4){
                n1 += 1000;
                n2 += 3000;
            }else{
                n1 += di*1000;
            }
            di = n-(di*1000);
            di = n/100;
            if(di == 4){
                n1 += 100;
                n2 += 300;
            }else{
                n1 += di*100;
            }
            di = n-(di*100);
            di = n/10;
            if(di == 4){
                n1 +=10;
                n2 += 30;
            }else{
                n1 += di*10;
            }
            di = n%10;
            if(di == 4){
                n1 += 1;
                n2 += 3
            }else{
                n1 += di;
            }
            printf("Case #%ld: %ld %ld\n",cs,n1,n2);
        }
        
    }
    return 0;
}