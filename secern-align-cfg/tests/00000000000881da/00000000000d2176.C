#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int A,k,mazesize,stlen,l;
    scanf("%d",&A);
    for(k=1;k<=A;k++){
        char ans[500001], str[50001];
        scanf("%d",&mazesize);
        scanf("%s",str);
        stlen = strlen(str);

        for(l=0;l<stlen;l++){

            if(str[l]=='E')
                ans[l]='S';
            else
                ans[l]='E';
        }
        printf("Case #%d: %s",k,ans);
    }
}