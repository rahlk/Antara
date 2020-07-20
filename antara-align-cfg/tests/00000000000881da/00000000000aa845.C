#include<stdio.h>
int main()
{
	char A[10000],B[10000];
	int t,c=1;
	long int i,j,n;
	scanf("%d",&t);
	while(c<=t)
	{
		i=0;
		j=0;
		scanf("%ld",&n);
		scanf("%s",A);
		n=((2*n)-2);
		while(n>0)
		{
		if(A[i]=='E')
			{
				B[j]='S';
			}
			else
			{
				B[j]='E';
			}
		i++;
		j++;
		n--;
		}
		printf("Case #%d: %s\n",c,B);
		c++;
	}
	return 0;
}