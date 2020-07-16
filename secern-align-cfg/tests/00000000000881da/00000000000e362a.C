#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 60000

void flip_directions (char * x)
{
    if (x == NULL) return;
    
    for (int i = 0; x[i] != '\n'; i++)
    {
        if (x[i] == 'S') x[i] = 'E';
        else if (x[i] == 'E') x[i] = 'S';
    }
    
}

int main()
{
    int n_cases = -1;
    int size = 0;
    char lydia[BUFFSIZE];
    
    scanf("%d\n",&n_cases);
    for (int i = 1; i <= n_cases; i++)
    {
        scanf("%d\n", &size);
        scanf("%s\n", lydia);
        flip_directions(lydia);
        printf("Case #%d: %s\n", i, lydia);
    }
}