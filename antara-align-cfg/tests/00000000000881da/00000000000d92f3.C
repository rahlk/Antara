#include<stdio.h>
typedef long int li;
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        li j,n;
        char c='2';
        scanf("%ld\n",&n);
       // printf("%ld\n",n);
        printf("Case #%d: ",i+1);
        while(c!='\n')
        {
            scanf("%c",&c);
            if(c=='S'&&c!='\n')
            printf("E");
            else if(c=='E'&&c!='\n')
            printf("S");
        }
        printf("\n");
    }
    return 0;
}