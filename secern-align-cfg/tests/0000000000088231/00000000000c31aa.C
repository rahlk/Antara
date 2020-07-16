#include <stdio.h>
#include <math.h>
int main(){
int n; int i,j;
scanf("%d\n",&n);
int A[n]; int a,b,a_,b_;
for (i=0; i<n;i++){
    scanf("%d\n",&A[i]);
} 
int x,y;
for (i=0;i<n;i++){
  //  len = sizeof(A[i])/sizeof(long long int);
  k = 1;
  j = A[i]/pow(2,k);
  while (j< A[i]){
      x =0; y=0;
      a_= j;
      b_ = A[i] -j;
      a = a_; b =b_;
       while (a > 0) 
    { 
        if (a % 10 == 4) {
            x = 1;  break; 
        }
        a = a / 10; 
    } 
    if (a_ ==b_) y= x;
    else {
     while (b > 0) 
    { 
        if (b % 10 == 4) {
            y = 1;  break; 
        }
        b = b / 10; 
    }
    }
    k++;
    j = A[i]/pow(2,k);
    if (x==0 && y ==0)
        break;
  }
  
   printf("Case #%d: %d %d\n",i+1,a_,b_);
}
}