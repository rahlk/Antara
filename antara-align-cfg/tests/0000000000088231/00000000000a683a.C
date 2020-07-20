#include<stdio.h>
#include<math.h>
long int hasfour(long int inp){long int digit;
    while(inp!=0){
    digit=inp%10;
    if(digit==4){
        return 1;
    }    
        inp/=10;
    }
    return 0;
}
void splitnumber(long int num){
    long int first,last,digit;
    if(num%2==0){
    first=num/2;
    last=num/2;
    while(hasfour(first) || hasfour(last)){
    first--;
    last=num-first;    
    }
    printf(" %ld %ld\n",first,last);
    }
    else{
        first=(num+1)/2;
        last=num-first;
        while(hasfour(first) || hasfour(last)){
    first--;
    last=num-first;
    }
    printf(" %ld %ld\n",first,last);
    }
}
int main(){
    long int b=100;
    long int t,nums[b];
    scanf("%ld\n", &t);
    for(int i=0;i<t;i++){
        scanf("%ld\n", &nums[i]);
        }
    for(int j=0;j<t;j++){
    printf("Case #%d:",j+1);
    splitnumber(nums[j]);}
    return 0;
}