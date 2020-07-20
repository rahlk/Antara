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
scanf("%lld",&test);
for(i=0;i<test;i++){
scanf("%lld",&n);
n--;
count=1;
flag=0;
flag2=0;
while(flag==0){
    k=n;
    flag2=flag1=0;
    //printf("%lld %lld\n",count,n);
    while(k>0 && flag2==0){
        l=k%10;
        if(l==4){
            flag1=1;
             n--;
            count++;
            break;
        }
        k/=10;
    }
     
    x=count;
    while(x>0 && flag1==0){
        l=x%10;
        if(l==4){
            flag2=1;
            n--;
            count++;
            break;
        }
        x/=10;
    }
    if(flag2==0 && flag1==0){
        printf("Case #%lld: %lld %lld\n",i+1,count,n);
        flag=1;
        break;
    }
    
    
}
}

return 0;
}
