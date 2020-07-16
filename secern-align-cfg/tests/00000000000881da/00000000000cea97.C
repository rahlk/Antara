#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n[t];
    char a[t][100000];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        scanf("%s",&a[i]);
    }
    for(int i=0;i<t;i++)
    {
        printf("Case #%d: ",i+1);
        for(int j=0;j<(2*n[i]-2);j++)
        {
            if(a[i][j]=='S')
            {
                printf("E");
            }
            else
            {
                printf("S");
            }
        }
        printf("\n");
    }
}