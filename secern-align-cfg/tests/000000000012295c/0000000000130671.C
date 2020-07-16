#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,P,Q;
    scanf("%d",&T);
    int max_x[T],max_y[T];
    for(int I=0;I<T;I++)
        {
            max_x[T]=0;
        }
    for(int J=0;J<T;J++)
        {
            max_y[T]=0;
        }
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&P,&Q);fflush(stdin);
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
            scanf("%d %d %c",&x,&y,&dir);fflush(stdin);
            if(dir=='N'||dir=='n')
            {
                for(int k=y;k<Q;k++)
                {
                    for(int l=x;l>=0;l--)
                    {
                        p[j][l][k]=1;
                    }
                }
            }
            if(dir=='S'||dir=='s')
            {
                for(int z=y;z>=0;z--)
                {
                    for(int c=x;c>=0;c--)
                    {
                        p[j][c][z]=1;
                    }
                }
            }
            if(dir=='E'||dir=='e')
            {
                for(int v=x;v<Q;v++)
                {
                    for(int b=y;b>=0;b--)
                    {
                        p[j][v][b]=1;
                    }
                }
            }
            if(dir=='W'||dir=='w')
            {
                for(int n=x;n>=0;n--)
                {
                    for(int m=y;m>=0;m--)
                    {
                        p[j][n][m]=1;
                    }
                }
            }
            for(int t=0;t<Q;t++)
            {
                for(int y=0;y<Q;y++)
                {
                    if(p[j][t][y]==p[j+1][t][y])
                    {
                        count[t][y]=count[t][y]+1;
                    }
                }
            }
        }

        for(int a=0;a<Q;a++)
            {
                for(int s=0;s<Q;s++)
                {
                    if(count[(max_x[i])][(max_y[i])]<count[a][s])
                    {
                        max_x[i]=a;max_y[i]=s;
                    }
                }
            }
        }
    for(int K=0;K<T;K++)
    {
        printf("Case #%d: %d %d\n",K,max_x[K],max_y[K]);
    }
    return 0;
}
