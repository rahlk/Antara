#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int p;
    for(p=1;p<=t;p++)
    {
        long long int n;
        scanf("%lld",&n);
        char s[2*n],ans[2*n];
        scanf("%s",s);
        int i,k=0,j=0;
        if(s[0]=='S'&&s[strlen(s)-1]=='S')
          {
              for(i=0;i<strlen(s);i++)
                {
                    if(s[i]=='E'&&s[i+1]=='S')
                         j++;
                    else if(s[i]=='E'&&s[i+1]=='E')
                    {
                        j++;break;
                    }
                }
              for(k=0;k<j;k++)
                 ans[k]='E';
              for(k=j;k<j+n-1;k++)
                 ans[k]='S';
              for(k=j+n-1;k<strlen(s);k++)
                 ans[k]='E';
          }
          else if(s[0]=='S'&&s[strlen(s)-1]=='E')
            {
                for(k=0;k<n-1;k++)
                  ans[k]='E';
                for(k=n-1;k<strlen(s);k++)
                  ans[k]='S';
            }
          else if(s[0]=='E'&&s[strlen(s)-1]=='E')
           {
              for(i=0;i<strlen(s);i++)
                {
                    if(s[i]=='S'&&s[i+1]=='E')
                         j++;
                    else if(s[i]=='S'&&s[i+1]=='S')
                    {
                        j++;break;
                    }
                }
              for(k=0;k<j;k++)
                 ans[k]='S';
              for(k=j;k<j+n-1;k++)
                 ans[k]='E';
              for(k=j+n-1;k<strlen(s);k++)
                 ans[k]='S';
           }
           else
            {
                for(k=0;k<n-1;k++)
                  ans[k]='S';
                for(k=n-1;k<strlen(s);k++)
                  ans[k]='E';
            }
            ans[k]='\0';
         printf("Case #%d: %s\n",p,ans);
    }
}
