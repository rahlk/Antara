#include<stdio.h>
#include<vector>
#include <algorithm>

using namespace std;

int prime[10001], idx = 0, T, N, L, num;

bool isPrime;
int main(void){
    prime[idx++] = 3;
    for(int n = 5; n < 10000; ++n){
        isPrime = true;
        if(!(n&1)) continue;
        for(int i = 0; prime[i]*prime[i]-1 < n; ++i){
            if(n % prime[i] == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            prime[idx++] = n;
        }
    }
    
    scanf("%d", &T);
    int a=0, b=0;
    for(int t = 1; t <= T; ++t){
        scanf("%d %d", &N, &L);
        
        printf("Case #%d: ", t);
        scanf("%d", &num);
        
        for(int i = 0; i <= idx; ++i){
            if(num % prime[i] == 0) {
                a = prime[i];
                b = num / prime[i];
                break;
            }
        }
        vector<int> v, v2;
        v.push_back(a); v2.push_back(a);
        v.push_back(b); v2.push_back(b);
        a = b;
        for(int i = 1; i < L; ++i){
            scanf("%d", &num);
            b= num / a;
            v.push_back(b);v2.push_back(b);
            a = b;
        }
        v2.erase(std::unique(v2.begin(), v2.end()), v2.end());
        sort(v2.begin(), v2.end());
        for(int n : v){
            for(int i = 0; i < 26; ++i){
                if(n == v2[i]){
                    printf("%c", 'A'+i);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
