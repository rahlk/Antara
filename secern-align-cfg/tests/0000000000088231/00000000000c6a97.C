#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,i3=1,ctr=0;
	scanf(" %d",&t);
	while(t--)
	{
		ctr=-1;
	char n[100];
	char n1[100];		
	scanf(" %s",n);
		for(i=0;i<strlen(n);i++)
		{
			if(n[i]=='4')
			{
				n[i]='3';
				n1[i]='1';
				ctr=i;
			}
		}
		printf("Case #%d: %s ",i3++,n);
		for(int i2=ctr;i2>=0;i2--)
		{
			printf("%c",n1[i2]);
		}
		for(i=0;i<strlen(n);i++)
		{
			n1[i]='0';
		}
	}
}