#include <stdio.h>
int main()
{
	char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int prime[26]={ 3, 5 , 7 , 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97,101,103};
	int test,i,j,k;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		int max,n,num;
		scanf("%d %d",&max,&n);
		int count=0,index=25;
		if(max%2==0)
		max=max-1;
		for(j=max;j>=0;j=j-2)
		{
			int ct=0;
			for(k=3;k<j;k=k+2)
			{
				if(j%k==0)
				ct++;
			}
			if(ct==0)
			{
				prime[index]=j;
				index--;
				count++;
			}
			if(count>26)
			break;
		}
		printf("Case #%d: ",i+1);
		int x;
		scanf("%d",&num);
		for(k=0;k<26;k++)
		{
			if(num%prime[k]==0)
			{
				x=num/prime[k];
				printf("%c",arr[k]);
				break;
			}
		}
		for(j=1;j<n;j++)
		{
			scanf("%d",&num);
			for(k=0;k<26;k++)
			{
				if(num%prime[k]==0&&prime[k]==x)
				{
					x=num/prime[k];
					printf("%c",arr[k]);
					break;
				}
			}
		}
    }
}