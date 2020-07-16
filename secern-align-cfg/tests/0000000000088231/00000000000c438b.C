#include<stdio.h>
int main()
{
    int T,i=1;long int a,b,r,d,s,N,A,B;
    scanf("%d\n",&T);
    while(i<=T)
    {
        scanf("%li\n",&N);
        for(A=N-1,B=1;A>0&&B>0;A--,B++)
        {
            d=0;s=0;
            a=A;b=B;
            while(a>0)
            {
                r=a%10;
                if(r==4)
                {
                    d=1;
                    break;
                }
                a=a/10;
            }
            while(b>0&&d==0)
            {
                r=b%10;
                if(r==4)
                {
                    s=1;
                    break;
                }
                b=b/10;
            }
            if(d==0&&s==0)
            {
                printf("Case #%d: %li %li\n",i,A,B);
                break;
            }
        }
        i++;
    }
    return 0;
}