#include <stdio.h>
#include <string.h>

int main(){
    int t, n, x, i, size;

    scanf("%d", &t);

    for(x=1; x<=t; x++){
        scanf("%d", &n);

        size = (2*n)-2;

        char arr[size];

        scanf("%s", &arr);

        for(i=0; i<size; i++){
            if(arr[i]=='S'){
                arr[i]='E';
            }
            else if(arr[i]=='E'){
                arr[i]='S';
            }
        }
        printf("%s\n", arr);
    }
    return 0;
}
