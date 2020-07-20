#include<stdio.h>

int main() {
    int check(long long int );
  long long  int n;
   scanf("%lld",&n);
   long long  int a[n];
   for(int i=0;i<n;i++){
   scanf("%lld",&a[i]);
}
     for(int i=0;i<n;i++){
        int c= check(a[i]/2);
           long long  int as,b;
        if(a[i]%2==0){
        as=a[i]/2;
        b=a[i]/2;
            
        }
       else{
            as=a[i]/2;
        b=(a[i]/2)+1;
       }
        if(c==0){
            int a1= check(as);
            int b1= check(b);
            
            while(a1==0||b1==0){
                 as=as+1;
                b=b-1;
                  a1= check(as);
                 b1= check(b);
            
               
               
            }
         printf("Case #%lld: %lld %lld\n",i+1,as,b);
        }
        else{
            printf("Case #%lld: %lld %lld\n",i+1,a[i]/2,a[i]/2);
        }
        
       
     }
     return 0;
}
int check(long long  int n)
{
    long long int x=n;
    while(x!=0)
    {
        if(x%10==4)
        return 0;
        else
        x=x/10;
    }
    return 1;
}