#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int T,R=1;
    scanf("%d",&T);
    while(T--){
    int n,i,S=0;
    scanf("%d",&n);
    char a[n][50];
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    for(i=0;i<n;i=i+2)
    {
        int l1,l2;
        l1=strlen(a[i])-1;
        l2=strlen(a[i+1])-1;
        while(1)
        {
            if(a[i][l1]==a[i+1][l2])
            {
                S++;
                l1--;
                l2--;
            }
            else
                break;
        }
    }
    printf("Case #%d: %d\n",R,S);
    R++;
    }
    return 0;
}
