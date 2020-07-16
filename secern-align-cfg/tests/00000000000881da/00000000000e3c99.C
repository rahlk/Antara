#include <stdio.h>
#include <string.h>



int main(){
    int T;
    scanf("%d", &T);

    for(int j=1;j<=T;++j){
        int len;
        scanf("%d", &len);

        char path[2*len-2];

        scanf("%s", &path);


        printf("Case #%d: ", j);

        for(int i=0;i<2*len-2;++i){
            printf("%c", ((path[i]=='E')?'S':'E'));
        }

        printf("\n");
    }
    return 0;

}


}

