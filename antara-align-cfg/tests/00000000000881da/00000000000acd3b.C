#include <stdio.h>
#include <string.h>

char ES(char path){
    char Bpath;
    if (path == 'E')
        Bpath = 'S';
    else if (path == 'S')
        Bpath = 'E';
    return Bpath;
}


int main(){
    int T;
    scanf("%d", &T);

    for(int j=1;j<=T;++j){
        int len;
        scanf("%d", &len);

        char path[len];

        scanf("%s", &path);


        printf("Case #%d: ", j);

        for(int i=0;path[i]!='\0';++i){
            printf("%c", ES(path[i]));
        }

        printf("\n");
    }
    return 0;

}
