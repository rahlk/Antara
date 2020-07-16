#include<stdio.h>
void main()
{
    int t;scanf("%d",&t);int i,j;long int sol[200];
    long int n,ten;
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);ten=n;
        long int tei=1;sol[i*2+1]=0;
        while(ten>0)
        {
            if(ten%10==4)  sol[i*2+1]+=tei;
            tei*=10;ten/=10;
        }
        sol[i*2]=n-sol[i*2+1];
    }
    for(i=0;i<t;i++) 
    {    printf("Case #%d: %ld %ld\n",i+1,sol[i*2],sol[i*2+1]);
    }
}
