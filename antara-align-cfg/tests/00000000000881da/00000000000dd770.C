#include<stdio.h>
int main()
{
    int i,j,x,k,T,N,z,m,f,g;
    char P[1998],y[1998];
    scanf("%d",&T);
    for(x=1;x<=T;x++)
    {
        scanf("%d",&N);
        for(j=0;j<(2*N-1);j++)
        {
            scanf("%c",&P[j]);
        }

        if((P[1]=='S')&&(P[2*N-2]=='E'))
        {
                      for(i=0;i<N-1;i++)
        {
           y[i]='E';
        }
                    for(k=N-1;k<2*N-1;k++)
        {
           y[k]='S';
        }

printf("Case #%d: ",x);
for(i=0;i<(2*N-2);i++)
{
    printf("%c",y[i]);
}
printf("\n");

        }
        if((P[1]=='E')&&(P[2*N-2]=='S'))
        {
                      for(i=0;i<N-1;i++)
        {
           y[i]='S';
        }
                    for(k=N-1;k<2*N-1;k++)
        {
           y[k]='E';
        }

        printf("Case #%d: ",x);
for(i=0;i<(2*N-2);i++)
{
    printf("%c",y[i]);
}
printf("\n");
        }
        if((P[1]=='S')&&(P[2*N-2]=='S'))
        {

                    y[1]='E';
                    y[2*N-2]='E';
                    z=0;
                    for(i=2;i<2*N-2;i++)
                    {
                        if(P[i]=='E')
                        z++;

                        if((P[i]=='E')&&((P[i-1]=='E')))
                        {
                            for(m=2;m<z;m++)
                            {y[m]='E';

                            }
                            for(f=z;f<z-1+N;f++)
                            {
                                y[f]='S';
                            }
                            for(g=z+N-1;g<(2*N-2);g++)
                            {
                                y[g]='E';
                            }
                        }
                    }
printf("Case #%d: ",x);
for(i=1;i<(2*N-1);i++)
{
    printf("%c",y[i]);
}
printf("\n");


        }
                                         if((P[1]=='E')&&(P[2*N-2]=='E'))
        {

                    y[1]='S';
                    y[2*N-2]='S';
                    z=0;
                    for(i=2;i<2*N-2;i++)
                    {
                        if(P[i]=='S')
                        z++;

                        if((P[i]=='S')&&((P[i-1]=='S')))
                        {
                            printf("z=%d",z);
                            for(m=2;m<z;m++)
                            {y[m]='S';

                            }
                            for(f=z;f<z-1+N;f++)
                            {
                                y[f]='E';
                            }
                            for(g=z+N-1;g<(2*N-2);g++)
                            {
                                y[g]='S';
                            }
                        }
                    }

                    printf("Case #%d: ",x);
for(i=1;i<(2*N-1);i++)
{
    printf("%c",y[i]);
}
printf("\n");
}
        }
    }

