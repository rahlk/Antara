# include <stdio.h>
int main()
{
    int i,j,t,a,f;
    char str[500], ans, p;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &a);
        for(j=0,f=1; j<a; j++)
        {
            scanf("%s", str);
            if(j==0)
            {
                if(str[0]=='R')
                    ans = 'P';
                else if(str[0]=='P')
                    ans = 'S';
                else if(str[0]=='S')
                    ans = 'R';
            }
            else
            {
                if(str[0]==ans)
                {
                    for(int l=1; str[l]!='\0'; l++)
                    {
                        if(str[l]!=ans && str[l]!= p)
                        {
                            f=0;
                            break;
                        }
                        str[0]=p;
                    }
                }
                else if(str[0]!=p && str[0]!=ans)
                {
                    f=0;
                    printf("Case #%d: IMPOSSIBLE\n", i+1);
                    break;
                }
            }
            p=str[0];
            if(f==0)
            {
                printf("Case #%d: IMPOSSIBLE\n", i+1);
                break;
            }
        }
        if(f==1)
            printf("Case #%d: %c\n", (i+1),ans);
    }
}