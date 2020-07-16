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
		for(j=0;j<(2*n)-2;j=J+2)
		{
			if((a[j]=='E')&&(a[j+1]=='S'))
			 printf("SE");
			else if((a[j]=='S')&&(a[j+1]=='E'))
			 printf("ES");
			else if((a[j]=='E')&&(a[j+1]=='E'))
			 printf("SS");
			else if((a[j]=='S')&&(a[j+1]=='S'))
			 printf("EE");
			
		}
		printf("\n");
	}
	return 0;
}