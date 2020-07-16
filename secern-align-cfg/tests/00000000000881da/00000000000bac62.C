#include<stdio.h>
#include<string.h>
int main()
{
    int t,i=1;scanf("%d",&t);
    while(t--)
    {
        int n,j;scanf("%d",&n);
        char s[n];scanf("%s",s);
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='S')
            {
                s[i]='E';j=i+1;
                while(s[j]=='S')
                {
                    j++;
                }
                s[j]='S';i=j;
            }
            else if(s[i]=='E')
            {
               s[i]='S';j=i+1;
                while(s[j]=='E')
                {
                    j++;
                }
                s[j]='E';i=j;
            }
            
        }
        printf("Case #%d: %s\n",i++,s);
    }
}