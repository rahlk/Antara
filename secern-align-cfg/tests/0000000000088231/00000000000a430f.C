#include<stdio.h>
#define ll long long int

ll digitCheck(ll n){
    ll rem, val, sum = 0, p = 1;
    while(n != 0){
        rem = n%10;
        n = n/10;
        if(rem == 4 || n == 4){
            rem = rem + 1;
        }
        sum = sum + (rem*p);
        p = p * 10;

    }
    return sum;

}

int main(){

  int t;
  scanf("%d",&t);
  for(int i=0; i<t; i++){

        ll n, val, f = 0;
        scanf("%lld",&n);
        val = n/2;
        ll A= digitCheck(val);
        ll B = n - A;
        printf("Case #%d: %lld %lld\n",i+1,A,B);
  }

   return 0;
}
