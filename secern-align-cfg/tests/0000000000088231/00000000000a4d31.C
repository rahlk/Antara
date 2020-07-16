#include<stdio.h>
#include<string.h>

int main()
{
	char r[105],ans[105];
	int tt,t,i;
	int bo;
	
	scanf("%d",&tt);
	
	for(t=1;t<=tt;t++)
	{
		scanf("%s", r);
		
		bo=-1;
		for(i=0;i<strlen(r);i++)
		{
			if(bo==-1 && r[i]=='4')
			bo=i;
			
			if(r[i]=='4')
			{
				ans[i]='1';
				r[i]='3';
			}
			else
			ans[i]='0';
		}
		
			printf("Case #%d: ",t);
			
			for(i=0;i<strlen(r);i++)
			{
				printf("%c",r[i]);
			}
			printf(" ");
			
			for(i=bo;i<strlen(r);i++)
			{
				printf("%c",ans[i]);
			}
			
			printf("\n");
			
		
	}
	
	return 0;
}