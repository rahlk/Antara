#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i=0,a=0,b=0,c=0;
        char s[50010],ans[50010];
        scanf("%d %s",&n,s);
        while(s[i+1]!='\0')
        {
            a=i;
            while( (s[i]!='S' || s[i+1]!='E' ) && s[i+1]!='\0')
            {
                if(s[i]=='S')
                {
                    b++;
                }
                else
                {
                    c++;
                }
                i++;
            }
            for(;a<i;a++)
            {
                if(s[0]=='S')
                {
                    for(;a<c;a++)
                    {
                        ans[a]='E';
                    }
                    for(a=c;a<(c+b);a++)
                    {
                        ans[a]='S';
                    }
                }
                else
                {
                    for(;a<b;a++)
                    {
                        ans[a]='S';
                    }
                    for(a=b;a<(c+b);a++)
                    {
                        ans[a]='E';
                    }
                }
            }
            while(s[i]=='S' && s[i+1]=='E')
            {
                ans[a]='E';
                ans[a+1]='S';
                a+=2;
                i+=2;
            }
        }
        for(int j=0;j<2*(n-1);j++)
        {
            printf("%c",ans[j]);
        }
        printf("\n");
    }
}