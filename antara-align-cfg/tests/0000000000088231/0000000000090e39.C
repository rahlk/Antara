#include<stdio.h>
int main()
{
    int no,n;
    
    scanf("%d",&no);
    for(int i=0;i<no;i++)
    {
        scanf("%d",&n);
        for(int j=n;j>n/2;j--)
        {
            for(int k=0;k<n/2;k+)
            {
                if((j+k)==n)
                {
                  if((check(j)==1)&&(check(k)==1))
                  printf("case #%d: %d %d",i+1,j,k);
                }
                
            }
        }
    }
    bool check(int n)
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
}