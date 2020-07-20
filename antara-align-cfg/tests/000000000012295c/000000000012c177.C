#include<stdio.h>
int left[100009],ryt[100009];
int main()
{
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++)
	{
		for(int i=0;i<100009;i++)
		{
			left[i]=0;
			ryt[i]=0;
		}
		int n,m,up1=0,up2=0;
		int a1=0,a2=0;
		scanf("%d %d",&n,&m);
		while(n--)
		{
			int x,y;
			char d;
			scanf("%d %d %c",&x,&y,&d);
			if(d=='N')
			{
				up1++;
				//if(up1>=0)
			//	{
					left[y+1]++;
					a1=y+1;
			//	}
			}
			if(d=='S')
			{
				up1--;
			//	if(up1<=0)
			//	{
					left[y-1]++;
					a1=y-1;
			//	}
			}
			if(d=='E')
			{
				up2++;
			//	if(up2>=0)
			//	{
					ryt[x+1]++;
					a2=x+1;
			//	}
			}
			if(d=='W')
			{
				up2--;
			//	if(up2<=0)
			//	{
					ryt[x-1]++;
					a2=x-1;
			//	}
			}
		}
		int max1=0,max2=0;
		for(int i=0;i<100009;i++)
		{
			if(left[max1]<left[i])
				max1=i;
			if(ryt[max2]<ryt[i])
				max2=i;

		}

		printf("Case #%d: %d %d\n",q,max2,max1);
	}
	return 0;
}


