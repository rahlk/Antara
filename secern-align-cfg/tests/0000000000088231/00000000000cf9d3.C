
#include<stdio.h>
#include<string.h>
int main()
{
    
  int r,s,s3=1,ctr;
  scanf("%d",&r);
  while(r--)
  {
      
  char b[100];
  char b1[100];    
  scanf(" %s",b);
  int n=0;
    for(s=0;s<strlen(n);s++)
    {
        
      if(b[i]=='4')
      {
          
        b[i]='3';
        b1[i]='1';
        if(n==0)
    ctr=s;
        n++;
      }
      else
      b1[i]='0';
    }
    printf("Case #%d: %s ",s3++,b);
    int s2;
  for(s2=ctr;s2<strlen(b);s2++)
    {
        
      printf("%c",b1[s2]);
      
    }
    printf("\n");
  }
}