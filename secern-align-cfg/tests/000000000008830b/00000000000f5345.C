#include<stdio.h>
int main()
{
	int i,j,n,c=0,b,k=65,l=0,ln,s,p,T;
	scanf("%d",&T);
	scanf("%d%d",&n,&ln);
	int aa[26],val[ln];
	char arr[26];
	for(i=0;i<ln;i++)
	{
		scanf("%d",&val[i]);
	}
	for(i=1;i<=n;i++)
	{
		c=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				c+=1;
				break;
			}
		}
		if(c==0&&i!=1&&i!=2)
		{
			arr[l]=k;
			aa[l]=i;
			k=k+1;
			l=l+1;
		}
	}
	printf("Case #1:\n");
	for(i=0;i<ln;i++)
	{
		for(j=0;j<26;j++)
		{
			for(p=j+1;p<26;p++)
			{
				s=aa[j]*aa[p];
				if(i==0)
				{
				if(s==val[i])
				{
					printf("%c",arr[j]);
					b=aa[p];
					break;
				}
				}
				else
				{
				if(s==val[i]&&aa[j]==b)
				{
					printf("%c",arr[j]);
					b=aa[p];
					break;
				}
				if(s==val[i]&&aa[j]!=b)
				{
					printf("%c",arr[p]);
					b=aa[j];
					break;
				}
				}
				
			}
			
		}
	}
}