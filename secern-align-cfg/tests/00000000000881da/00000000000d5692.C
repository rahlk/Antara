#include<stdio.h>
int main()
{
	int t,m,n,i;
	scanf("%d",&t);
    n=t;
    char soln[t][2000];
    int len[t];
	while(t--)
	{
		scanf("%d",&m);
		char in[2*m-2];
		len[n-t-1] = 2*m-2;
		scanf("%s",in);
		
		for(i=0;i<strlen(in);i++)
		{
				if(in[i] == 'S')
				{
					soln[n-t-1][i] = 'E';
				}
				if(in[i] == 'E')
				{
					soln[n-t-1][i] = 'S';
				}
		
		}
	}
	m = n;
	while(m--)
	{
		printf("Case #%d: ",n-m);
		for(i=0;i<len[n-m-1];i++)
			printf("%c",soln[n-m-1][i]);
		printf("\n");
	}
	return 0;
}
