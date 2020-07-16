#include<stdio.h>
#include<math.h>
#include<string.h>
unsigned int hasfour(unsigned int inp){unsigned int digit;
    while(inp!=0){
    digit=inp%10;
    if(digit==4){
        return 1;
    }
        inp/=10;
    }
    return 0;
}
void splitnumber(unsigned int num){
    unsigned int first,last,digit;
    if(num%2==0){
    first=num/2;
    last=num/2;
    while(hasfour(first) || hasfour(last)){
    first--;
    last=num-first;
    }
    printf(" %u %u\n",first,last);
    }
    else{
        first=(num+1)/2;
        last=num-first;
        while(hasfour(first) || hasfour(last)){
    first--;
    last=num-first;
    }
    printf(" %u %u\n",first,last);
    }
}
int main(){
    unsigned int b=100;
    unsigned int t,nums[b];
    scanf("%u\n", &t);
    for(int i=0;i<t;i++){
        scanf("%u", &nums[i]);
        }
    for(int j=0;j<t;j++){
    printf("Case #%d:",j+1);
    splitnumber(nums[j]);}
    return 0;
}
