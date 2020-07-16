#include<stdio.h>
#include<string.h>
int main()
{
  int m,x,z=1,ctr;
  scanf("%d",&m);
  while(t--)
  {
     char ar[100];
     char arr[100];    
     scanf(" %s",ar);
     int c=0;
     for(x=0;x<strlen(ar);x++)
    {
      if(ar[x]=='4')
      {
         ar[x]='3';
         arr[x]='1';
         if(c==0)
         ctr=x;
         c++;
      }
      else
         arr[x]='0';
    }
    printf("Case #%d: %s ",z++,ar);
  for(int y=ctr;i2<strlen(ar);y++)
    {
      printf("%c",arr[y]);
    }
    printf("\n");
  }
}