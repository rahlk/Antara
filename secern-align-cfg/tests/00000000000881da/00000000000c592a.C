#include<stdio.h>
int main()
{
    int t,j,i;
    long int n;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%ld",&n);
        char s[2*n-2];
        scanf("%s",s);
        j=0;
        while(s[j]!='\0')
        {
            if(s[j]=='E')
                s[j]='S';
            else
                s[j]='E';
            j++;
        }
       printf("Case #%d: %s\n",i,s);
        
    }
    return 0;
}