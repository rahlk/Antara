#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		char N[101];
		fflush(stdin);
		gets(N);
		int arrstore[101];
		int count=0;
		int i,num[101];
		for(i=0;i<strlen(N);i++)
		{
			if(N[i]=='4')
			{
				arrstore[count]=i;
				count++;
				N[i]='2';
			}
			num[i]=N[i]-'0';
		}
		int B[101];
		int k=0;
		for(i=0;i<strlen(N);i++)
		{
			if(arrstore[k]==i)
			{
				B[i]=2;
				k++;
			}
			else
			{
				B[i]=0;
			}
			
		}
		
		printf("Case #%d: ",j+1);
		for(i=0;i<strlen(N);i++)
		{
			printf("%d",num[i]);
		}
		printf(" ");
		for(i=0;i<strlen(N);i++)
		{
			printf("%d",B[i]);
		}
	}
}