#include<stdio.h>
#include<string.h>
int main()
{
  int Q,i,i3=1,c1;
  scanf("%d",&Q);
  while(Q--)
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
      c1=i;
        c++;
      }
      else
      n1[i]='0';
    }
    printf("Case #%d: %s ",i3++,n);
    int i2;
     for(i2=c1;i2<strlen(n);i2++)
    {
         printf("%c",n1[i2]);
    }
    printf("\n");
  }
}