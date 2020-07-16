#include<stdio.h>
#define MAX 100000

int main()
{
    int t,n,i,j=0;
    scanf("%d",&t);

    char str[MAX],str1[t][MAX];

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        scanf("%s",str);

        while(str[j]!='\0')
        {
            if(str[j]=='S')
                str1[i][j]='E';
            else
                str1[i][j]='S';

            j++;
        }

        j=0;

    }

    for(i=0;i<t;i++)
    {
        printf("Case #%d: %s\n",i+1,str1[i]);
    }
    return 0;
}