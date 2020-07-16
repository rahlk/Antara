#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        char s[105],a[105],b[105];
        scanf("%s",s);
        int i,k=0,l=0;
        for(i=0;i<strlen(s);i++)
          {
              if(s[i]=='4')
                 {
                     a[i]='3';
                     b[l++]='1';
                     k=1;
                 }
              else
                {
                     a[i]=s[i];
                     if(k==1)
                       b[l++]='0';
                }
          }
          a[i]='\0';b[l]='\0';
          //printf("%s %s\n",a,b);
        printf("Case #%d: %s %s\n",j,a,b);
     }
}
