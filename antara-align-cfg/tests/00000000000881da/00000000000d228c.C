#include <stdio.h>
#include<string.h>
int main() 
{
    long long int t,n,i,p=0;
    char str[100000];
    scanf("%lld",&t);
    while(t--)
    {p++;
       printf("Case #%lld: ",p);
        scanf("%lld",&n);
        scanf("%s",str);
        for(i=0;i<(2*n-2);i++)
        {
            if(str[i]=='E')
            {
                str[i]='S';
            }
            else
            {
                str[i]='E';
            }
        }
        printf("%s\n",str);
    }
	return 0;
}