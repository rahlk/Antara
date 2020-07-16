#include <stdio.h>
#include <string.h>
int main(void) {
	int t,i=1;
	scanf("%d",&t);
	while(i<=t)
	{
		i++;
		int n,count1=0,count2=0,count3=0;scanf("%d",&n);
		char s[n][500];
		for(int j=0;j<n;j++)
		{
			scanf("%s",s[j]);
		}char str[strlen(s[0])];int a=0;
		if(n==1){if(s[0][0]=='R'){printf("Case #%d: P\n",i-1);}
		else if(s[0][0]=='S'){printf("Case #%d: R\n",i-1);}
		else if(s[0][0]=='P'){printf("Case #%d: S\n",i-1);}}
		
		else{
			for(int k=0;k<strlen(s[0]);k++)
			{	
				for(int j=0;j<n;j++)
				{
					if(s[j][k]=='R')
					{
						count1=1;
					}
					else if(s[j][k]=='S')
					{
						count2=1;
					}
					else if(s[j][k]=='P')
					{
						count3=1;
					}
				}
				if(count1&&count2&&count3)
				{
					printf("Case #%d: IMPOSSIBLE\n",i-1);break;
				}
				else if(count1&&count2)
				{
					str[a]='R';a++;
				}
				else if(count1&&count3)
				{
					str[a]='P';a++;
				}
				else if(count2&&count3)
				{
					str[a]='S';a++;
				}
				else if(count1){str[a]='P';printf("Case #%d: %s",i=1,str);break;}
				else if(count2){str[a]='R';printf("Case #%d: %s",i=1,str);break;}
				else if(count3){str[a]='S';printf("Case #%d: %s",i=1,str);break;}
			}
		}
	}
	return 0;
}
