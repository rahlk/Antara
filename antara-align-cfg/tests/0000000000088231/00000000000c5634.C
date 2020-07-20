#include<stdio.h>
int main()
{
    int T,N,i=1;
    scanf("%d",&T);
    while(i<=T)
    {
        scanf("%d",&N);
        int temp=N;
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
        x:int A=1,B=N;
        printf("%d %d",A,B)
        y:i++;
    }
    return 0;
}