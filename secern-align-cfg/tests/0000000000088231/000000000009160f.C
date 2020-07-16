#include<stdio.h>
  int check(int n)
    {
        int  remainder;
    while( n!=0 )
    {
        remainder = n%10;
        if(remainder==4)
        return 0;
        n /= 10;
    }
   return 1;

    }
int main()
{
    int no,n;
    scanf("%d",&no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&n);
        for(int j=1;j<=n/2;j++)
        {
                if((j+(n-j))==n)
                {
                  if((check(j)==1)&&(check(n-j)==1))
                  {
                  printf("case #%d: %d %d",i+1,j,n-j);
                  break;
                  }
                }
                
            }
        }
    }
  
}