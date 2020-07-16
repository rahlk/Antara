#include <stdio.h>
#include <math.h>
int main() {
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++) {
        int n;
        scanf("%d",&n);
        int number[2] = {n/2, n - n/2};
        
        int a = number[0];
        int b = number[1];
        
        while(a!=0 && b!=0) {
            int cnt = 0;
            a = number[0];
            b = number[1];
            while(a > 0 || b > 0) {
                if(a % 10 == 4) break;
                else if(b % 10 == 4) break;
                
                else {
                    a /= 10;
                    b /= 10;
                      cnt++;
                }
                
            }
            if(a>0 || b > 0) {
                if(number[0]<number[1]) {
                    number[1] -= pow(10,cnt);
                    number[0] += pow(10,cnt);
                }
                else {
                number[1] += pow(10,cnt);
                  number[0] -= pow(10,cnt);
            }
        }
        }
        printf("%d %d\n",number[0], number[1]);
        
    }
}