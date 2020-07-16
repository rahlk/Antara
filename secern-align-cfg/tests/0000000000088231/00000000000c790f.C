#include<stdio.h>
int main(){
   int i,n,a[100],b[100],c[100];
   scanf("%d", &n);
    for(i=0;i<n;i++)
    {
       scanf("%d", &a[i]);
       if(a[i]%2==0){
          b[i]=a[i]/(2);
       c[i]=a[i]-b[i]; 
       }
       else if(a[i]%3==0){
          b[i]=a[i]/(3);
       c[i]=a[i]-b[i]; 
       }
       else if(a[i]%5==0){
          b[i]=a[i]/(5);
       c[i]=a[i]-b[i]; 
       }
       else  if(a[i]%7==0){
          b[i]=a[i]/(7);
       c[i]=a[i]-b[i]; 
       }
       else if(a[i]%11==0){
          b[i]=a[i]/(11);
       c[i]=a[i]-b[i]; 
       }
       else{
       b[i]=a[i]/(i+1);
       c[i]=a[i]-b[i];
       }
    }
     for(i=0;i<n;i++)
    {
       
       printf("Case #%d:%d %d \n", i+1,b[i], c[i]);
    }
    return 0;
}