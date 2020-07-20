#include<stdio.h>
#include<string.h>
int main()
{
    int T,N,a,i;
    char temp;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        a=(2*N)-1;
        for(i=1;i<=a;i++)
        {
            scanf("%c",temp);
            if(temp =='E')
            printf("S");
            else
            printf("E");
        }
        printf("\n");
    }
    return 0;
}