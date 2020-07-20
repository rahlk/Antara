#include<stdio.h>
#include<string.h>
int main()
{
	char A[10000],B[10000];
	int t,c=1;
	int i,j,n,k,N;
	scanf("%d",&t);
	while(c<=t)
	{
		i=0;
		j=0;
		scanf("%d",&n);
		scanf("%s",A);
		n=((2*n)-2);
		N=n;
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
		printf("Case #%d: ",c);
		for(k=0;k<N;k++)
		{
		 printf("%c",B[k]);
		}
		c++;
	}
	return 0;
}