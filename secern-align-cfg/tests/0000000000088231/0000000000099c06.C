#include<stdio.h>
#include<math.h>

int main()
{
    int i,h,T,count[100];
    unsigned int N[100],A[100],B[100];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
	scanf("%u",&N[i]);
	B[i]=0;
    }
    for(i=0;i<T;i++)
    {                 A[i]=N[i];
		 count[i]=0;
	while(N[i]>0)
	{   
	    
	    count[i]++;
	    if(N[i]%10==4)
	    {
		A[i]=A[i]-3*pow(10,count[i]-1);
		B[i]=B[i]+3*pow(10,count[i]-1);
				N[i]=A[i];
	    }
	    N[i]=N[i]/10;
	}
    }
    for(h=0;h<T;h++)
    {
	printf("Case #%d: %u %u\n",h+1,A[h],B[h]);
    }
}