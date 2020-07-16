#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,k,i,len1,j;
    scanf("%d",&t);
    char n[100];
    unsigned long long int a;
    for(k=1;k<=t;k++)
    {
        scanf("%s",n);
        len1=strlen(n);
        a=0;
        for(i=0;i<len1;i++)
        {
            if(n[i]=='4')
            {
                a=a+2*pow(10,len1-i-1);
                n[i]='2';
            }
        }
        printf("Case #%d: %s %llu",k,n,a);
        
        printf("\n");
    }
    return 0;
}