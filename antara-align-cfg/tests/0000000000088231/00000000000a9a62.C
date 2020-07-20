#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        int j;
        char s[10];
        scanf("%s",s);
        
        int a=0;
        int l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]=='4')
            {
                a+=pow(10,l-j-1);
            }
        }
        int n=atoi(s),b;
        b=n-a;
        printf("Case #%d: %d %d\n",i+1,a,b);
        
    }
    
}