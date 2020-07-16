#include<stdio.h>
#include <stdlib.h>
int main()
{
    int T,N,i,j,k,l,m,n,a,b;
    char P[100],ML[100][100],MS[100][100],S[100];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
       m=1;n=1;a=1;b=1;
       scanf("%d",&N);
       for(j=1;j<=2*(N-1);j++)
       {
           scanf("%s",&P[j]);
       }
       for(k=1;k<=N;k++)
       {
            for(l=1;l<=N;l++)
            {
                ML[k][l]='o';
                MS[k][l]='o';
            }
       }
       for(k=1;k<=N;k++)
       {
           while(m<=N)
           {
                   if(k==N&&m==N)
                   {
                       break;
                   }
                   ML[k][m]=P[a];
                   if(P[a]=='S')
                   {
                       a++;
                       break;
                   }
                   a++;
                   m++;
           }
       }
       for(k=1;k<=N;k++)
       {
           while(n<=N)
           {
                   if(k==N&&n==N)
                   {
                       break;
                   }
                   else if(ML[k][n]=='E'&&k!=N)
                   {
                       MS[k][n]='S';
                       S[b]=MS[k][n];
                       b++;
                       break;
                   }
                   else if(ML[k][n]=='S'&&n!=N)
                   {
                       MS[k][n]='E';
                       S[b]=MS[k][n];
                       b++;
                   }
                   else if(ML[k][n]=='o'&&n!=N)
                   {
                            MS[k][n]='E';
                            S[b]=MS[k][n];
                            b++;
                   }
                   else if(ML[k][n]=='o'&&k!=N)
                   {
                       MS[k][n]='S';
                       S[b]=MS[k][n];
                       b++;
                       break;
                   }
                   n++;
           }
       }
       printf("Case #%d:",i);
       for(j=1;j<=2*(N-1);j++)
       {
           printf("%c",S[j]);
       }
    printf("\n");
    }
}
