#include<stdio.h>
#include<math.h>
int main(void){
    int t,n;
    char p;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        printf("Case #%d: ",i+1);
        for(int j=0;j<2*n-1;j++){
            scanf("%c",&p);
            if(p=='E')
                printf("S");
            else if(p=='S')
                printf("E");
        }
        printf("\n");
    }
}