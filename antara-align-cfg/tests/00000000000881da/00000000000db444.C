#include<stdio.h>
int main()
{
    int t, i;
    long int n[100],j;
    scanf("%d",&t);
    char c[100][10000];
    char s, e;
    s=="S";
    e=="E";
    for (i=1;i<=t;i++)
    {
    scanf("%li",&n[i]);
    for (j=1;j<=((2*(n[i]))-2);j++)
    scanf("%c",&c[i][j]);
    }
    i=1;
    j=1;
    for (i=1;i<=t;i++)
    {
    printf("Case #%d: ",i);
        for (j=1;j<=(2*(n[i])-2);j++)
        {
        if (c[i][j]==e)
        printf("%c",&s);
        else
        printf("%c",&e);
        }
    printf("\n");
    }
    return 0;
}