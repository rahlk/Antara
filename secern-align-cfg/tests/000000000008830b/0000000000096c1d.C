#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void QuickSort(int arr[], int left, int right)
{
    int L = left, R = right;
    int temp;
    int pivot = arr[ (left + right) / 2]; //피봇 위치(중앙)의 값을 받음.

    while( L <= R )
    {
        while (arr[L] < pivot) { L++; }
        while (arr[R] > pivot) { R--; }

        if (L <= R)
        {
            if (L != R)
            {
                temp = arr[L];
                arr[L] = arr[R];
                arr[R] = temp;
            }
            L++;
            R--;
        }
    }

    if ( left < R )
    {
        QuickSort( arr, left, R );
    }
    if ( L < right )
    {
        QuickSort( arr, L, right );
    }
    return;
}

void setPrime(int prime[], int input )
{
    for( int i = 0 ; i < 26 ; i++ )
    {
        if( prime[i] == input )
        {
            return;
        }

        if( prime[i] == 0 )
        {
            prime[i] = input ;
            return;
        }
    }

    printf("input invalid value\n");

    return;
}

char getChar( int prime[], int input )
{
    for( int i = 0 ; i < 26 ; i++ )
    {
        if( prime[i] == input )
        {
            return 'A' + i;
        }
    }

    return '*';
}
int main()
{
    int T,i,j,N,L,A,B,idx;
    int prime[26];
    int Larr[101];
    char output[102];
    int Asqrt,input;

    scanf("%d",&T);

    for( i = 1 ; i <= T ; i++ )
    {
        memset(prime,0,sizeof(prime));
        idx = 1;
        scanf("%d %d",&N, &L);
        scanf("%d",&A);

        // 0
        if ( A % 2 == 0 )
        {
            A /= 2;
            B = 2;
        }
        else
        {
            Asqrt = sqrt(A);
            for( B = 3 ; B <= Asqrt ; B += 2 )
            {
                if( ( A % B ) == 0 )
                {
                    break;
                }
            }

            if( B > Asqrt)
            {
                printf("input invalid value\n");
            }
            A /= B;
        }

        // 1

        while(1)
        {
            ++idx;
            scanf("%d",&input);

            if( input % A == 0 )
            {
                if( A*B != input )
                {
                    Larr[idx] = input / A;
                    Larr[idx-1] = A;
                    Larr[idx-2] = B;
                    break;
                }
            }
            else
            {
                Larr[idx] = input / B;
                Larr[idx-1] = B;
                Larr[idx-2] = A;
                break;
            }
        }

        setPrime( prime, Larr[idx] );
        setPrime( prime, A );
        setPrime( prime, B );

        for( j = idx - 3 ; j > -1 ; j-- )
        {
            Larr[j] = Larr[j+2];
        }

        // 2
        for ( idx++ ; idx <= L ; idx++ )
        {
            scanf("%d",&input);
            Larr[idx] = input/ Larr[idx-1];
            setPrime( prime, Larr[idx] );
        }

        // Sort

        QuickSort(prime,0,25);

        // set latter

        for(j = 0 ; j <= L ; j++ )
        {
            output[j] = getChar(prime,Larr[j]);
        }
        output[j] = '\0';

        printf("Case #%d: %s\n",i,output);
    }
    return 0;
}
