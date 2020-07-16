#include<stdio.h>
#include<string.h>
# define SIZE 55000

void solve(char *lydia, int c)
{
    char my_path[SIZE];
    int i;
    for(i=0; lydia[i] != '\0'; i++)
    {
        if(lydia[i] == 'E')
        {
            my_path[i] = 'S';
        }
        else
        {
            my_path[i] = 'E';
        }
    }

    printf("Case #%d: %s\n", c, my_path);
}

int main()
{
    int t;
    scanf("%d", &t);

    int dimension;
    char lydia[SIZE];

    int c = 1;
    while(c <= t)
    {

        scanf("%d", &dimension);
        getchar();

        scanf("%s", lydia);
        getchar();

        solve(lydia, c);

        c++;
    }

    return 0;
}
