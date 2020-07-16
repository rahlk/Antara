#include<stdio.h>
int main()
{
    int t, i;
    long int n[100],j;
    scanf("%d",&t);
    char c[100][10000];
    char s, e;
    s=83; // 83 IS ASCII FOR S
    e=69; // 69 IS ASCII FOR E
    for (i=1;i<=t;i++)
    {
    scanf("%li",&n[i]);
    scanf("%s",&c[i]);
    }
    i=1;
    j=1;
    for (i=1;i<=t;i++)
    {
    printf("Case #%d:",i);
        for (j=0;j<=(2*(n[i])-3);j++)
        {
        if (c[i][j]==e)
        printf("S");
        else
        printf("E");
        }
    printf("\n");
    }
    return 0;
}