#include<stdio.h>
int check(int temp)
{
    while(temp!=0)
        {
            rem=temp/10;
            if(rem==4)
            {
                return 1;
            }
            
            temp=temp%10;
        }
        return 0;
}
int main()
{
    int T,N,i=1,rem,temp;
    scanf("%d",&T);
    while(i<=T)
    {
        scanf("%d",&N);
        temp=N;
        int A=1,B=N-1;
        int c=check(temp);
        if(c==1)
        {
        printf("%d %d",A,B);
        }
        i++;
    }
    return 0;
}