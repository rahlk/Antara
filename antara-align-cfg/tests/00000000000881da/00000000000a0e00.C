#include<stdio.h>
#include<string.h>
# define SIZE 55000
void solve(char *lydia)
{
    int i;
    for(i=0; lydia[i] != '\0'; i++)
    {
        if(lydia[i] == 'E')
        {
            printf("S");
        }
        else
        {
            printf("E");
        }
    }
    printf("\n");
    return;
}

int main()
{
    int t;
    scanf("%d", &t);

    int dimension;
    char lydia[SIZE];
    ///char my_path[SIZE];

    while(t--)
    {

        scanf("%d", &dimension);
        getchar();

        scanf("%s", lydia);
        getchar();

        solve(lydia);
    }

    return 0;
}
