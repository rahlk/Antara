#include<stdio.h>
#include<math.h>

int main()
{
	int T,i,j,X,A1,B1;
	long N,A,B;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%i",&N);
		j=0;
		A1=0;
		B1=0;
		A=0;
		B=0;
		while(N!=0)
		{
			X=N%10;
			switch(X)
			{
				case 1:
					{
						A1=1;
						B1=0;
						break;
					}
				case 2:
					{
						A1=2;
						B1=0;
						break;
					}
				case 3:
					{
						A1=3;
						B1=0;
						break;
					}
				case 4:
					{
						A1=2;
						B1=2;
						break;
					}
				case 5:
					{
						A1=2;
						B1=3;
						break;
					}
				case 6:
					{
						A1=3;
						B1=3;
						break;
					}
				case 7:
					{
						A1=2;
						B1=5;
						break;
					}
				case 8:
					{
						A1=3;
						B1=5;
						break;
					}
				case 9:
					{
						A1=2;
						B1=7;
						break;
					}
				default :
					{
						A=0;
						B=0;
						break;
					}
			}
			A+=A1*pow(10,j);
			B+=B1*pow(10,j);
			j++;
			N=N/10;
			
		}
			printf("%i\n",A);
			printf("%i\n",B);
	}
	return 0;
}