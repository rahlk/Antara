#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i =0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		char s[2*n+2];
		scanf("%s",s);
		char ans[2*n+2];
		int l = strlen(s);
		for(int j =0;j<l;j++)
		{
			if(s[j]=='E')
				ans[j]='S';
			else if(s[j]=='S')
				ans[j] = 'E';
		}
		ans[l]='\0';
		printf("Case #%d: %s\n",i+1,ans);
	//	printf("%d\n",s[l]);
	}
	return 0;
}
