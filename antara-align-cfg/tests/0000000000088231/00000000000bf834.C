#include <stdio.h>
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
  j = 1;
  while (j < A[i] && j>0){
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
     while (b > 0) 
    { 
        if (b % 10 == 4) {
            y = 1;  break; 
        }
        b = b / 10; 
    }
    j++;
    if (x==0 && y ==0)
        break;
  }
  
   printf("Case #%d: %d %d\n",i+1,a_,b_);
}
}