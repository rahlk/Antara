#include <stdio.h>

int beautifulInteger(unsigned long int N)
{
    if(N<0)
    return 0;
    if(N==0)
    return 1;
    int r;
    while(N>0)
    {
        r=N%10;
        if(r==4)
        return 0;
        N = N/10;
    }
    return 1;
}

unsigned long int getHalf(unsigned long int N)
{
	if(beautifulInteger(N))
	{
		return N;
	}
	return getHalf(N/2);
}
int main()
{
	int numberOfTestCases;
	scanf("%d",&numberOfTestCases);
	for(int i=0;i<numberOfTestCases;i++)
    {
        unsigned long int N,A,B;
        scanf("%lu",&N);
		A = getHalf(N);
	    B = N - A;
        printf("Case #%d: %lu %lu\n",i+1,A,B);
    }
    return 0;
}