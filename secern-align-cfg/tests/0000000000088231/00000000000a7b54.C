#include<stdio.h>
#include<stdlib.h>

void main()
{
    long int *n,temp,j;
    
    int t,i;
    
    scanf("%d",&t);
    
    n=(long int *)calloc(t,sizeof(long int));
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n[i]);
    }
    
    for(i=0;i<t;i++)
    {
        j=1;
        temp=0;
        
        while(1)
        {
            if((n[i]/j)==0)
              break;
              
            if(((n[i]/j)%10)==4)
            {
                temp=temp+(2*j);
                n[i]=n[i]-(2*j);
            }
            
        }
        
        printf("Case #%d: %ld %ld",(i+1),n[i],temp);
        
        if(i<(t-1))
          printf("\n");
    }
}