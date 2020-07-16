#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct CipherNum
{
    unsigned long long prime1;
    unsigned long long prime2;
    unsigned long long product;
    char letter1;
    char letter2;
}

struct NumLetter
{
    unsigned long long Num;
    char Letter;
}

void merge(unsigned long long arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    unsigned long long L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else if (R[j] < L[i])
        {
            arr[k] = R[j];
            j++;
        }
        else ;
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(unsigned long long arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

unsigned long long GenPrime(unsigned long long N, unsigned long long *prime, unsigned long long *length)
{
    unsigned long long l=0;
    unsigned long long newnum = *(prime + (*length));
    if(newnum==2)
    {
        newnum++;
    }
    else
    {
        newnum+=2;
    }
    unsigned long long n = newnum;
    while(n<=N)
    {
        for(l=0; l<*length;l++)
        {
            if((n % *(prime + l)) == 0)
            {
                n+=2;
                break;
            }
        }
        if(l==*length)
        {
            *length = (*length) + 1;
            (prime + (*length)) = (unsigned long long *)malloc(sizeof(unsigned long long));
            *(prime + *length) = n;
            break;
        }
    }
    return n;
}

int main()
{
    int T=0;
    scanf("%d", &T);
    if (T <1 || T >100)
    {
        return 0;
    }
    int L[T];
    unsigned long long N[T];
    int tc = 0;
    for(tc=0;tc<T;tc++)
    {
        scanf("%llu %d", &N[tc],&L[tc]);
        if(L[tc]<25 || L[tc]>100)
        {
            return 0;
        }

        struct *CipherNumber[tc] = (struct CipherNum *)malloc(sizeof(struct CipherNum)*L[tc])

        int cip=0;
        for(cip=0;cip<L[tc];cip++)
        {
            scanf("%llu", &(CipherNum[tc][cip].product));
        }

        unsigned long long *prime;
        unsigned long long length = 0;
        prime = (unsigned long long *)malloc(sizeof(unsigned long long))
        *prime = 0;

        for(cip=0;cip<L;cip++)
        {
            unsigned long long newprime = GenPrime(N[tc],prime,&length)
            if(CipherNumber[tc][cip].product % newprime == 0 )
            {
                if(cip!=(L-1))
                {
                CipherNumber[tc][cip].prime1 = newprime;
                CipherNumber[tc][cip].prime2 = CipherNumber[cip].product/newprime;
                }

                else
                {
                CipherNumber[tc][cip].prime2 = newprime;
                CipherNumber[tc][cip].prime1 = CipherNumber[tc][cip].product/newprime;
                }

                int li=cip-1;
                int ri=cip+1;
                for(;li>0,ri<L[tc];li--,ri++)
                {
                    CipherNumber[tc][li].prime2 = CipherNumber[tc][li+1].prime1;
                    CipherNumber[tc][li+1].prime2 = CipherNumber[tc][li+1].product / CipherNumber[tc][li+1].prime1;
                    CipherNumber[tc][ri-1].prime1 = CipherNumber[tc][ri].prime2;
                    CipherNumber[tc][ri].prime1 = CipherNumber[tc][ri].product / CipherNumber[tc][ri].prime2;
                }
                unsigned long long NumSort[L];
                NumSort[0] = CipherNumber[0].prime1;
                flag[0] = 0;
                for(li=1;li<L;li++)
                {
                    NumSort[li]=CipherNumber[li].prime2;
                }
                mergeSort(NumSort,0,L);
                char OriginalText[L];
                struct NumLetter *Alpha = (struct NumLetter *)malloc(sizeof(struct NumLetter)*26);
                char c='A';
                for(j=0,i=0;j<L,i<26;i++)
                {
                    Alpha[i].Num = NumSort[j];
                    Alpha[i].Letter = c;
                    while(NumSort[j]==NumSort[j+1])
                    {
                        j++;
                    }
                    c++;

                }
                for(i=0;i<L;i++)
                {
                    for(j=0;j<26;j++)
                    {
                        if(CipherNumber[i].prime1 == Alpha[j].Num)
                        {
                            OriginalText[i]=Alpha[j].Letter;
                        }

                    }

                }
                for(j=0;j<26;j++)
                {
                    if(CipherNumber[L-1].prime2==Alpha[j].Num)
                    {
                        OriginalText[L-1]=Alpha[j].Letter;
                    }
                }

            }
        }

    }


}
