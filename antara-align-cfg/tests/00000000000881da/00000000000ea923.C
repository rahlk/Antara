#include<stdio.h>
int main()
{
    int t, i;
    int n[100],j;
    scanf("%d",&t);
    char c[100][2000];
    for (i=0;i<t;i++)
    {
    scanf("%d",&n[i]);
    scanf("%s",&c[i]);
    } 
    for (i=0;i<t;i++)
    {
    printf("Case #%d: ",(i+1));
        for (j=0;j<=(2*(n[i])-3);j++)
        {
        if (c[i][j]==e)
        printf("S\n");
        else
        printf("E\n");
        }
    }
    return 0;
}