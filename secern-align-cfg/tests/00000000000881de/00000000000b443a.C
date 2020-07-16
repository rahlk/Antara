#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void setTestBit( char testBit[], int N, int B )
{
    int i,j;

    for( i = 0 ; i < N ; i++ )
    {
        if(( i / B )%2 == 0 )
        {
            testBit[i] = '0';
        }
        else
        {
            testBit[i] = '1';
        }
    }
    testBit[i] = '\0';

    return ;
}

void chkTestBitFst( char bitFlag[], char testBit[], int N, char input[], int length, int blockSize )
{
    int i,j,k, chk,idx,errCnt;

    errCnt = blockSize;
    for( i = 0, j = 0 ; ( i < N )&&( j < length ) ; )
    {
        if( testBit[i] == input[j] )
        {
            if( (i % blockSize) == 0 )
            {
                if( (i+blockSize) > N )
                {
                    errCnt = N - i - 1;
                }
                else
                {
                    errCnt = blockSize - 1;
                }
            }
            else
            {
                errCnt--;
            }
            j++;
            i++;
        }
        else
        {
            i = i/blockSize*blockSize;

            for(k = 0 ; k < blockSize ; k++,i++ )
            {
                bitFlag[i] = errCnt;
            }
        }
    }

    if( i < N )
    {
        if( i == (i/blockSize*blockSize))
        {
            errCnt = -1;
        }
        else
        {
            errCnt = N - i;
            i = i/blockSize*blockSize;
        }

        for( ; i < N ;i++ )
        {
            bitFlag[i] = errCnt;
        }
    }
}


int chkTestBit( char bitFlag[], char testBit[], int N, char input[], int length, int b )
{
    int i,j,k0,k1,k,blockCnt,beforeBsize, k0max,k1max,maxErrCnt,errCnt;

    beforeBsize = b * 2;
    maxErrCnt = 0;

    for( i = 0, j = 0 ;
         ( i < N )&&( j < length ) ; )
    {
        while( bitFlag[i] < 1 )
        {
            if( bitFlag[i] == 0 )
            {
                j++;
            }

            i++;
        }

        if( ( i >= N ) || ( j >= length ))
        {
            break;
        }

        errCnt = bitFlag[i];

        if( ( i + beforeBsize ) <  N )
        {
            blockCnt = beforeBsize - errCnt;
            k0max = b;
            k1max = b;
        }
        else
        {
            blockCnt = N - i - errCnt;
            if( ( N - i ) > b )
            {
                k0max = b;
                k1max = N - i - b;
            }
            else
            {
                k0max = N - i ;
                k1max = 0;
            }
        }


        for(k = 0, k0 = 0, k1 = 0 ;
            k < blockCnt ;
            k++,j++ )
        {
            switch( input[j] )
            {
                case '0':
                    k0++;
                    if( k1 > 0 )
                    {
                        printf("invalid value\n");
                    }
                    break;
                case '1':
                    k1++;
                    break;
                default:
                    printf("invalid value\n");
                    break;
            }
        }

        if( k0 == 0 )
        {
            if ( k0max > 0 )
            {
                errCnt = -1;
                maxErrCnt += k0max;
            }
        }
        else if ( k0 < k0max )
        {
            errCnt = k0max - k0;
        }
        else if ( k0 == k0max )
        {
            errCnt = 0;
        }
        else
        {
            printf("invalid value\n");
        }

        for( k0 = i + k0max ; i < k0 ; i++ )
        {
            bitFlag[i] = errCnt;
        }


        if( k1 == 0 )
        {
            if ( k1max > 0 )
            {
                errCnt = -1;
                maxErrCnt += k0max;
            }
        }
        else if ( k1 < k1max )
        {
            errCnt = k1max - k1;
        }
        else if ( k1 == k1max )
        {
            errCnt = 0;
        }
        else
        {
            printf("invalid value\n");
        }

        for( k1 = i + k1max ; i < k1 ; i++ )
        {
            bitFlag[i] = errCnt;
        }

    }

    return maxErrCnt;
}

int main()
{
    int T,t,i,N,B,b,F,errCnt,length,offset,judge;
    int  errIdx[15];
    char tmp;
    char output[1024];
    char input[1025];
    char testBit[1025];
    char bitFlag[1025];

    scanf("%d",&T);

    for( t = 0 ; t < T ; t++ )
    {
        memset(bitFlag,0,sizeof(bitFlag));

        scanf("%d %d %d",&N, &B, &F);

        length = N-B;
        for(i = 2 ; i <= B ; i*=2 ) {}

        setTestBit( testBit, N, i );
        printf("%s\n",testBit);
        scanf("%s",input);
        chkTestBitFst( bitFlag, testBit, N, input, length, i);

        for( i /= 2 ; i > 0 ; i /= 2 )
        {
            setTestBit( testBit, N, i );
            printf("%s\n",testBit);

            scanf("%s",input);
            b = chkTestBit( bitFlag, testBit, N, input, length,  i );

            if( b == B )
            {
                break;
            }
        }

        output[0] ='\0';

        offset = 0;
        for( i = 0 ; i < N ; i++ )
        {
            if( bitFlag[i] != 0 )
            {
               offset += snprintf( output+offset, 1024, "%d ", i );
            }
        }
        output[offset-1] = '\0';
        printf("%s\n",output);

        scanf("%d", &judge);

        if( judge == -1 )
        {
            return 0;
        }
    }
    return 0;
}
