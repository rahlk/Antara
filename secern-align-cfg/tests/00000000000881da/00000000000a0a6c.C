#include"stdio.h"
#include"string.h"
#include"math.h"
#include"stdlib.h"
#include"ctype.h"
#include"limits.h"
#include"time.h"
#include"stdbool.h"
#define ll long long

int main()
{
	clock_t lnh=clock();
	int t,d=1;
	scanf("%d",&t);
	while(t--)
	{
	ll n,c=0,i,j,k;
	scanf("%lld",&n);
	char p[2*n-1], mp[2*n-1];
	int a[n][n];
	scanf("%s",p);
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	a[i][j]=0;
	
	for(i=j=k=0;k<(2*n-1);k++)
	{
		if(p[k]=='S')
		{
			a[i][j]=1;
			i++;
		}
		else if(p[k]=='E')
		{
			a[i][j]=2;
			j++;
		}
		
	}
	

	for(i=j=k=0;((i<n-1)||(j<n-1));k++)
	{
		if(a[i][j]==1)
		{
			mp[k]='E';
			j++;
		}
		else if(a[i][j]==2)
		{
			mp[k]='S';
			i++;
		}
		else
		{
			mp[k]=(mp[k-1]=='S')?'E':'S';
			(mp[k-1]=='S')?j++:i++;
		}
	}
	mp[k]='\0';
	
	printf("%s",mp);
	printf("\n");
	}

	clock_t cls=clock();
	//printf("Execution Time: %fms\n",(double)((cls-lnh)*1000)/CLOCKS_PER_SEC);

	return 0;
}