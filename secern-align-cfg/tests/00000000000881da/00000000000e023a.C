#include <stdio.h>
#include<string.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	int i;
	for(i=1;i<=t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    char s[(2*n)-1];
	    scanf("%s",s);
	    int j;
	    char ch;
	    printf("Case #%d: ",i);
	    for(j=0;j<strlen(s);j++)
	    {
	        ch=s[j];
	        if(s[j+1]==ch)
	        {
	            if(s[j]=='E')
	            printf("S");
	            else
	            printf("E");
	        
	        j++;
	        while(1) 
	        { 
	            if(s[j]!=ch)
	            {
	                if(s[j]=='E')
	                printf("S");
	                else
	                printf("E");
	                break;
	            }
	            else
	            printf("%c",s[j]);
	            j++;
	        }
	        }
	        else
	        {
	            if(s[j]=='E')
	            printf("S");
	            else
	            printf("E");
	            j++;
	            while(1)
	            {
	                if(s[j+1]!=ch&&s[j+2]==ch&&j+2<strlen(s)||j==strlen(s)-1)
	                {
	                    if(s[j]=='E')
	                    printf("S");
	                    else
	                    printf("E");
	                    break;
	                }
	                else
	                printf("%c",s[j]);
	                j++;
	            }
	        }
	    }
	    printf("\n");
	}
	return 0;
}

