#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int t, i, p[101], pc[101], l, n, j, x[101], k, c[26];
	scanf("%d", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%d %d", &n, &l);
		for(j=0; j<l; j++)
		{
			scanf("%d", &x[j]);
		}
		for(k=2; k<x[0]; k++)
		{
			if(x[0]%k==0)
			{
				break;
			}
		}
		for(j=1; j<l; j++)
		{
			if(x[j]%k==0)
			{
				p[j-1]=x[j-1]/k;
				p[j]=k;
			}
			else
			{
				p[j-1]=k;
				p[j]=x[j-1]/k;
			}
			k=x[j]/p[j];
		}
		p[j]=k;
		for(j=0; j<=l; j++)
		{
			pc[j]=p[j];
		}
		qsort(pc, l+1, sizeof(int), cmpfunc);
		k=1;
		c[0]=pc[0];
		for(j=1; j<=l; j++)
		{
			if(pc[j]!=pc[j-1])
			{
				c[k]=pc[j];
				k++;
			}
		}
		printf("Case #%d: ", i);
		for(j=0; j<=l; j++)
		{
			for(k=0; k<26; k++)
			{
				if(p[j]==c[k])
				{
					printf("%c", 'A'+k);
					break;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
