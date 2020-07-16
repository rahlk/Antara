#include <stdio.h>
#include<string.h>
int main() {
	long long int t,i,p=0,l;
	char str1[105],str2[105];
	scanf("%lld",&t);
	while(t--)
	{p++;
	  scanf("%s",str1);
	  l=strlen(str1);
	  for(i=0;i<l;i++)
	  {
	      str1[i]=='4';
	      str1[i]='3';
	  }
	  for(i=0;i<l;i++)
	  {
	      str2[i]='1';
	  }
	  printf("Case #%lld: ",p);
	  printf("%s %s\n",str1,str2);
	}
	return 0;
}