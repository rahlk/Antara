#include<stdio.h>
#include<math.h>

int main(){
    int t=0;
    int i=0;
    long n=0;
    long temp;
    int digitCount=-1;
    int digit;
    long numberA=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        digitCount=-1;
        numberA=0;
        scanf("%d",&n);
        temp=n;
        while(temp>0){
            digit=temp%10;
            digitCount++;
            if(digit==4){
                numberA+=3*pow(10,digitCount);
            }
            temp=temp/10;
        }
        
        printf("Case #%ld: %ld %ld\n",i,numberA,n-numberA);
    }
    return 0;
}