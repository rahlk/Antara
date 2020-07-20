#include<stdio.h>
int checker(int n)
{
    while(n!=0){
        int d = n%10;
        if(d==4)
        return 0;
        n=n/10;
    }
    return 1;
}
 int main(){
     int i,t,a[100],m,n;
     scanf("%d",&t);
     for(i=1;i<=t;i++){
         scanf("%d",&a[i]);
     }
     for(i=1;i<=t;i++){
         m=a[i]-1;
         n=1;
         int t1=checker(m);
         int t2=checker(n);
         while(t1 ==0 || t2==0){
             m--;
             n++;
             t1=checker(m);
             t2=checker(n);
         }
         printf("Case #%d: %d %d\n",i,m,n);
         }
 }   
