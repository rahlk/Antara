#include<stdio.h>
#include<string.h>

int main()
{
	int t,n,m,s,e,i;
	scanf("%d",&t);
	char soln[t][99998];
	n = t;
	while(t--)
	{
		scanf("%d",&m);
		char in[2*m-2];
		scanf("%s",in);
		s = 0; e = 0;
		for(i=0;i<strlen(in);i++)
		{
			if(in[i] == 'S')
				s++;
			if(in[i] == 'E')
				e++;
		}
		if(in[0] == 'S')
		{
			for(i=0;i<e;i++)
				soln[n-t-1][i] = 'E';
			for(i=0;i<s;i++)
				soln[n-t-1][i+e] = 'S';
		}
		else
		{
			for(i=0;i<s;i++)
				soln[n-t-1][i] = 'S';
			for(i=0;i<e;i++)
				soln[n-t-1][i+s] = 'E';
		}
	}
	m = n;
	while(m--)
		printf("Case #%d: %s\n",n-m,soln[n-m-1]);
	return 0;
}
