#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 long long compare (const void * a, const void * b)
{  
    return ( *(long long *)a - *(long long *)b );
}
int main(void){
   
long long int test,i,j,n,count,flag,flag2,k,b1,l,p,i1,i2,m,u,r,q,d,x,max,max2,min,f,sum,w,h,flag1;
char a[100000];
scanf("%lld",&test);
for(i=0;i<test;i++){
scanf("%lld",&n);
k=n;
sum=1;
p=0;
f=1;

while(k>0){
    l=k%10;
   // printf("%lld %lld %lld %lld\n",k,l,sum,p);
    if(l==4){
     
        p+=f;
       // printf("%lld %lld %lld\n",k,p,f);
    }
    k/=10;
    f*=10;
}


printf("Case #%lld: %lld %lld\n",i+1,p,n-p);
}

return 0;
}
