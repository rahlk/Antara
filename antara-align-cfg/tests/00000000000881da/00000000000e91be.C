#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define LL long long
#define MM 1000000007
int main()
{
	LL n,i,t,z,row1,column1,row2,column2,flag;
	char temp;
	scanf("%lld",&t);
	for(z=1;z<=t;z++)
	{
		scanf("%lld%c",&n,&temp);
		char str[2*n-2];
		row1=1,column1=1,row2=1,column2=1,flag=0;
		gets(str);
		printf("Case #%lld: ",z);
		for(i=0;i<2*n-2;i++)
		{
		//	printf("hei\n");
			if(row1==row2 && column1==column2)
			{
		//		printf("he\n");
				if(n-row1==1 && n-column1==1)
				{
		//			printf("hello\n");
					if(str[i]=='E')
					{
						printf("SE\n");
						flag=1;
						break;
					}
				//	printf("kaise\n");
					else
					{
						printf("ES\n");
						flag=1;
						break;
					}
				}
				else if(row1==column1)
				{
					if(str[i]=='E')
					{
						printf("S");
						row1++;
						column2++;
					}
					else
					{
						printf("E");
						column1++;
						row2++;
					}
				}
				else
				{
					if(str[i]=='E')
					{
						column2++;
						row1++;
						printf("S");
					}
					else
					{
						row2++;
						column1++;
						printf("E");
					}
				}
			}
			else if(row1==n-1 && column1==n-1 )
			{
				if(row2+1==n-1)
				{
					printf("SE\n");
					flag=1;
					break;
				}
				else
				{
					printf("ES\n");
					flag=1;
					break;
				}
			}
			else if(row1<column1)
			{
				row1++;
				printf("S");
				if(str[i]=='E')
				column2++;
				else
				row2++;
			}
			else
			{
				column1++;
				printf("E");
				if(str[i]=='E')
				column2++;
				else
				row2++;
			}
		}
		if(flag==0)
		printf("\n");
	}
}