#include<stdio.h>
int main()
{
    int i,j,T;
    unsigned int N[100];
    char p[100][100000];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
	scanf("%u",&N[i]);
	scanf("%s",p[i]);
    }
    for(i=0;i<T;i++)
    {
	for(j=0;j<2*N[i]-2;j++)
	{
	    if(p[i][j]=='S')
	    {
		p[i][j]='E';
	    }
	    else
	    {
		p[i][j]='S';
	    }
	}
    }
    for(i=0;i<T;i++)
    {
	printf("Case #%d: ",i+1);
	printf("%s",p[i]);
	printf("\n");
    }
}