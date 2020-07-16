#include<stdio.h>
int main() {
	int i,j,k,t;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
	    char s[102] ,d[102];
	    scanf("%s",&s);
	    for (i=0;i<strlen(s);i++)
	    {
	        if (s[i]=='4')
	        {
	            s [i]='2';
	            d[i]='2' ;
	        }
	        else d[i]='0';
	    }
	    printf("Case #");
	    printf("%d",j);
	    printf(": ");
	    printf("%s ",s);
	    for (i=0;i<strlen(s);i++)
	        if (d[i]=='2')
	          break;
	    for(;i<strlen(s);i++)
	        printf("%c",d[i]);
	       printf("\n");
	}
	return 0;
}