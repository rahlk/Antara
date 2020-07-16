#include <math.h>
#include <stdio.h>
int main() {
  long long int t,n,count,num,i,r,s,w;
  scanf("%lld", &t);
  while (t--) {
    scanf("%lld ", &n);
    count = log10(n) + 1;
    num = n;
    s=0,w=0;
    for (i=0;i<count ;i++) {
      r = num % 10;
       if (r != 4)
        {
             s = s + pow(10, i) * r; 
        }
      else {
        s = s + pow(10, i) * 3;
        w = w + pow(10, i) * 1;
      }
      num=num/10;
    }
    printf("%lld %lld \n", s, w);
  }
  return 0;
}
