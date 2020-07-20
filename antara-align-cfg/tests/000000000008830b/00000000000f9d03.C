#include<stdio.h>
#include<stdbool.h>
void swap(int *,int *);
void main()
{
    int T,L,i,j,l=0,k,Size;
    unsigned long long int A[10^10],N,P,large,B[10^10];

    scanf("%d",&T);
    for( i=1; i<=T; i++)
    {
        scanf("%lld",&N);
        scanf("%d",&L);
        for( j=0; j<=L; j++)
        {
            scanf("%lld",&P);
            if( j==0 )
            {
                for( k=3; k<N; k++)
                {
                    if( P%k == 0)
                    {
                        A[j] = k;j++;
                    }
                }
                j--;
            }
              else
              {
                  if(j==2)
                  {
                      if( P%A[0] == 0 )
                      {
                          A[2] = A[0];
                          A[0] = A[1];
                          A[1] = A[2];
                          A[2] = P/A[1];
                      }
                      else
                      A[j] = P/A[j-1];
                  }
                  else
                        A[j] = P/A[j-1];
              }
        }
        for( j=0; j<=L; j++)
            {
                B[j]=A[j];
                printf("  %lld",A[j]);
            }
        {
   int i, j;
   bool swapped;
   for (i = 0; i <= L-1; i++)
   {
     swapped = false;
     for (j = 0; j <= L-i-1; j++)
     {
        if (B[j] > B[j+1])
        {
           swap(B[j], B[j+1]);
           swapped = true;
        }
     }

     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
}
        Size = L;
        for (k = 1; k <=Size; k++)
            {
                for(j = k + 1; k <= Size; k++)
                {
                    if(B[i] == B[j])
                    {
                        for(l = j; l < Size; l++)
                        {
                            B[l] = B[l + 1];
                        }
                        Size--;
                    j--;
                    }
                }
            }

        for( j=0; j<=Size; j++)
          {
             for( k=0; k<=L; k++ )
               {
                   if(A[k] == B[j])
                    {
                        A[k] = 65 + j;
                        //printf(" small=%d ",small);
                    }
               }
        printf("Case #%d: ",i);
        for(j=0;j<=L;j++)
          {printf("%c",A[j]);
          }printf("\n");

    }

    }
}




void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
