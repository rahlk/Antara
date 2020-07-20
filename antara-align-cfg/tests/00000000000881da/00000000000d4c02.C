#include<stdio.h>
int main(){
    int t,n,t1;
    scanf("%d",&t);
    t1 =t;
    while(t--){
        scanf("%d",&n);
        char st[2*n-2];
        scanf("%s",st);
        printf("Case #%d: ",t1-t);
        for(int i = 0;i < 2*n-2;i++){
            if(st[i]=='E'){
                printf("S");
            }
            else{
                printf("E");
            }
            printf("\n");
        }
    }
    return 0;
}