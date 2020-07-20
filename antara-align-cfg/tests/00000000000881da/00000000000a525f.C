#include<stdio.h>
int main()
{
    int t,n,i,c=1;
    scanf("%d",&t);
    while(t--)
    {
      printf("Case #%d: ",c);
      scanf("%d",&n);
      char s[n*n];
      scanf("%s",s);
      for(i=0;s[i]!='\0';i++)
      {
          if(s[i]=='E')printf("S");
          else         printf("E");
      }printf("\n");c++;
    }
}