#include <stdio.h>

int main()
{
    int t;
    int x=1;
    int i,n;
    scanf("%d", &t);
    while(t--){
    char str[50001];
  	scanf("%d",&n);
  	gets(str);
  	gets(str);
  	int len=strlen(str);
  	for(i = 0; i < len; i++)
  	{
  		if(str[i] == 'E')  
		{
  			str[i] = 'S';
 		}
 		else
 		str[i]='E';
	}
    printf("Case #%d: %s\n",x,str);
    x++;
    }
  	return 0;
}