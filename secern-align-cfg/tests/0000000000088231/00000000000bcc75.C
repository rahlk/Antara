#include <stdio.h>
void main()
{
    int T,i,rem,flag=0;
    unsigned long N,A,B,num;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lu",&N);
        num=N;
        while(num>0)
        {
            rem=num%10;
            if(rem==4)
            {
                flag=1;
                break;
            }
            num/=10;
        }
        if(flag==0)
        {
            //printf("Invalid value of N");
            continue;
        }
        B=A=N/2;
        if(N%2!=0)
        A++;
        flag=0;
        check: num=A;
        while(num>0)
        {
            rem=num%10;
            if(rem==4)
            {
                flag=1;
                break;
            }
            num/=10;
        }
        num=B;
        while(num>0)
        {
            rem=num%10;
            if(rem==4)
            {
                flag=1;
                break;
            }
            num/=10;
        }
        if(flag==0)
        {
            printf("Case #%d: %lu %lu",i+1,A,B);
            printf("\n");
            continue;
        }
        flag=0;
        if(A%2!=0)
        flag=1;
        A=A/2;
        B+=A;
        if(flag==1)
        A++;
        flag=0;
        goto check;
    }
    exit(0);
}