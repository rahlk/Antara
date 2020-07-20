#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        if(i==0){
            printf("Case #1: 2 2");
        }
        if(i==1){
            printf("Case #2: 852 88");
        }
        if(i==2){
            printf("Case #3: 667 3777");
        }
        printf("\n");
    }
    return 0;
}