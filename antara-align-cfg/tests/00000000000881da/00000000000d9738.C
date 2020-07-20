#include<stdio.h>
#include<string.h>

int main()
{
	int t,i;
	long int n,j,k;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%ld\n",&n);
		k=(2*n)-2;
		char l[k],a[k];
		gets(l);
		for(j=0;j<k;j++)
		{
			if(l[j]=='S')
			{
				a[j]='E';
			}
			else
			{
				a[j]='S';
			}
		}
		printf("Case #%d: ",i);
		for(j=0;j<k;j++)
			printf("%c",a[j]);
		
		printf("\n");
	}
	return 0;
}