#include <stdio.h>
#include <string.h>
int main(void) 
{
	int t, n, i, t1=0, len;
	char m[2]={'S','E'};
	scanf("%d",&t);
	while(t>0)
	{
		char p[99998], p1[99998];
		scanf("%d",&n);
		scanf("%s", &p);
		len=strlen(p);
		for(i=0;i<len;i++)
		{
			p1[i]=p[i];
			if(p[i]=='S')
			{
				p1[i]='E';
			}
			if(p[i]=='E')
			{
				p1[i]='S';
			}
		}
		t1++;
		printf("Case #%d: ",t1);
		for(i=0;i<len;i++)
		{
			printf("%c", p1[i]);
		}
		printf("\n");
		t--;
	}
	return 0;
}
