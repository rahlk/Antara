#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int a)
{
    for(int i = 2 ; i <= sqrt(a) ; i++)
    {
        if(a%i == 0)
            return 0;
    }
    return 1;
}

void findDivisors(int a , int *arr , int m)
{
    if(m==0)
    {
        for(int i = 3 ; i <= sqrt(a) ; i+=2)
        {
            if(isPrime(i) && a%i == 0 && isPrime(a/i))
            {
                arr[0] = i;
                arr[1] = a/i;
                break;
            }
        }
    }
    else
    {
        arr[m+1] = a/arr[m];
    }
}

void sortArray(int arr[] , int l)
{
    for(int i = 0 ; i <= l ; i++)
    {
        for(int j = i+1 ; j <= l ; j++)
        {
            if (arr[i] > arr[j]) 
            {
                int a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}

int main()
{
    int N;
    scanf("%d" , &N);
    for(int i = 1; i <= N ; i++)
    {
        int n , l;
        scanf("%d %d" , &n , &l);
        int arr[l];
        for(int j = 0 ; j < l ; j++)
        {
            scanf("%d" , &arr[j]);
        }
        int divisors[l+1];
        for(int j = 0 ; j <= l ; j++)
        {
            findDivisors(arr[j] , divisors , j);
        }
        int sorted[l+1];
        for(int g = 0 ; g <= l ; g++)
            sorted[g] = divisors[g];
        sortArray(sorted , l);
        int fin[26];
        int k = 0;
        for(int t = 0 ; t<=l ; t++)
        {
            if(t==0)
            {
                fin[k] = sorted[t];
                k++;
            }
            else
            {
                if(sorted[t] != sorted[t-1])
                {
                    fin[k] = sorted[t];
                    k++;
                }
            }
                
        }
        for(int j = 0 ; j <= l ; j++)
        {
            for(int k = 0 ; k <= 25 ; k++)
            {
                if(fin[k] == divisors[j])
                {
                    divisors[j] = 65+k;
                    break;
                }
            }
            printf("%c" , divisors[j]);
        }
        if(i != N)
            printf("\n");
    }
}