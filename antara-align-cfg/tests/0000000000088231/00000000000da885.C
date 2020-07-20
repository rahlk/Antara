#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main()
{
	int t,kase,len,i,last;
	char *str1, *str2;
	
	scanf("%d", &t);
	
	for(kase=1; kase<=t;kase++)
	{
		str1 = (char*)malloc(sizeof(char) * 101);
		str2 = (char*)malloc(sizeof(char) * 101);
		scanf("%s", str1);
		len = strlen(str1);
		last = -1;
		
		for(i=0;i<len;i++)
		{
			str2[i] = '0';
			if(str1[i] == '4')
			{
				str1[i] = '3';
				str2[i] = '1';
				last = last >= 0 ? last : i;
				//printf("%d\r\n", last);
			}
		}
		str1[len] = 0;
		
		printf("Case #%d: %s ", kase, str1);
		for(i=last;i<len;i++)
		{
			printf("%c", str2[i]);
		}
		printf("\n");
	}
	
	return 0;
}

