#include<stdio.h>

int main()

{
    
 int c;
    
 int dig,r,n,i,k;
    
 scanf("%d",&c);
 
 fflush(stdin);
 int num[c];
 i=0;
 while(i<c)
    
 {
        
  scanf("%d",&num[i]);
  i++;
 }

 fflush(stdin);  
 i=1;
    
 while(i<=c)
    
 {
                
  n=num[i-1];
        
  dig=0;
        
  k=2;
        
  while(n>0)
        
  {
            
   r=n%10;
            
   if(r==4)
            
   {
              
    dig=dig+k;
    printf("dig : %d\n",dig);  
            
   }
            
            
   n=n/10;
            
   k=k*10;
        
  }
        
        
  printf("Case #%d: %d %d",i,num[i-1]-dig,dig);
  i++;
    
 }
    
 return 0;

}