#include <stdio.h>
#include <stdlib.h>

int verif(int a)
{
	int i,j;
    i=a%10;
    j=a/10;
while(i!=0 || j!=0)
{
    if(i==4)
    {
        return 0;
    }
    else
    {
        i=j%10;
        j=j/10;
        
    }
}
return 1;
}

//*******************************
int main(int argc, char *argv[]) {
   
      int a,i,b,c,e;
    scanf("%d",&e);
    for(i=1;i<=e;i++)
    {
	scanf("%d",&a);	
      b=a-1;
      c=a-b;
      while(verif(b)==0 || verif(c)==0)
      {
    
          if(b==0)
          {
              b=c;
          }
          b=(b-1);
          c=a-b;
      }
		       printf("Case #%d: %d %d",i,b,c);
           printf("\n");
    }
}