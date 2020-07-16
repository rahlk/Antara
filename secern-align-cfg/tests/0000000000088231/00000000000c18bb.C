#include<stdio.h>
#include<math.h>
void main()
{
    int T,i,j,k,len1=1;
    long long int N,temp,temp1,c1,c2;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld",&N);
        temp=N;
        if(N%2==0)
            c1=c2=temp/2;
        else
        {
            c1=(temp+1)/2;
            c2=(temp-1)/2;
        }
        temp=c1;
        while(temp!=0)
        {
            temp/=10;

            len1++;

        }

        temp=c1;
        temp1=c2;
        for(k=1;k<=len1;k++)
        {

            if(temp%10==4)
            {
                c1+=1*pow(10,k-1);
                c2-=1*pow(10,k-1);

            }
            temp/=10;

            temp1=c2;
            if(temp1%10==4)
            {
                c1+=2*pow(10,k-1);
                c2-=2*pow(10,k-1);
            }temp1/=10;

        }
        printf("Case %d: %lld %lld",i,c1,c2);
        fflush(stdin);

    }
}
