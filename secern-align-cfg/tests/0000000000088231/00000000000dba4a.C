#include <stdio.h>
#include<string.h>

int main() {
	long long int t,k=1;
	scanf("%lld",&t);
	while(t--)
	{
	    long long int i,h1,m,l;
	    char c[105],d[105];
	    scanf("%s",c);
	    
	    h1=strlen(c);
	   
	      strcpy(d,c);
	    
    printf("Case #%lld: ",k);

    
    for(i=0;i<h1;i++)
	   {

	      if(c[i]!='4')
	      printf("%c",c[i]);
	      else
	      printf("%c",'2');
	   }
	   printf(" ");

        for(i=0;i<h1;i++)
       {
           if(d[i]=='4')
           {
               m=i;
               break;
           }
           else
           continue;
       }
       
       
       for(i=m;i<h1;i++)
       {
           if(d[i]=='4')
           printf("2");
           else
           printf("0");
       }
        	  k++;
	   printf("\n");
	}
	return 0;
}