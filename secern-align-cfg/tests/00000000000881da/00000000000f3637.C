#include<stdio.h>
#define MAX 100000

int main()
{
    long long unsigned t,n,i,j=0;
    scanf("%llu",&t);

    char str[MAX],str1[t][MAX];

    for(i=0;i<t;i++)
    {
        scanf("%llu",&n);

        scanf("%s",str);

        for(j=0;j<(2*n-2);j++)
        {
            if(str[j]=='S')
                str1[i][j]='E';
            else
                str1[i][j]='S';

        }

        j=0;

    }

    for(i=0;i<t;i++)
    {
        printf("Case #%llu: %s\n",i+1,str1[i]);
    }
    return 0;
}