#include<stdio.h>

int main()
{
	int t,q=1;
	scanf("%d",&t);
	while(q<=t)
	{
		int r,c;
		scanf("%d%d",&r,&c);
		int s[20][20]={0},i,j,k,a,b,o=1;
		if(r<4 && c<4)
			printf("Case #%d: IMPOSSIBLE\n",q);
		else
		{
			a=0;b=0;
			printf("Case #%d: POSSIBLE\n",q);
			printf("%d %d\n",a+1,b+1);
			for(k=1;k<=r*c;k++)
			{
				
				for(i=0;i<r;i++)
				{
					
					for(j=0;j<c;j++)
					{
						if(i==a)
							continue;
						else if(j==b)
							continue;
						else if((a-b)==(i-j))
							continue;
						else if((a+b)==(i+j))
							continue;
						else if(s[i][j]==1)
							continue;
						else
							{
							printf("%d %d\n",i+1,j+1);
							s[i][j]=1;
							a=i;
							b=j;
							}
					}
				}
			}
		
		}
		q++;
	}
	return 0;
}
