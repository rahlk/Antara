#include<stdio.h>


int digitCheck(int n){
    int rem, sum = 0, p = 1;
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

        int n, val;
        scanf("%d",&n);
        val = n/2;
        int A= digitCheck(val);
        int B = n - A;
        printf("Case #%d: %d %d\n",i+1,A,B);
  }

}
