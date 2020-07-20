#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//typedef long long ll;
int main(){
 long long  t;
 scanf("%lld",&t);
 long long  p=t;
 while(t--){
     long long  n;
  scanf("%lld",&n);
  //long long s=n;long long  uc=1;long long  kt=0;
  //string s;
  char s[2*n-2];
  /*for(long long int i=0;i<2*n-2;i++){
  scanf("%c",&s[i]);
      
  }*/
  scanf("%s",&s);
  long int a[2*n-2];
  for(long long int i=0;i<2*n-2;i++){
      if(s[i]=='E'){
          a[i]='S';
      }
      else if(s[i]=='S'){
          a[i]='E';
      }
  }
 /* for(long long int i=0;i<2*n-2;i++){
 // scanf("%s",&s[i]);
   printf("%c",s[i]);   
  }*/
 // printf("\n");
  
  printf("Case #%lld: ",p-t);
 // printf("%lld %lld\n",n-kt,kt);  
 for(long int i=0;i<2*n-2;i++){
     printf("%c",a[i]);
 }
 printf("\n");
 
 }  
}