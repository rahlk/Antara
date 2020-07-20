#include<stdio.h>
int main()
{
	int T,f1,f2,i,temp;
	scanf("%d", &T);
	int N[T],A,B,bk;
	for (i=1 ; i<101 && i<=T ; i++)
	{
		scanf("%d",&N[i]);
	}
	for (i=1 ; i<101 && i<=T ; i++)
		{
			for(A=N[i] ; A>0 ; A--)
			{
				bk=A;
				while (bk!=0)
					{
						temp=bk%10;
						bk/=10;
						if(temp==4)
							f1++;
					}
				for(B=1 ; B<N[i] ; B++)
				{
					bk=B;
					while (bk!=0)
						{
							temp=bk%10;
							bk/=10;
							if(temp==4)
								f2++;
						}
					if(f1==0 && f2==0 && (A+B)==N[i])
						{
							printf("Case #%d: %d %d\n",i,A,B);
							goto label;
						}
						f2=0;
				}
				f1=0;
			}
		label:;
		}
	return 0;
}
