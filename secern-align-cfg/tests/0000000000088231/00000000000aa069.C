#include<stdio.h>

int A[100],B[100];
int P,N,M,k=0;
int i,j,n=0,b,c,T;
int main()
{
	printf("Enter case : ");
	scanf("%d",&T);
    str:
    printf("Enter the number who contain atleast one '4' number.\n");
    
    for(i=0;i<T;i++)
    {
    printf("\nEnter the number : ");
    scanf("%d",&N);
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
            	A[k]=i;
            	B[k]=j;
            	k++;
            	goto end1;
        }
        end:
        printf("\b");
    }
    end1:
    printf("\b");
	}
	
	for(i=0;i<T;i++)
	{
		printf("case #%d %d %d\n",i+1,A[i],B[i]);
	}
	return 0;
}