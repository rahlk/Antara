#include <stdio.h>
#include <string.h>



int main(){
    int T;
    scanf("%d", &T);

    for(int j=1;j<=T;++j){
        int len;
        scanf("%d", &len);

        char path[len];

        scanf("%s", &path);


        printf("Case #%d: ", j);

       /* for(int i=0;path[i]!='\0';++i){
            printf("%c", ((path[i]=='E')?'S':'E'));
        } */

        printf("\n");
    }
    return 0;

}
