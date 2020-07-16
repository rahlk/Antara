#include<stdio.h>
#include<string.h>
struct Lydia
{
    char L[100000];
    int n;
};
void main()
{
    int t,i,j;
    scanf("%d",&t);
    struct Lydia l[t];
    for (i = 0; i < t; i++)
    {
        scanf("%d",&l[i].n);
        scanf("%s",l[i].L);
    }
    for (i = 0; i < t; i++)
    {
        printf("Case #%d: ",i + 1);
        for (j = 0; j < strlen(l[i].L); j++)
        {
            if (l[i].L[j] == 'E')
                printf("S");
            else
                printf("E");
        }
        printf("\n");
    }
}