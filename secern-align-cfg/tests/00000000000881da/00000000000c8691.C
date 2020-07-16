#include<stdio.h>
#include<string.h>
char arr[1000000];
int main()
{
	int t;
	scanf("%d",&t);
	for(int q=1;q<=t;q++)
	{
		int n;
		scanf("%d",&n);
		scanf("%s",arr);
		int l=strlen(arr);
		printf("Case #%d: ",q);
		for(int i=0;i<l;i++)
		{
			if(arr[i]=='E')
				printf("S");
			else
				printf("E");
		}
		printf("\n");
	}
	return 0;
}

			
