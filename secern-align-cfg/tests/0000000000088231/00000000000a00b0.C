#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
     long long  int i,j,k,l,t,b,a;
    scanf("%lld",&t);
    char s[100];
    int n=0;
    while(t--)
    {n++;
        scanf("%lld",&k);
        sprintf(s,"%lld",k);
        printf("%s",s);
        l=strlen(s);b=0;
        for(i=0;i<l;i++)
        {
        	if(s[i]=='4')
        	{
        		s[i]='2';
        		b+=2*pow(10,(l-i-1));
			}
		}
        
        printf("Case #%d: %s %lld",n,s,b);
    }
    
}