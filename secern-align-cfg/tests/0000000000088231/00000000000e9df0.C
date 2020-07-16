#include<stdio.h>
//typedef long long ll;
int main(){
 long long  t;
 scanf("%lld",&t);
 long long  i=t;
 while(t--){
     long long  n;
  scanf("%lld",&n);
  long long s=n;long long  uc=1;long long  kt=0;
  while(s){
      long long p=s%10;
      if(p==4){
        kt+=uc;
        }
      uc=uc*10;
      s=s/10;
  }
  kt=kt*3;
  printf("Case #%lld: ",i-t);
  printf("%lld %lld\n",n-kt,kt);   
 }
    
}