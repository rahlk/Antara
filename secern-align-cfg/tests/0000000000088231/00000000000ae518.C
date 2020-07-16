#include"stdio.h"
void main()
{
    signed int t,a,b,i,j,l;
    scanf("%d",&t);
    signed int n[t],thisDigit,thisNumber;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
for(i=0;i<t;i++)    
{j=0;
while (n[i] != 0)
{   thisNumber=n[i];
    l=n[i];
    thisDigit = thisNumber % 10;    // Always equal to the last digit of thisNumber
    thisNumber = thisNumber / 10;   // Always equal to thisNumber with the last digit
                                    // chopped off, or 0 if thisNumber is less than 10
    if (thisDigit == 4)
    {   
         if(j==0 )
         {    
             a=(l/2)+1;
             b=l-a;
             printf("Case #%d %d %d  ",i+1,a,b);
         }
         if(j==1 )
         {    
             a=(l/2)+1;
             b=l-a;
             printf("Case #%d %d %d  ",i+1,a,b);
         }
         if(j==2 )
         {    
             a=(l/2)+1;
             b=l-a;
             printf("Case #%d %d %d  ",i+1,a,b);
         }
         if(j==3 )
         {    
             a=(l/2)+1;
             b=l-a;
             printf("Case #%d %d %d  ",i+1,a,b);
         }
        
        break;
    }
    j++;
} 
    
    
}
}