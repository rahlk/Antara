#include<stdio.h>
int main()
{
    int t,n;
    char str[100000];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%s",str);
        printf("Case #%d: ",i+1);
        for(int j=0;j<((2*n)-2);j++)
        {
            if(str[j]=='E')
            printf("S");
            else
            printf("E");
        }
        printf("\n");
    }
}