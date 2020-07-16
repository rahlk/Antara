#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING 50000

char path[MAX_STRING * 2];

int main()
{
    path[0] = 0;
    int numCases = 0;
    int dim = 0;
    int i = 0;
    
    scanf("%d\n", &numCases);
    for(int caseNum=1; caseNum <= numCases; caseNum++)
    {
        scanf("%d\n", &dim);
        fgets(path, MAX_STRING * 2, stdin);
        for(i =0; i < 2 * dim - 2; i++)
        {
            // Completely inverting our path is sufficient because paths will only cross
            // at x = y AND when x == y, our move is guaranteed to be different from Lydia's
            if(path[i] == 'E')
            {
                path[i] = 'S';
            }
            else
            {
                path[i] = 'E';
            }
        }
        path[i] = 0;
        printf("Case #%d: %s\n", caseNum, path);
    }
}