#include<stdio.h>
#include<string.h>
int main()
{
    int t, k=0;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        n-=1;
        char dim[2*n];
        scanf("%s", &dim);
        printf("Case #%d: ", ++k);
        for(int i=0;i<2*n;i++)
        {
            if(dim[i]=='E')
            {
                printf("S");
            }
            else
            {
                printf("E");
            }
        }
        printf("\n");
    }
    return 0;
}