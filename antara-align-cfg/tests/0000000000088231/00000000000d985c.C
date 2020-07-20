#include <stdio.h>
#include<string.h>

int main() {
	long long int t,p=1;
	scanf("%lld",&t);
	while(t--)
	{
	    long long int i,z,m,l;
	    char a[100],b[100];
	    scanf("%s",a);
	    
	    z=strlen(a);
	   
	      strcpy(b,a);
	    
    printf("Case #%lld: ",p);

    
    for(i=0;i<z;i++)
	   {

	      if(a[i]!='4')
	      printf("%c",a[i]);
	      else
	      printf("%c",'2');
	   }
	   printf(" ");

        for(i=0;i<z;i++)
       {
           if(b[i]=='4')
           {
               m=i;
               break;
           }
           else
           continue;
       }
       
       
       for(i=m;i<z;i++)
       {
           if(b[i]=='4')
           printf("2");
           else
           printf("0");
       }
        p++;	  
	   printf("\n");
	}
	return 0;
}