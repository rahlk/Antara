#include<stdio.h>

int P,N,M;
int i,j,n=0,b,c;
int main()
{
    str:
    printf("Enter the number who contain atleast one '4' number.");
    
    printf("\nEnter the number : ");
    scanf("%d",&N);
    M=N;
    while(M!=0)
    {
        P=M%10;
        M=M/10;
        if(P==4)
        {
            n++;
        }
    }
    if(n==0)
    {
        printf("You enter wrong number.\n");
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
                c=c/10;
                if(P==4)
                {
                   	goto end;
                }
        	}
                while(b!=0)
               	{
                	P=b%10;
                   	b=10;
                    if(P==4)
                    {
                   		goto end;
                   	}
                }
            	printf("%d\t%d\n",i,j);
        }
        end:
        printf("\b");
    }
    return 1;
}