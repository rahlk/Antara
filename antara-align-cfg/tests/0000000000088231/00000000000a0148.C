#include<stdio.h>
int main(){
unsigned long long int i,n,k;
int j,t;
scanf("%d",&t);
for(j=1;j<=t;j++){
 scanf("%d",&n);
for(i=1;i<n/2;i++){
k=i;
 
while(k){
 if(k%10 == 4){
  
    goto a;
   
    } 
   
 k/=10; 
  }
 k=n-i; 
  while(k){
 if(k%10 == 4){
   
    goto a;
    } 
     
 k/=10; 

  }
printf("case #%llu: %llu %llu\n",j,i,n-i);
break;
a:
printf("");
   }
 
 }
}