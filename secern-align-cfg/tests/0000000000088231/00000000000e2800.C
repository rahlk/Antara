#include<stdio.h>
#include<math.h>
int main(){
   long long n[100],i,j,t,m[100],c=0,r=0,p=0,num[100];
   scanf("%lld" ,&t);
       for(i=0;i<t;i++){
       scanf("%lld" ,&n[i]);
       m[i]=n[i];
           j=0;
            while(m[i]>0){
                r=m[i]%10;
                if(r==4)
                num[i]=num[i]+pow(10,j);
                m[i]=m[i]/10;
                j++;
            }
            printf("case #%lld: %lld %lld" ,i,(n[i]-num[i]),num[i]);
            printf("\n")
           
       }
       return 0;
}