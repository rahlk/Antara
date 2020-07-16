#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,count=0;
    scanf("%d",&T);
    while(T>0)
    {
        count++;
        long long int N,a,i,j,i1,j1;
        scanf("%lld",&N);
        char P[2*N-2];
        char Q[2*N-2];
        fflush(stdin);
        gets(P);
        i=0,j=0,i1=0,j1=0;
        for(a=0;a<(2*N-2)-1;a++)
        {
            if(i1==i&&j1==j)
            {
                if(P[a]=='S')
                {
                    i++;
                    j1++;
                    Q[a]='E';

                }
                else
                {
                    j++;
                    i1++;
                    Q[a]='S';

                }
            }
            else{
            if(P[a]=='S')
            {
                i++;
                if(j1+1==j&&i1==i&&j!=N-1)
                {
                    j1++;
                    Q[a]='E';

                }
                else
                {
                    i1++;
                    Q[a]='S';

                }
            }
            else{
                j++;
                if(i1+1==i&&j1==j&&i!=N-1)
                {
                    i1++;
                    Q[a]='S';

                }
                else
                {
                    j1++;
                    Q[a]='E';

                }
            }
          }
        }
        if(i1!=N-1)
        {
            i1++;
            Q[a]='S';
        }
        else if(j1!=N-1)
        {
            j1++;
            Q[a]='E';
        }
        printf("Case #%d: ",count);
        printf("%s\n",Q);
        T--;
    }
}
