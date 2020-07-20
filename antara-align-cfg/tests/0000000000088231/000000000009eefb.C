#include<stdio.h>

long int P,N,M;
long int i,j,n=0,b,c;
long int main()
{
    str:
    
    scanf("%ld",&N);
    M=N;
    while(M!=0)
    {
        P=M%10;
        M/=10;
        if(P==4)
        {
            n++;
        }
    }
    if(n==0)
    {
        goto str;
    }
    
    for(i=1,j=N-1;i<=N-1,j>=1;i++,j--)
    {
        if(N==(i+j))
        {
            b=i;
            c=j;
            while(c!=0)
            {
                P=c%10;
                c/=10;
                if(P==4)
                {
                   	goto end;
                }
        	}
                while(b!=0)
               	{
                	P=b%10;
                   	b/=10;
                    if(P==4)
                    {
                   		goto end;
                   	}
                }
            	printf("%ld\t%ld\n",i,j);
        }
        end:
        printf("\b");
    }
    return 0;
}