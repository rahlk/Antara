#include <stdio.h> 
#include <stdlib.h>
#include<string.h> 
int main() {    
  int t;
  scanf("%d",&t);   
  while(t>0)    
 { int n,x;         
scanf("%d",&n);       
  x=2*(n-1);       
  char s[1000];         
scanf("%s",s);        
 for(int i=0;i<x;i++)   
 {           
     if(s[i]=='S')           
  printf("E");             
if(s[i]=='E')             
printf("S");    
}         
 t--;        
  printf("\n");   
  } }