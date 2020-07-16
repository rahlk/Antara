#include<stdio.h>
int main()
{
    int T,N,i=1,rem,temp;
    scanf("%d",&T);
    while(i<=T)
    {
        scanf("%d",&N);
        temp=N;
        int A=1,B=N;
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
    return 0;
}