#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int TC, *N, *A, *B;
    scanf("%d", &TC);
    if(TC<1 || TC>100)
    {
        return 0;
    }
    N = (int *)malloc(TC * sizeof(int));
    A = (int *)malloc(TC * sizeof(int));
    B = (int *)malloc(TC * sizeof(int));
    
    int i=0;
    for(i=0;i<TC;i++)
    {
        *(N+i) = 0, *(A+i) = 0, *(B+i) = 0;
        scanf("%d", (N+i));
        int n=0, j=0;
        for(j=0,n=*(N+i); n>0; j++)
        {
            if((n%10)==4)
            {
                *(B+i) = *(B+i) + pow(10,j);
            }
            n = n/10;
        }
        *(A+i) = *(N+i) - *(B+i);
        if (*(B+i) == 0)
        {
            for(j=0,n=*(N+i); n>0; j++)
            {
                if((n%10)==5)
                {
                    *(B+i) = *(B+i) + 2*pow(10,j);
                }
                n = n/10;
            }
            if(*(B+i)==0)
            {
                *(B+i) = 1;
            }
            *(A+i) = *(N+i) - *(B+i);
        }
    }
    
    for(i=0;i<TC;i++)
    {
        printf("Case #%d: %d %d\n", i+1,*(A+i),*(B+i));
    }
}