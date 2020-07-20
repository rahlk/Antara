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
		i=0;
		j=0;
		scanf("%d",&n);
		scanf("%s",A);
		n=(2*n)-2;
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
		printf("Case #c: %s\n",B);
		c++;
	}
	return 0;
}