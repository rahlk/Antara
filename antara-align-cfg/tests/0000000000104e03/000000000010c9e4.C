#Include<stdio.h>
int main()
{
	int t,n,n1;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&n1);
		if(n1==n)
		{
			printf("Case #%d: IMPOSSIBLE",t);
		}
	}
}