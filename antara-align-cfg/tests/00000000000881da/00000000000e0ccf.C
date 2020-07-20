#include<stdio.h>
int main()
{
	int tt;
	scanf("%d", &tt);
	for(int tc=1; tc<=tt;tc++)
	{
	int N;
	scanf("%d", &N);
	char* s;
	scanf("%s", s);
	int Cn = 2*N - 2;
	char jam[Cn];
	register int p1=0;
	register int p2=0;
	register int p3=0;
	register int p4=0;
	register int i=0;
	char x = s[i];
	char y;
	if(x=='S')
	{
		p4=p4 + 1;
		y = 'E';
		jam[0] = y;
	}
	if(x=='E')
	{
		p3=p3 + 1;
		y = 'S';
		jam[0] = y;
	}
	int first = 1;
	for(i=0;i<Cn-1;i++)
	{
		char c=s[i];
		if(y=='E')
		{
			if(c=='E' && first == 0)
			{
			//	printf("# E");
				jam[i+1] = 'E';
				p3=p3 + 0, p4=p4 + 1;
			}
			if(c=='E' && first == 1)
			{
			//	printf("# S");
				jam[i+1] = 'S';
				p3 = p3 + 1, p4 = p4 + 0;
				first = 0;
			}
			if(c=='S')
			{
			//	printf("S");
				jam[i+1] = 'S';
				p3 = p3 + 1, p4 = p4 + 0;
			}
		}
		if(y=='S')
		{
			if(c=='S' && first==0)
			{
			//	printf("$ S");
				jam[i+1]='S';
				p3=p3+1, p4=p4+0;
			}
			if(c=='S' && first==1)
			{
			//	printf("$E");
				jam[i+1] = 'E';
				p3=p3+0, p4=p4+1;
				first = 0;
			}
			if(c=='E')
			{
			//	printf("$$ E");
				jam[i+1] = 'E';
				p3=p3+0, p4=p4+1;
			}
		}
//		printf("%d ",i+1);
	}
	jam[Cn]='\0';
	printf("Case #%d: %s\n",tc,jam);
	}
	return 0;
}