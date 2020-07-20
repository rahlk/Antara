#include <stdio.h>
#include <stdlib.h>
void f(){
    FILE *f = fopen("Test 1.txt","r");
   int n;
   int x,a=0,b=0;
   fscanf(f,"%d",&n);
   for(int i;i<n;i++)
   {fscanf(f,"%d",&x);
        while(x!=0){
        if(x%10==4)
        {a=a*10+(x%10)/2;
        b=b*10+x%10/2;
            
        }
        else
        {a=a*10+x%10;
         b=b*10;
        }
        x/=10;
        }
       printf("\nCase #%d: %d %d",i+1,a,b);
       a=b=0;
   }
    
}