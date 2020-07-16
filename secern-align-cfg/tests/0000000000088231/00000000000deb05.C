#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define LL long long
#define MM 1000000007
int main()
{
	LL n,i,t,z,counter,temp,ex;
	scanf("%lld",&t);
	for(z=1;z<=t;z++)
	{
		scanf("%lld",&n);
		char str[20]={0};
		counter=0;
		while(n!=0)
		{
			str[counter]=n%10;
			counter++;
			n=n/10;
		}
		char str1[counter],str2[counter];
		for(i=0;i<counter;i++)
		{
			if(str[i]!=4)
			{
				str1[i]=str[i];
				str2[i]=0;
			}
			else
			{
				str1[i]=2;
				str2[i]=2;
			}
		}
		for(i=0;i<counter/2;i++)
		{
			temp=str1[i];
			str1[i]=str1[counter-i-1];
			str1[counter-i-1]=temp;
			temp=str2[i];
			str2[i]=str2[counter-i-1];
			str2[counter-i-1]=temp;
		}
		printf("Case #%lld: ",z);
		for(i=0;i<counter;i++)
		{
			printf("%lld",str1[i]);
		}
		printf(" ");
		i=0;
		while(str2[i]==0)
		i++;
		for(ex=i;ex<counter;ex++)
		{
			printf("%lld",str2[ex]);
		}
		printf("\n");
	}
}