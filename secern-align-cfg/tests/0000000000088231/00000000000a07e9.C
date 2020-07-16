#include <stdio.h>

int main() {
    int t; scanf(“%d”,&t);
    
    for(int i=0;i<t;i++) {
        int n;
        scanf(“%d”,&n);
        int number[2] = {n/2, n/2};
        
        while(a!=0 && b!=0) {
            int a = number[0];
            int b = number[1];
            
            while(a > 0 || b > 0) {
                if(a % 10 == 4) break;
                else if(b % 10 == 4) break;
                
                else {
                    a /= 10;
                    b /= 10;
                }
                
            }
            if(a>0 || b > 0) {
                number[0]++;
                number[1]++;
            }
        }
        printf(“%d %d\n”,number[0], number[1]);
        
    }
}