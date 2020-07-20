#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long int n;
        scanf("%ld",&n);
        char str[n+1];
        scanf("%s",str);
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]=='E')
                printf("S");
            else
                printf("E");
        }
        printf("\n");
    }
    return 0;
}