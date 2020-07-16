#include<stdio.h>
#define MAX 100000

int main()
{
    int t,n,i,j=0;
    scanf("%d",&t);

    char str[MAX],str1[MAX];

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        scanf("%s",str);

        while(str[j]!='\0')
        {
            if(str[j]=='S')
                str1[j]='E';
            else
                str1[j]='S';

            j++;
        }

        printf("Case #%d: %s\n",i+1,str1);
        j=0;

    }
    return 0;
}
