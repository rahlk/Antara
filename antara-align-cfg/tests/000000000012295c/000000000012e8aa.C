#include<stdio.h>
int left1[100009],ryt1[100009],left2[100009],ryt2[1000009];
int main()
{
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++)
	{
		for(int i=0;i<100009;i++)
		{
			left1[i]=0;
			ryt1[i]=0;
			left2[i]=0;
			ryt2[i]=0;
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
					left1[y+1]++;
					a1=y+1;
			//	}
			}
			if(d=='S')
			{
				up1--;
			//	if(up1<=0)
			//	{
					left2[y-1]++;
					a1=y-1;
			//	}
			}
			if(d=='E')
			{
				up2++;
			//	if(up2>=0)
			//	{
					ryt1[x+1]++;
					a2=x+1;
			//	}
			}
			if(d=='W')
			{
				up2--;
			//	if(up2<=0)
			//	{
					ryt2[x-1]++;
					a2=x-1;
			//	}
			}
		}
		int max1=0,max2=0,sum1=0,sum2=0;
		for(int i=0;i<100009;i++)
		{
			if(left1[i]>0)
			{
			    left1[i]+=sum1;
			    sum1=left1[i];
			}
				
			if(left2[i]>0)
			{
			    left2[i]+=sum2;
			    sum2=left2[i];
			}
		}
		sum1=0;
		sum2=0;
        for(int i=0;i<100009;i++)
		{
			if(ryt1[i]>0)
			{
			    ryt1[i]+=sum1;
			    sum1=ryt1[i];
			}
				
			if(ryt2[i]>0)
			{
			    ryt2[i]+=sum2;
			    sum2=ryt2[i];
			}
		}
		for(int i=0;i<100009;i++)
		{
		    if(left1[i]+left2[i]>left1[max1]+left2[max1])
		    {
		        max1=i;
		    }
		    if(ryt1[i]+ryt2[i]>ryt1[max2]+ryt2[max2])
		    {
		        max2=i;
		    }
		}
		printf("Case #%d: %d %d\n",q,max2,max1);
	}
	return 0;
}


