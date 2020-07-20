#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,r,k,a=0;
     scanf("%d",&n);
     while(n!=0){
         r=n%10;
         if(r==4){
             k=r/2;
         }
         else{
             k=r;
         }
         a=a*10+k;
         n=n/10;
     }
     int b,i;
     b=n-a;
     for(i=0;i<t;i++){
         printf("Case #i: %d\t%d\t",a,b);
     }
     
     
    }
    return 0;
    
}