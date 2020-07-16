#include<stdio.h>
void main()
{
  int t,n,a,b,s,i,j,r,k;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    scanf("%d",&n);
    for(j=1;j<n;j++)
    {
      a=j;b=n-j; 
      k=0;s=0; 
      while(a>0)
      {
        r=a%10;
        if(r==4)
        { s=1;
          return;}
        a=a/10;
      }
      while(b>0)
      {
        r=b%10;
        if(r==4)
        { k=1;
          return;
        }
        b=b/10;
       }
       if(k==0 && s==0)
       { printf("Case #%d: %d %d ",i,a,b);
         return; 
        }
    }
  }
}

    
        
         
         
    
      
          
    

    
    