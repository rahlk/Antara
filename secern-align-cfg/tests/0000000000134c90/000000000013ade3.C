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
            if(str[0]=='R')
                ans = 'P';
            else if(str[0]=='P')
                ans = 'S';
            else if(str[0]=='S')
                ans = 'R';
            if(i>0)
            {
                if(str[0]!=p)
                {
                    printf("Case #%d: IMPOSSIBLE", i+1);
                    f=0;
                    break;
                }
            }
            p=str[0];
        }
        if(f==1)
            printf("\nCase #%d: %c", (i+1),ans);
    }
}