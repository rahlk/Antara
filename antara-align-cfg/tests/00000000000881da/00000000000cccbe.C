#include<stdio.h>
int main()
{
    int i,j,k,T,N,z,m,f,g;
    char P[1998],y[1998];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<(2*N-2);j++)
        {
            scanf("%c",&P[j]);
        }

        if((P[0]=='S')&&(P[2*N-1]=='E'))
        {
                      for(i=0;i<N-1;i++)
        {
           y[i]='E';
        }
                    for(k=i;k<2*N-2;k++)
        {
           y[j]='S';
        }
        }

        if((P[0]=='E')&&(P[2*N-1]=='S'))
        {
                      for(i=0;i<N-1;i++)
        {
           y[i]='S';
        }
                    for(k=i;k<2*N-2;k++)
        {
           y[j]='E';
        }
        }
        if((P[0]=='S')&&(P[2*N-1]=='S'))
        {

                    y[0]='E';
                    y[2*N-1]='E';
                    z=0;
                    for(i=1;i<2*N-1;i++)
                    {
                        if(P[i]=='E')
                        z++;

                        if((P[i]=='E')&&((P[i-1]=='E')))
                        {
                            for(m=1;m<z;m++)
                            {y[m]='E';

                            }
                            for(f=z;f<z+4;f++)
                            {
                                y[f]='S';
                            }
                            for(g=z+4;g<(2*N-1);g++)
                            {
                                y[g]='E';
                            }
                        }


                    }
                    }
                     if((P[0]=='E')&&(P[2*N-1]=='E'))
        {

                    y[0]='S';
                    y[2*N-1]='S';
                    z=0;
                    for(i=1;i<2*N-1;i++)
                    {
                        if(P[i]=='S')
                        z++;

                        if((P[i]=='S')&&((P[i-1]=='S')))
                        {
                            for(m=1;m<z;m++)
                            {y[m]='S';

                            }
                            for(f=z;f<z+4;f++)
                            {
                                y[f]='E';
                            }
                            for(g=z+4;g<(2*N-1);g++)
                            {
                                y[g]='S';
                            }
                        }


                    }
                    }
                   }
                   printf("#%d",T);
for(i=0;i<(2*N-2);i++)
{
    printf("%c",y[i]);
}

}
