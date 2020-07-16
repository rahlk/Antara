#include<stdio.h>
main(){
int T,x;
unsigned long N,i,m,a,b,s,sum1,sum2;
scanf("%d",&T);
for(x=0;x<T;x++){
scanf("%lu",&N);
s=1;
sum1=0;
sum2=0;
for(i=0;N>0;i++){
m=N%10;
N=N/10;
if(m==4) //4=3+1
    {a=3*s;
    b=1*s;
    }
    else{
        a=m*s;
        b=0;
        }
    s=s*10;
sum1=a+sum1;
sum2=b+sum2;
}
printf("%lu %lu\n",sum1,sum2);
}
}
