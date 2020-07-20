#include<stdio.h>
int main(){int t;scanf("%d",&t);for(int i=0;i<t;i++){printf("Case #%d: ",i+1);
    int n;scanf("%d\n",&n);char c;for(int i=0;i<2*n-2;i++){
        scanf("%c",&c);if(c=='S')printf("E");
        else printf("S");
    }
    printf("\n");
}
    return 0;
}