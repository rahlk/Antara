# include<stdio.h>
# include<stdlib.h>
void gen_ran(int,int);
int check_digit(int,int);
int main()
{
	int T;
	scanf("%d",&T);
	for(int i=1;i<=T;i++)
	{
		int N;
		scanf("%d",&N);
		gen_ran(i,N);
		
	}
	return 0;
}
	void gen_ran(int t,int N)
	{
		int A=rand()%N+1;
		int B=rand()%N+1;
		printf("%d %d\n",A,B);	
		if(A+B==N)
		{
			if(check_digit(A,B)==0)
			gen_ran(t,N);
			else
			printf("case #%d: %d %d\n",t,A,B);
		}
		else
			gen_ran(t,N);
	}

	int check_digit(int p,int q)
	{
		int t=1;
		while(p!=0 || q!=0)
		{
			int rem1=p/10;
			int rem2=q/10;
			p=p/10;
			q=q/10;
			if(rem1==4 || rem2==4)
			{
				t=0;
				break;
			}	
		}
		printf("%d ",t);
		return t;
}
