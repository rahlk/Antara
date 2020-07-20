#include<string.h>
int main()
{
  int a,i,x=1,c;
  scanf("%d",&a);
  while(t--)
  {
  char n[100];
  char n1[100];    
  scanf(" %s",n);
  int c=0;
    for(i=0;i<strlen(n);i++)
    {
      if(n[i]=='4')
      {
        n[i]='3';
        n1[i]='1';
        if(c==0)
    c=i;
        c++;
      }
      else
      n1[i]='0';
    }
    printf("Case #%d: %s ",x++,n);
    int y;
  for(y=c;y<strlen(n);y++)
    {
      printf("%c",n1[y]);
    }
    printf("\n");
  }
}