#include<stdio.h>
#include<math.h>
void main()
{
    int m=1,t;
    scanf("%d",&t);
    while(m<=t)
    {
        int A=0,B=0,num,d,i,k=0,c=0,N;
        scanf("%d",&N);
        num=N;
        for(i=0;N!=0;i++)
        {
            c++;
            N=N/10;
        }
        N=num;
        int f[c];
        c=0;
        for(i=0;N!=0;i++)
        {
            d=N%10;
            c++;
            N=N/10;
            if(d==4 && i==0)
            {
                k=1;
                continue;
            }
            if(d==4)
            {
                f[i]=i;
            }
            else
                f[i]=0;
        }
        if(k==1)
        {
            A=1;
        }
        for(i=1;i<c;i++)
        {
            if(f[i]>0)
            {
                A=A+pow(10,f[i]);
            }
        }
        B=num-A;
        printf("Case #%d: %d %d",m,A,B);
        m++;
    }
}