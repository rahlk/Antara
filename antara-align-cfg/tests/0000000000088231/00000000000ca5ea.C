#include<stdio.h>
#include<math.h>
void main(){
   long long int n[100],i,j,m[100],c=0,r=0,p=0,num[100];
   int t;
   scanf("%d" ,&t);
   if(t>=1&&t<=100){
       for(i=0;i<t;i++){
       scanf("%lld",&n[i]);
       m[i]=n[i];
           j=0;
           num[i]=0;
            while(m[i]>0){
                r=m[i]%10;
                if(r==4)
                num[i]=num[i]+pow(10,j);
                m[i]=m[i]/10;
                j++;
            }
       }
       }
       for(i=0;i<t;i++)
        printf("case #%lld: %lld %lld\n" ,(i+1),(n[i]-num[i]),num[i]);
}