#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d\n",&t);
    for(i=1;i<t+1;i++)
    {   int j,k=0;
        char a[101];
        gets(a);
        for(j=0;j<strlen(a);j++)
        {
            if(a[j]=='4')
            {
                a[j]='2';
                k=k+2*pow(10,(strlen(a)-j-1));
                
            }
        }
        printf("Case#%d: %s %d\n",i,a,k);
        
    }
    return 0;
}
