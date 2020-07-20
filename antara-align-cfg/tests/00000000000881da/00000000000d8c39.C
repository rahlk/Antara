#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int testcases;
    scanf("%d", &testcases);
    for(int i = 1; i <= testcases; i++)
    {
        int size;
        scanf("%d", &size);
        char* path = (char *)malloc((2*size - 2) * sizeof(char));
        scanf("%s", path);
        char* path2 = (char*)malloc((2*size - 2) * sizeof(char));
        for(int i = 0; i < 2*size - 2; i++)
        {
            if(path[i] == 'E')
                path2[i] = 'S';
            else 
                path2[i] = 'E';
        }
        printf("Case #%d: %s\n", i, path2);
    }
}