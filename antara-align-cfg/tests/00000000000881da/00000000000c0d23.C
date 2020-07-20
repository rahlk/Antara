#include<stdio.h>
void main()
{
    int t,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        long long int n,i;
        scanf("%lld",&n);
        char s[2*(n-1)],str[2*(n-1)];
        scanf("%s",s);
        printf("Case #%d: ",j);
        for(i=0;i<2*(n-1);i++)
        {
            if(s[i]=='E')
            str[i]='S';
            else 
            str[i]='E';
            printf("%c",str[i]);
        }
        printf("\n");
    }
}