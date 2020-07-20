#include<stdio.h>
#include<string.h>

int main()
{
	int t,n,m,s,e,i;
	scanf("%d",&t);
	char soln[t][1998];
	n = t;
	while(t--)
	{
		scanf("%d",&m);
		char in[2*m-2];
		scanf("%s",in);
		s = 0; e = 0;
		/*for(i=0;i<strlen(in);i++)
		{
			if(in[i] == 'S')
				s++;
			if(in[i] == 'E')
				e++;
		}*/
		for(i=0;i<strlen(in);i++)
		{
				if(in[i] == 'S')
				{
					soln[n-t-1][i] = 'E';
					//e--;
				}
				if(in[i] == 'E')
				{
					soln[n-t-1][i] = 'S';
					//s--;
				}
			/*else
			{
				if(s--)
					soln[n-t-1][i] = 'S';
				if(e--)
					soln[n-t-1][i] = 'E';
			}*/
		}
	}
	m = n;
	while(m--)
		printf("Case #%d: %s\n",n-m,soln[n-m-1]);
	return 0;
}
