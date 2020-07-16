#include<stdio.h>
void main()
{
    int T,N[100],rem,temp;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d",&N[i]);
    }
    int i=1;
    while(i<=T)
    {
        temp=N[i];
        int A=1,B=N[i];
        while(temp!=0)
        {
            rem=temp/10;
            if(rem==4)
            {
                goto x;
            }
            
            temp=temp%10;
        }
        goto y;
        x:
        printf("%d %d",A,B);
        y:i++;
    }
    
}