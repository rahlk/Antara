#include<stdio.h>

int main()
{
	int i, T, j, A, k, r=0, p=0, s=0, b=0, l;
	char C[255][501];
	int P[255];
	char M[500];
	scanf("%d", &T);
	for(i=1; i<=T; i++)
	{
		scanf("%d", &A);
		for(j=0; j<A; j++)
		{
			scanf("%s", C[j]);
			P[j]=0;
			M[j]='X';
		}
		b=0;
		l=0;
		while(b<A)
		{
			r=0;
			p=0;
			s=0;
			for(j=0; j<A; j++)
			{
				if(P[j]==1000)
				{
					continue;
				}
				if(C[j][P[j]]=='\0')
				{
					P[j]=0;
				}
				if(C[j][P[j]]=='R')
				{
					r++;
				}
				else if(C[j][P[j]]=='P')
				{
					p++;
				}
				else if(C[j][P[j]]=='S')
				{
					s++;
				}
			}
			if(r!=0&&p!=0&&s!=0)
			{
				break;
			}
			else if(r==0&&p==0)
			{
				b+=s;
				M[l]='R';
			}
			else if(p==0&&s==0)
			{
				b+=r;
				M[l]='P';
			}
			else if(s==0&&r==0)
			{
				b+=p;
				M[l]='S';
			}
			else if(r==0)
			{
				M[l]='S';
				for(j=0; j<A; j++)
				{
					if(P[j]!=1000)
					{
						if(C[j][P[j]]=='S')
						{
							P[j]++;
						}
						else
						{
							b++;
							P[j]=1000;
						}
					}
				}
			}
			else if(p==0)
			{
				M[l]='R';
				for(j=0; j<A; j++)
				{
					if(P[j]!=1000)
					{
						if(C[j][P[j]]=='R')
						{
							P[j]++;
						}
						else
						{
							b++;
							P[j]=1000;
						}
					}
				}
			}		
			else if(s==0)
			{
				M[l]='P';
				for(j=0; j<A; j++)
				{
					if(P[j]!=1000)
					{
						if(C[j][P[j]]=='P')
						{
							P[j]++;
						}
						else
						{
							b++;
							P[j]=1000;
						}
					}
				}
			}
			l++;
		}
		if(b<A)
		{
			printf("Case #%d: IMPOSSIBLE\n", i);
		}
		else
		{
			printf("Case #%d: ", i);
			for(j=0; j<l; j++)
			{
				printf("%c", M[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
