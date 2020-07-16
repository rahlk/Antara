#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	int i,j,len,value2=0;
	char arr[1000];
	for(i=1;i<=T;i++)
	{
		value2=0;
		scanf("%s",arr);
		len=strlen(arr);
		for(j=len-1;j>=0;j--)
		{
			if(arr[j]=='4')
			{
				arr[j]='3';
				value2+=pow(10,len-j-1);
			}
		}
		printf("Case #%d: %d %s\n",i,value2,arr);
	}
}