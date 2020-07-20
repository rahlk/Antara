#include<stdio.h>
int main()
{
	int t,n,i,j;
	char a[10];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d\n%s",&n,&a);
		//scanf("%s",&a);
		printf("Case #%d: ",i+1);
		for(j=0;j<(2*n)-2;j=j+2)
		{
			if((j==(2*n)-4)&&(j!=0))
			 break;
			if((a[j]=="E")&&(a[j+1]=="S"))
			{
				printf("SE");
			}
		   else	if((a[j]=='E')&&(a[j+1]=='E'))
			{
				printf("SEE");
			}
			else if((a[j]=='S')&&(a[j+1]=='S'))
			{
				printf("ESS");
			}
			else if((a[j]=='S')&&(a[j+1]=='E'))
			{
				printf("ES");
			}
			
		}
		printf("\n");
	}
	return 0;
}