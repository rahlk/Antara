#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a=1;
	int i=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		int b=2;
		int j=0;
		char str[3000];
		scanf("%d",&b);
		scanf("%s",str);
		for(j=0;j<2*b-2;j++)
		{
			if(str[j]=='S')
			{ 
				str[j]='E';
			}
			else
			{
				str[j]='S';
			}
		}
		printf("Case #%d: %s\n",i+1,str);
	}
	
    return 0;
}
