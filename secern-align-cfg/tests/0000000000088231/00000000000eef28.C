#include<stdio.h>
#include<stdlib.h>

bool check_four(int m){
    int i, n;
    i = m;
    n = 0;
    
    while(i>0){
        n=i%10;
        i=i/10;
        if(n==4){
            return false;
        }
    }
    return true;
}

int main(){
    int i, n, m, t, case=1;
    bool l1, l2;
    
    scanf("%d", &t);
    while(t>0){
        scanf("%d", &n);
        printf("Case #%d", case);
        for (i = 1; i<=n/2; i++){
            m=n-i;
            l1=check_four(m);
            l2=check_four(i);
            if(l1 == true && l2 == true){
                printf("%d %d", i, m);
                break;
            }
        }
        case++;
        t--;
    }
    
    return 0;
}