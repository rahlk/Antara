#include<stdio.h>

void check(int n, int i)
{
   int dr1=n/2;
   int dr2= dr1+(n%2);
          
    int temp1=dr1;
    int temp2;
    int x=4;

    while(temp1>0)
    {
     if(temp1%10==4)
     {
      dr1-=x;
      temp1=dr1;
      dr2+=x;
      continue;
     }
      x*=10;
      temp1/=10;
    }
    
    temp2=dr2;
        x=4;
        while(temp2>0)
        {
          if(temp2%10==4)
          {
             dr2-=x;
              temp2=dr2;
              dr1+=x;
             continue;
          }
          x*=10;
          temp2/=10;
        }
        
        
        printf("Case #%d: %d %d\n",i,dr1,dr2);
        fflush(stdout);
    
}
    
    



int main()
{
    int t,n,i;
    
    scanf("%d",&t);
    
    for(i=1;i<=n;i++)
    {
        scanf("%d",&n);
        check(n,i);
    }
    
    return 0;
}

