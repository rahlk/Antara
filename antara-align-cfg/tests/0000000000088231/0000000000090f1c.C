#include<stdio.h>

int check(long int x){
    
    while(x!=0){
        if(x%10 == 4)
            return 0;
        else
            x /= 10;
    }
    return 1;
}

int main() {
    
    long int t;
    scanf("%ld", &t);
    long int i = 1;
    while(t--){
        long int n, res;
        scanf("%ld", &n);
        
        long int sub = 0;
        while(1){
            res = n - sub;
            int c, c1;
            c = check(res);
            c1 = check(sub);
            
            if(c1 == 1 && c == 1)
            {
                printf("Case #%d: %ld %ld\n", i++, res, sub);
                break;
            }
            sub++;
        }
        
    }
    
   return 0;
}
