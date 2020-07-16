#include <stdio.h>
#include <stdlib.h>


int main ()
{
      int a,i,b,c,e;
    scanf("%d",&a);
    printf("\n");
    for(i=1;i<=a;i++)
    {	
        scanf("%d",&b);
        c=rand()%b;
        e=b-c;
        if(c==4 || e==4)
        {
        	system("pause");
        	
      	   	c=rand()%b;
      	   	   e=b-c;
		}
		       printf("case #%d: %d %d",i,c,e);
           printf("\n");
    }
    
    
}