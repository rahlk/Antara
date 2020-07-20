#include<stdio.h>
#include<math.h>
void main()
{ int z,k,n,i,temp=0,count=0;
  scanf("%d ",&n);
  for(i=0;i<n;i++)
  { int k;
      scanf("%d",&z);
    
     k=z;
     z=z/2;
      
      while(z!=0)
     {  temp++;
         if(z%10==4)
         {count++; 
           if(temp=1)
             { printf("%d %d",z,z); }
            else
            { printf("%d %d",(k/2)+pow(10,temp-1),(k/2)-pow(10,temp-1)); }
             
         }
          else
          {
              z=z/10;
          }
          
     
         
         
     }
  }
  
   


}