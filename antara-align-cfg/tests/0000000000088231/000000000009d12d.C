#include<stdio.h>

int main()
{
    int A,B,t;
    scanf("%d",&t);
    int j=0;
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
        j++
        printf("Case #%d: %d %d\n",j,A,B);
        
    }
    
    
    return 0;
}