#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T,i,maze_size,str_len,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        char answer[500000], str[50000];
        scanf("%d",&maze_size);
        scanf("%s",str);
        str_len = strlen(str);

        for(j=0;j<str_len;j++){

            if(str[j]=='E')
                answer[j]='S';
            else
                answer[j]='E';
        }
        printf("Case #%d: %s\n",i,answer);
    }
}


