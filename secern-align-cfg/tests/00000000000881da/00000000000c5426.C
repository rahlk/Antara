#include<stdio.h>
#include<string.h>

int main()
{
	int t,i;
	long int n,h,k;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%ld\n",&n);
		k=(2*n)-2;
		char l[k],a[k];
		gets(l);
		k=strlen(l);
		for(h=0;h<k;h++)
		{
			if(l[h]=='S')
			{
				a[h]='E';
			}
			else
			{
				a[h]='S';
			}
		}
		printf("Case #%d: ",i);
		for(h=0;h<k;h++)
			printf("%c",a[h]);
		
		printf("\n");
	}
	return 0;
}

