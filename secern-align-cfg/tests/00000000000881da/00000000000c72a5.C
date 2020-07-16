#include<stdio.h>
int main()
{
  int t,n;
  scanf("%d",&t);
  int i;
  for(i=1;i<=t;i++)
  {
    scanf("%d",&n);
    char s[2*n-2];
    scanf("%s",s);
    char c[2*n-2];
    int j=0;
    while(s[j]!='\0')
    {
      if(s[j]=='E')
      {
        c[j]='S';
      }
      else
      {
        c[j]='E';
      }
      j++;
    }
    c[2*n-2]='\0';
    printf("Case #%d %s\n",i,c);
  }
}
