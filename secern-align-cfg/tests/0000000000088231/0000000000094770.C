#include <stdio.h>
int main()
{
	int j,i,test;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		int num;
		scanf("%d",&num);
		int a,b;
		for(j=1;j<num/2;j++)
		{
			int count1=0,count2=0;
			a=j;
			b=num-j;
			while(a>0)
			{
				if(a%10==4)
				count1++;
				a=a/10;
			}
			while(b>0)
			{
				if(b%10==4)
				count2++;
				b=b/10;
			}
			if(count1==0&&count2==0)
			{
				printf("Case #%d: %d %d\n",i+1,j,num-j);
				break;
			}
			else
			continue;
		}
	}
}