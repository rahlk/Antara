#include<stdio.h>
int main()
{
    int i,j,w,p,T,N,q,s,v,h;
    char P[2000],H[2000];
    scanf("%d",&T);
    for(w=1;w<=T;w++)
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
           H[i]='E';
        }
                    for(p=N-1;p<2*N-1;p++)
        {
           H[p]='S';
        }

printf("case #%d: ",w);
for(i=0;i<(2*N-2);i++)
{
    printf("%c",H[i]);
}
printf("\n");

        }
        if((P[1]=='E')&&(P[2*N-2]=='S'))
        {
                      for(i=0;i<N-1;i++)
        {
           H[i]='S';
        }
                    for(p=N-1;p<2*N-1;p++)
        {
           H[p]='E';
        }

        printf("case #%d: ",w);
for(i=0;i<(2*N-2);i++)
{
    printf("%c",H[i]);
}
printf("\n");
        }
        if((P[1]=='S')&&(P[2*N-2]=='S'))
        {

                    H[1]='E';
                    H[2*N-2]='E';
                    q=0;
                    for(i=2;i<2*N-2;i++)
                    {
                        if(P[i]=='E')
                        q++;

                        if((P[i]=='E')&&((P[i-1]=='E')))
                        {
                            for(s=2;s<q;s++)
                            {H[s]='E';

                            }
                            for(v=q;v<q-1+N;v++)
                            {
                                H[v]='S';
                            }
                            for(h=q+N-1;h<(2*N-2);h++)
                            {
                                H[h]='E';
                            }
                        }
                    }
printf("case #%d: ",w);
for(i=1;i<(2*N-1);i++)
{
    printf("%c",H[i]);
}
printf("\n");


        }
                                         if((P[1]=='E')&&(P[2*N-2]=='E'))
        {

                    H[1]='S';
                    H[2*N-2]='S';
                    q=0;
                    for(i=2;i<2*N-2;i++)
                    {
                        if(P[i]=='S')
                        q++;

                        if((P[i]=='S')&&((P[i-1]=='S')))
                        {
                            for(s=2;s<q;s++)
                            {H[s]='S';

                            }
                            for(v=q;v<q-1+N;v++)
                            {
                                H[v]='E';
                            }
                            for(h=q+N-1;h<(2*N-2);h++)
                            {
                                H[h]='S';
                            }
                        }
                    }

                    printf("case #%d: ",w);
for(i=1;i<(2*N-1);i++)
{
    printf("%c",H[i]);
}
printf("\n");
}
        }
    }

