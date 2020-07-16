#include <stdio.h>
#include <string.h>
int main()
{   int t,j,f=0,p=0,i;
   
   
   scanf("%d",&t); 
   for(j=1;j<=t;j++){
   char a[105];
   char b[105];
   char c[105];
   f=0;p=0;
      scanf("%s",a);
	  for(i=0;i<strlen(a);i++)
	  {    if(a[i]=='4')
			{   if(f==0)
				{ p=i;
				  f=1;
				}
			   b[i]='3';
			     c[i]='1';
			}
			else
			 {b[i]=a[i];
			     c[i]='0';
			 }
	       
	   
	  
	  }
       printf("Case #%d: %s ",i+1,b);
	    for(i=p;i<strlen(b);i++){
		printf("%c",c[i]);
      }
   
   if(j<t)
   printf("\n");
  } 
  return 0;
}

