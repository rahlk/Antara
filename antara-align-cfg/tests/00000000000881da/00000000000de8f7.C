#include<stdio.h>

char path[100000];

int main() {
    int N,cs=0,i,n;
    for(scanf("%d",&N);N--;) {
        scanf("%d %s",&n,path);
        for(i=0;path[i];i++) path[i]='S'-path[i]+'E';
        printf("Case #%d: %s\n",++cs,path);
    }
    return 0;
}