#include<stdio.h>
int forgone(long int n){
 long int rem,temp=n,newnum=0,pow=1;
 while(n){
    rem=n%10;
    if(rem==4){
        newnum=(rem-1)*pow+newnum;
    }
    else{
        newnum=(rem)*pow+newnum;
    }
    pow*=10;
    n/=10;
 }
  if(newnum==temp){return newnum;}
  else{
    forgone(newnum);
  }

}
int main(){
    long int test,num,c;
    scanf("%ld",&test);
    for(c=1;c<=test;c++){
    scanf("%ld",&num);
    long int n1=forgone(num-1);
    printf("Case #%ld: %ld %ld\n",c,n1,num-n1);
    }
}
