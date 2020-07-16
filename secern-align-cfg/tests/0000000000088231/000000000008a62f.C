#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int T,i,j;
    int Bidx = 0;
    unsigned long length;
    char N[101];
    char B[101];

    memset( B,0, sizeof(B));

    scanf("%d",&T);

    for( i = 1 ; i <= T ; i++ )
    {
        Bidx = 0;
        scanf("%s",N);
        length = strlen(N);

        for( j = 0 ; j < length ; j++)
        {
            if( N[j] == '4' )
            {
                N[j] = '3';
                B[Bidx++] = '1';
            }
            else if ( Bidx > 0 )
            {
                B[Bidx++] = '0';
            }
        }
        B[Bidx] = '\0';
        printf("Case #%d: %s %s\n",i,N,B);
    }
}
