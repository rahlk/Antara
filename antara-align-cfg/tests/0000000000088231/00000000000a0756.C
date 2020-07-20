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
        char arr[105]={'\0'},a[105]={'\0'},b[105]={'\0'};
        scanf("%s", arr);
        int l=strlen(arr),x=0;
        for(int i=0;i<l;i++)
        {
            if(arr[i]=='4')
            {
                a[i]=arr[i]-1;
                b[x++]='1';
            }
            else
            {
                a[i]=arr[i];
                if(x>0)
                    b[x++]='0';
            }
        }
        if(x==0)
            b[0]='0';
        printf("Case #%d: %s %s\n",j+1,a,b);
    }
    return 0;
}