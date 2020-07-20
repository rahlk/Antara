#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int T;
    scanf("%d", &T);
    for(int i=1; i<=T; i++)
    {
        int poz=0;
        scanf("%d", &N);
        char** v = (char**)malloc(N*sizeof(char*));
            for(int i=0; i<N; i++)
                v[i]= (char*)malloc((N*sizeof(char)));

        char* P = (char*)malloc((2*N-2)*sizeof(char));
        char* Y = (char*)malloc((2*N-2)*sizeof(char));
        scanf("%s",P);
        v[0][0]=P[0];
        int n=0,m=0;
        for(int j=1; j<2*N-2; j++){
            if(P[j]=='E')
            {
                n++;
                v[n][m]=P[j];
            }
            else
            if(P[j]=='S')
            {
                m++;
                v[n][m]=P[j];
            }
        }
        n=0;
        m=0;
        if(P[2*N-3]=='E')
        {
            while(n<N && m<N)
                if(v[n][m]!='E' && m+1<N)
                {
                    v[n][m]='E';
                    Y[poz]=v[n][m];
                    poz++;
                    m++;
                }
                else
                {
                    v[n][m]='S';
                    Y[poz]=v[n][m];
                    poz++;
                    n++;
                }

        }
        if(P[2*N-3]=='S')
        {
            while(n<N && m<N)
                if(v[n][m]!='S' && n+1<N){
                    v[n][m]='S';
                    Y[poz]=v[n][m];
                    poz++;
                    n++;
                }
                else
                {
                    v[n][m]='E';
                    Y[poz]=v[n][m];
                    poz++;
                    m++;
                }
        }
        Y[2*N-2]='\0';
        printf("Case #%d: %s\n",i,Y);


    }
    return 0;
}
