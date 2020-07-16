#include "stdio.h"
#include "string.h"

int main(){
    int t;
    scanf("%d",&t);
    for (int i = 1;i <= t;i++){
        char a[101] = { 0 };
        int b[101] = { 0 };
        scanf("%s",a);
        int index = 0;
        printf("Case #%d: ",i);
        for (int j = 0;a[j] != '\0';j++){

            if (a[j] != '4'){

            }else{
                a[j] = a[j] - 1;
                b[j] = b[j] + 1;
            }
            printf("%c",a[j]);
            index++;
        }
        printf(" ");
        for (int j = 0;j < index;j++){
            printf("%d",b[j]);
        }
        printf("\n");

    }

    return 0;
}
