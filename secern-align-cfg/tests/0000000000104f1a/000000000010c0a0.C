#include<stdio.h>
int main()
{
    int p[7] = {16,9,5,7,11,13,17};
    int mod[7];
    int t, n, m;
    scanf("%d %d %d",&t,&n,&m);
    for(int k=0;k<t;k++)
    {
        for(int i=0;i<7;i++)
        {
            int twitch = 0;
            int in;
            for(int j=0;j<18;j++)
            {
                printf("%d ",p[i]);
            }
            for(int j=0;j<18;j++)
            {
                scanf("%d",&in);
                twitch += in;
            }
            mod[i] = twitch%p[i];
        }
        int ans = m;
        for(int i=mod[6];i<=m;i+=17)
        {
            int yes=1;
            for(int j=0;j<7;j++)
            {
                if(i%p[j] != mod[j])
                {
                    yes = 0;
                    break;
                }
            }
            if(yes)
            {
                ans = i;
            }
        }
        printf("%d",ans);
    }
    return 0;
}
