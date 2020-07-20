#include<stdio.h>
#include<math.h>
int A,B,count=1;
int check(int temp)
{
            int rem=temp%10;
            if(rem==4)
            {
                return 1;
            }
            
            temp=temp/10;
            if(temp!=0)
            {
            check(temp);
            }
        return 0;
}
int checkB(int temp)
{
    int rem=temp%10;
            if(rem==4)
            {
                int temp1=pow(10,count);
               B-=temp1;
               A+=temp1;
            }
            
            temp=temp/10;
            if(temp!=0)
            {
            check(temp);
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
        A=1;
        B=N-1;
        int c=check(temp);
        int d=checkB(B);
        if(c==1 && d==0)
        {
        printf("%d %d",A,B);
        }
        i++;
    }
    return 0;
}