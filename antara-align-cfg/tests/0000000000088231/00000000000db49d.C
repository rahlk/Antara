#include<stdio.h>
#include<string.h>
int main()
{
  int t,i,i11=1,ctr;
  scanf("%d",&t);
  while(t--)
  {
  char n[100];
  char n2[100];    
  scanf(" %s",n);
  int c=0;
    for(i=0;i<strlen(n);i++)
    {
      if(n[i]=='4')
      {
        n[i]='3';
        n2[i]='1';
        if(c==0)
    ctr=i;
        c++;
      }
      else
      n2[i]='0';
    }
    printf("Case #%d: %s ",i11++,n);
    int i10;
  for(i10=ctr;i10<strlen(n);i10++)
    {
      printf("%c",n2[i10]);
    }
    printf("\n");
  }
}