#include<stdio.h>
#define MAX 100000

int main()
{
    int t,n,i,j;
    scanf("%d",&t);

    char str[MAX],str1[MAX];

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        for(j=0;j<(2*n-2);j++)
        {
             scanf("%c",&str[j]);
        }

        for(j=0;j<(2*n-2);j++)
        {
            if(str[j]=='S')
                str1[j]='E';
            else
                str1[j]='S';
        }

        printf("Case #%d: %s\n",i+1,str1);
        j=0;

    }
    return 0;
}
