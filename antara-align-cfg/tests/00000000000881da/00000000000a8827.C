#include<stdio.h>
#include<math.h>
#include <string.h>
int main()
{
	char A[10000],B[10000];
	int t,c=1,n;
	int i,j;
	scanf("%d",&t);
	while(c<=t)
	{
		scanf("%d",&n);
		scanf("%s",A);
		while(n>0)
		{
		i=0;
		j=0;
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
		printf("Case #c: %s",B);
		c++;
	}
	return 0;
}