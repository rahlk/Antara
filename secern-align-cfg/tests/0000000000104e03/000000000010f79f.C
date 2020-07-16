#include <stdio.h>

#define true 1
#define false 0

typedef unsigned char bool;

bool mat[30][30], possible;
int pi[30*30], pk[30*30], top, target;

void search(int x, int y, int r, int c)
{
    int i, k;
    
    if(top == target)
        possible = true;
    if(possible == true)
        return ;
    
    for(i = 0; i < r && !possible; i++)
        for(k = 0; k < c && !possible; k++)
            if(mat[i][k] == false && !possible && 
                x != i && y != k &&
                (x-y) != (i-k) && (x+y) != (i+k))
            {
                mat[i][k] = true;
                pi[top] = i, pk[top] = k;
                top++;
                search(i, k, r, c);
                top--;
                mat[i][k] = false;
            }
}

int main()
{
    int T, cont = 0;
    scanf("%d\n", &T);
    
    while(T--)
    {
        int r, c;
        int i, k;
        
        scanf("%d %d\n", &r, &c);
        
        for(i = 0; i < r; i++)
            for(k = 0; k < c; k++)
                mat[i][k] = false;
        
        possible = false, target = r*c;
        for(i = 0, top = 0; i < r && !possible; i++)
            for(k = 0; k < c && !possible; k++)
            {
                mat[i][k] = true;
                pi[top] = i, pk[top] = k;
                top++;
                search(i, k, r, c);
                top--;
                mat[i][k] = false;
            }
        
        printf("Case #%d: %s\n", ++cont, (possible) ? "POSSIBLE" : "IMPOSSIBLE");
        if(possible)
            for(i = 0; i < target; i++)
                printf("%d %d\n", pi[i]+1, pk[i]+1);
    }
    return 0;
}
