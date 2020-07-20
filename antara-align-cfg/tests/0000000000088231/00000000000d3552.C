#include<stdio.h>
#include<math.h>
void main(){
   long long int n[1000],m[1000],num[1000];
   int t,j=0,i,r=0,j;
   scanf("%d" ,&t);
       for(i=0;i<t;i++){
       scanf("%lld",&n[i]);
       m[i]=n[i];
       j=0;
            while(m[i]>0){
                r=m[i]%10;
                if(r==4)
                num[i]=num[i]+pow(10,j);
                m[i]=m[i]/10;
                j++;
            }
       }
       for(i=0;i<t;i++)
        printf("case #%d: %lld %lld\n" ,(i+1),(n[i]-num[i]),num[i]);
}