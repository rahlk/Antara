#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,P,Q;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&P);fflush(stdin);scanf("%d",&Q);fflush(stdin);
        int p[P][Q][Q],count[Q][Q];
        for(int f=0;f<P;f++)
        {
            for(int g=0;g<=Q-1;g++)
            {
                for(int h=0;h<=Q-1;h++)
                {
                    p[f][g][h]=0;
                }
            }
        }
        for(int c=0;c<=Q-1;c++)
        {
            for(int v=0;v<=Q-1;v++)
            {
                count[c][v]=0;
            }
        }
        for(int j=0;j<P;j++)
        {
            int x,y;char dir;
            scanf("%d",&x);fflush(stdin);scanf("%d",&y);fflush(stdin);scanf("%c",&dir);printf("%c",dir);
            if(dir=="N"||dir=="n")
            {
                for(int k=y;k<Q;k++)
                {
                    for(int l=x;l>=0;l--)
                    {
                        p[j][l][k]=1;
                    }
                }
            }
            if(dir=="S"||dir=="s")
            {
                for(int z=y;z>=0;z--)
                {
                    for(int c=x;c>=0;c--)
                    {
                        p[j][c][z]=1;
                    }
                }
            }
            if(dir=="E"||dir=="e")
            {
                for(int v=x;v<Q;v++)
                {
                    for(int b=y;b>=0;b--)
                    {
                        p[j][v][b]=1;
                    }
                }
            }
            if(dir=="W"||dir=="w")
            {
                for(int n=x;n>=0;n--)
                {
                    for(int m=y;m>=0;m--)
                    {
                        p[j][n][m]=1;
                    }
                }
            }
        }
        for(int r=0;r<P;r++)
        {
            for(int t=0;t<Q;t++)
            {
                for(int y=0;y<Q;y++)
                {
                    if(p[r][t][y]==p[r+1][t][y])
                    {
                        count[t][y]++;
                    }
                }
            }
        }
        int max_x=0,max_y=0;
        for(int a=0;a<Q;a++)
        {
            for(int s=0;s<Q;s++)
            {
                if(count[max_x][max_y]<count[a][s])
                {
                    max_x=a;max_y=s;
                }
            }
        }
        printf("Case #%d: %d %d",i+1,max_x,max_y);
    }
    return 0;
}
