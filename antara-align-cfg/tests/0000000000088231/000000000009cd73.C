#include<stdio.h>

int main()
{
    int A,B,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&A);
        int C=A,x;
        int i=0;
        B=0;
        while(C>0)
        {
           i++;
           x=C%10;
           C=C/10;
           if(x==4)
           {
              B=B+pow(10,i-1);
              A=A-pow(10,i-1);
           }
           
        }
        printf("%d %d\n",A,B);
        
    }
    
    
    return 0;
}