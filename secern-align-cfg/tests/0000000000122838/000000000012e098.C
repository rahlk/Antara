#include<stdio.h>
int main()
{
    int i,j,l,T,k,res[100],count[100];
    long int K[100],c[100][100],d[100][100],N[100];
    scanf("%d",&T);
    for( k=0;k<T;k++)
    {
	scanf("%ld",&N[k]);
	scanf("%ld",&K[k]);
    for(i=0;i<N[k];i++)
    {
	scanf("%ld",&c[k][i]);

    }
    for(i=0;i<N[k];i++)
    {
	scanf("%ld",&d[k][i]);

    }

    }
    for( i=0;i<T;i++)
    {count[i]=0;
	for( l=0;l<N[i];l++)
	{for( j=0;j<N[i];j++)
	{
	    if(d[i][l]-c[i][j]<=K[i] && d[i][l]-c[i][j]>=0 && c[i][j]!=0 && d[i][l]!=0 && c[i][j]!=5 && j>=l)
	    {
		count[i]++;
	    }

	}}
    }
    for( i=0;i<T;i++)
    {
	printf("Case #%d: %d\n",i+1,count[i]);
    }

}