#include<stdio.h>
#include<stdlib.h>

void main(){
    long long n, a[100], prime[27], k, pre, first;
    long long l, i, t, j, c, flag, m;
    scanf("%lld", &t);
    for(i = 0; i < t; i++){
        scanf("%lld",&n);
        scanf("%lld",&l);
        flag = 1;
        for(j = 0, c = 0; j < l; j++){
            scanf("%lld",&a[j]);
            if(c != 26){
                    if(c == 0){
                        for(k = 2; k < a[j] / 2; k++)
                            if(a[j] % k == 0){
                                prime[0] = k;
                                if(k != a[j] / k){
                                    prime[1] = a[j] / k;
                                    c = 2;
                                }
                                else
                                    c = 1;
                                break;
                            }
                    }
                    else if(a[j] != a[j - 1]){
                        if(c == 1){
                            first = prime[0];
                            pre = a[j] / prime[0];
                            if(pre < prime[0]){
                                prime[1] = prime[0];
                                prime[0] = pre;
                            }
                            else
                                prime[1] = pre;
                            c++;
                            flag  = 0;
                        }
                        else if(c == 2 && flag){
                           if(a[j] % prime[0] == 0){
                                pre = a[j] / prime[0];
                                first = prime[1];
                            }
                            else{
                                pre = a[j] / prime[1];
                                first = prime[0];
                            }
                            for(m = c - 1; m >= 0; m--){
                                if(prime[m] == pre)
                                    goto end;
                                if(prime[m] > pre)
                                    prime[m + 1] = prime[m];
                                else
                                    break;
                            }
                            prime[m + 1] = pre;
                            c++;
                            end:
                                m = 0;
                       } 
                       else{
                            pre = a[j] / pre;
                            for(m = 0 ; m < c; m++)
                                if(prime[m] == pre)
                                    goto end2;
                            for(m = c - 1; m >= 0; m--){
                                if(prime[m] > pre)
                                    prime[m + 1] = prime[m];
                                else
                                    break;
                            }
                            prime[m + 1] = pre;
                            c++;
                            end2:
                                m = 0;
                       }
                    }
            }
        }
        printf("Case #%d: ",i + 1);
        for(j = 0; j < l; j++){
            for(m = 0; m < c; m++)
                if(prime[m] == first){
                    printf("%c", 65 + m);
                    break;
                }
            first = a[j] / first;
        }
        for(m = 0; m < c; m++)
            if(prime[m] == first){
                printf("%c", 65 + m);
                break;
            }
        printf("\n");
    }
    exit(0);
}