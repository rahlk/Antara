#include<stdio.h>
int main()
{
	int T,N,temp;
	int i=0,k=0;
	scanf("%d",&T);	
	for(i=0;i<T;i++)
{
	scanf("%d",&N);
	char str[2*(N-1)];
	scanf("%s",str);
	for(k=0;k<2*(N-1);k++)
	{
	 if(str[k]=='E')
		str[k]='S';
	else if(str[k]=='S')
		str[k]='E';
	}
	printf("Case #%d: %s",(i+1),str);
}

return 0;
}