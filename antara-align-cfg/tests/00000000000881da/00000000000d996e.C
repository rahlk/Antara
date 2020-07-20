#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,k,t;
	scanf("%d",&t);
    for(i=0;i<t;++i)
    {
    	char s[50000];
    	scanf("%d",&n);
    	scanf("%s",s);
    	for(k=0;k<2*n-2;++k)
    	{
    		if(s[k]=='E')
    		{
    			s[k]='S';
    		}
    		else
    		{
    			s[k]='E';
    		}

    	}
    	printf("Case #%d: %s\n",i+1,s);
    }
}