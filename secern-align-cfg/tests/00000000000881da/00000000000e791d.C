#include<stdio.h>
int main()
{
	int t,n,i,j;
	char a[1000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d\n%s",&n,&a);
		//scanf("%s",&a);
		printf("Case #%d: ",i+1);
		for(j=0;j<(2*n)-2;j++)
		{
			if(a[j]=='E')
			 printf("S");
			else
			 printf("E");
			
		}
		printf("\n");
	}
	return 0;
}