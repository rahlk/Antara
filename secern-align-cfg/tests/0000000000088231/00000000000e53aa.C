#include<stdio.h>
long long int todig(char *s)
{
	int num,x;
	for(num=x=0;s[x]!='\0';x++)
		num=num*10+s[x]-48;
	return num;
}
int main()
{
	int t,cs,x,y;char s[102],s2[102];
	scanf("%d",&t);
	for(cs=1;cs<=t;cs++)
	{
		s2[0]='0';s2[1]='\0';
		scanf("%s",s);
		for(x=y=0;s[x]!='\0';x++)
			if(s[x]=='4')
			{
				s[x]='3';
				s2[y++]='1';
				s2[y]='\0';
			}
			else if(y) 
			{
				s2[y++]='0';
				s2[y]='\0';
			}
		long long int res1=todig(s),res2=todig(s2);
//		if(res2==0&&res1!=0) res2=res1---res1;
//		if(res1%10==4) res2=res1---res1;
		printf("Case #%d: %lld %lld\n",cs,res1,res2);
	}
	return 0;
}
