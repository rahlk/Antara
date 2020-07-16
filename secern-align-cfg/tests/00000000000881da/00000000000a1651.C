/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:06/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t=1;
    scanf("%lld\n",&t);
    
    for(int j=0;j<t;j++)
    {
        long long n,i;
        scanf("%lld\n",&n);
        int z=(2*n);
        char str[z],ans[z];
        scanf("%s", str);
        int l=strlen(str);
        for(i=0;i<l;i++)
        {
            if(str[i]=='E')
                ans[i]='S';
            else
                ans[i]='E';
        }
        ans[i]='\0';
        printf("Case #%d: %s\n",j+1,ans);
    }
    return 0;
}