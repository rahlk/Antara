#include <stdio.h>
#include <stdlib.h>

int check (int n)
{
    return n != 0 && (n % 10 == 4 || check(n/10));
}

int main()
{
    int T, N;
    //variables representions are same as in question
    
    scanf("%d", &T);

    for(int i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        int A = 1;
        int B = N - 1;
        while(1)
        {            
            if (!check(A))
            {
                if(!check(B))
                {
                    break;    
                }
            }
            A++;
            B--;
        }

        printf("Case #");
        printf("%d: ", i);
        printf("%d %d\n", A, B);
    }
    return 0;
}