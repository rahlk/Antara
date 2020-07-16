#include <stdio.h>

void main()
{
    int rev,N,T,t,i,j,cpy;
    int eight,A=0,B=0;
    int Arr1[100],Brr[100];
    scanf("%d",&T);
    t=T;
    while(T--)
    {
        A=B=0;
        scanf("%d",&N);
        cpy=N;
        for(i=0;cpy>0;i++,cpy/=10)
        {
            Arr1[i]=cpy%10;
            Brr[i]=0;
            if(Arr1[i]==4)
            {
                Arr1[i]=3;
                Brr[i]=1;
            }

        }
        for(j=i-1;j>=0;j--)
        {
            A=A*10+Arr1[j];
            Arr1[i]=0;
            B=B*10+Brr[j];
            Brr[i]=0;

            }
        printf("Case #%d: %d %d\n",t-T,A,B);
    }
}

