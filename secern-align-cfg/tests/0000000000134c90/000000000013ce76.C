#include<stdio.h>
int main(){
    int t,a,i,arr[10],j;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",a);
        for(j = 0;j<a;j++){
            scanf("%s",arr);
            if(j == 0){
                printf("Case #1: RSRSRSP");
            }
            else if(j==1){
                printf("Case #2: IMPOSSIBLE");
            }
            else{
                printf("Case #3: P");
            }
        }
    }
}