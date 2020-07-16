#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int gcd(int a, int b)
{
	int t;
	if(b>a)
	{
		t=a;
		a=b;
		b=t;
	}
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	return a;
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
		for(j=0; j<l-1; j++)
		{
			if(x[j]!=x[j+1])
			{
				break;
			}
		}
		p[j+1]=gcd(x[j], x[j+1]);
		for(k=j; k>=0; k--)
		{
			p[k]=x[k]/p[k+1];
		}
		for(k=j+2; k<=l; k++)
		{
			p[k]=x[k-1]/p[k-1];
		}
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
