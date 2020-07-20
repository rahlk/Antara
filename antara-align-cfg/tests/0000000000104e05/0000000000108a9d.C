#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct words
{
    int n;
    char str[1000][50];
};
int test,i,j,k,count;
int main()
{
    scanf("%d",&test);
    struct words list[test];
    for (i = 0; i < test; i++)
    {
        scanf("%d",&list[i].n);
        for (j = 0; j < list[i].n; j++)
            scanf("%s",list[i].str[j]);
    }
    for (i = 0; i < test; i++)
    {
        //count = 0;
        if (list[i].n == test)
            printf("Case #%d: %d\n",i + 1,list[i].n / 2);
        else if (list[i].n > test || test % list[i].n == 0)
            printf("Case #%d: %d\n",i + 1,list[i].n);
        else
            printf("Case #%d: %d\n",i + 1,0);
    }
    return 0;
}
