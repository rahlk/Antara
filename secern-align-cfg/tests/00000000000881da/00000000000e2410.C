#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
      int n,j;
       scanf("%d",&n);
       char s[100000];
       for(j=0;j<100000;j++)
       {
           s[j]=NULL;
          
       }
       scanf("%s",s);
       printf("Case #%d: ",i);
       for(j=0;j<strlen(s);j++)
       {
           if(s[j]=='E')
           printf("S");
           else
           printf("E");
       }
       printf("\n");
    }
}