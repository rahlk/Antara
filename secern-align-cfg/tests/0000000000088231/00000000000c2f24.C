#include <stdio.h>
#include<string.h>
int main() {
	long long int t,i,p=0,l,j,a;
	char str1[105],str2[105],str3[105];
	scanf("%lld",&t);
	while(t--)
	{p++;
	a=0;
	  scanf("%s",str1);
	  l=strlen(str1);
	  printf("Case #%lld: ",p);
	  for(i=0;i<l;i++)
	  {
	      if(str1[i]=='4')
	      {
	      str2[i]='3';
	      str3[i]='1';
	      }
	      else 
	      {
	          str2[i]=str1[i];
	          str3[i]='0';
	      }
	  }
	  printf("%s ",str2);
	  for(j=0;j<l;j++)
	  {
	      if(str3[j]=='0')
	      {
	        a++;
	      }
	      else
	      {
	         
	          break;
	      }
	  }
	  for(i=a;i<l;i++)
	  {
	  printf("%c",str3[i]);
	  }
	  printf("\n");
	}
	return 0;
}