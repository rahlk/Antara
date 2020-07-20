#include<stdio.h>

#include<stdlib.h>
int main()
{
    int t;
    int n,r,i;
    int a,b,a1,b1,rem;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        a=b=n/2;
        a1=a;
        b1=b;
        while(1)
        {
            while(a1!=0)
            {
                rem=a1%10;
                if(rem==4)
                {
                    a--;
                    goto loop;
                }
                a1=a1/10;
                
            }
            loop:while(b1!=0)
            {
                rem=b1%10;
                if(rem==4)
                {
                    b--;
                    goto loop1;
                }
                b1=b1/10;
                
            }
           loop1: if((a+b)==n)
            {
                printf("case #%d: %d %d",i,a,b);
            }
        }
    }
   return 0; 
    
}