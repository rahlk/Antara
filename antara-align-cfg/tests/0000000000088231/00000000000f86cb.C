#include<stdio.h>
#include<math.h>
int p,l, flag;
int checkfour(int n, int fl)
{
    int a, bb,i;
    bb=1;
    a=n%10;
    p++;
    if(a==4)
    {
        for(i=1;i<p;i++)
        {
            bb=bb*10;
        }
    	fl=fl+bb;
	}
	
	if((n/10)!=0)
	{
		n=n/10;
		checkfour(n,fl);
	}
	else
	{
		return fl;
	}
}
int main()
{
    //take in T
    int t;
    scanf("%d",&t);
    int j;
    for(j=0;j<t;j++)
    {
        int A, B, N;
    	int i,ans;
    	i=j+1;
    	p=0;
        flag=0;
        //take in n
        scanf("%d",&N);
        ans=checkfour(N,0);
        A=ans;
        B=N-ans;
    	printf("\nCase #%d %d %d", i, A, B);   
    }
    return 0;
}