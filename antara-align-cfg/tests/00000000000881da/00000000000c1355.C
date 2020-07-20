#include<stdio.h>
void main()
{
	int j,i,T,N,P,c=0;
	char a[50000];
	scanf("%d",&T);
	for(j=1; j<=T; j++)
	{
	scanf("%d",&N);
	P = 2*N - 2;
	scanf("%s",&a);
	for( i=0; i < P; i++)
	{
		//printf("\n%c",a[i]);
		if(a[i]=='S'||a[i]=='s')
			{
			       c++;
			       if(c==P/2)
			        return;
			       a[i] = 'E';
			}
		else
			a[i] = 'S';	
		//printf("\t%c",a[i]);	
	}
	printf("Case #%d: %s",j,a);
	}
}

