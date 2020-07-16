#include <stdio.h>
#include<math.h>

int count(long long int num){
    int digit_count = 0;
    while(num>0){
        digit_count++;
        num /= 10;
    }
    return digit_count;
}

void rep_four(long long int number){
    
    long long int d_count,first=0,n,power,temp;
    n = number;
    d_count = count(number);
    d_count--;
    power = pow(10,d_count);

    while(number>0){
        temp = number / power;
        if(temp == 4)
            first = first + (temp - 1)*power;
       
        else
            first = first + temp * power;
        number = number % power;
        power /= 10;
    }
    printf("%lld %lld\n",first,(n-first));

}
int main() {
        long long int test,Case,number;
        scanf("%lld",&test);
        Case = 1;
        while(Case<=test){
            scanf("%lld",&number);
            printf("Case #%lld: ",Case++);
            rep_four(number);
        }
	return 0;
}