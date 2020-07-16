#include<stdio.h>
int check(long int n){
 long int rem,temp=n,newn=0,pow=1;
 while(n){
    rem=n%10;
    if(rem==4){
        newn=(rem-1)*pow+newn;
    }
    else{
        newn=(rem)*pow+newn;
    }
    pow*=10;
    n/=10;
 }
  if(newn==temp){return newn;}
  else{
    check(newn);
  }

}
int main(){
    long int testset,number,tc;
    scanf("%ld",&testset);
    for(tc=0;tc<testset;tc++){
    scanf("%ld",&number);
    long int n1=check(number-1);
    printf("Case #%ld: %ld %ld\n",tc+1,n1,number-n1);
    }
}
