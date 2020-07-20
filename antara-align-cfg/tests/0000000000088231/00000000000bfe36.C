#include<stdio.h>
#include<math.h>
int main(){
int t,n,num1,num2,len;
scanf("%d",&t);
for(int tc=1;tc<=t;tc++){
    num2=0;
scanf("%d",&n);
num1=n;
len=floor(log10(n)+1);
for(int i=0;i<len;i++){
    if(n%10==4){
        num2+=pow(10,len-1-i);
    }
    n=n/10;
}
num1=num1-num2;
printf("Case #%d: %d %d\n",tc,num2,num1);
}
}