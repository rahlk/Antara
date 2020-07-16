#include<stdio.h>
#include<stdlib.h>

void main(){
    char in[100000],out[100000], old;
    int i, t, change, n, j;
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        scanf("%s", in);
        change = 0;
        if(in[0] == 'S')
            out[0] = 'E';
        else
            out[0] = 'S';
        for(j = 1 ; in[j] != '\0'; j++){
            if(in[j] == in[j - 1])
                change = 0;
            else
                change = 1;
            if(change){
                if(out[j - 1] == 'S')
                    out[j] = 'E';
                else
                    out[j] = 'S';
            }
            else
                out[j] = out[j - 1];
        }
        out[j] = '\0';
        printf("Case #%d: %s\n", i + 1, out);
    }
    exit(0);
}