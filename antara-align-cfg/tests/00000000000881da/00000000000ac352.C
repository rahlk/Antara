#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T,i,maze_size,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        char answer[500000], str[50000];
        scanf("%d",&maze_size);
        scanf("%s",str);


        for(j=0;j<strlen(str);j++){

            if(str[j]=='E')
                answer[j]='S';
            else
                answer[j]='E';
        }
        printf("Case #%d: %s\n",i,answer);
    }
    return 0;
}
