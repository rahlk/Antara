#include <stdio.h>
#include <string.h>

int main(){
    int t,n;
    char path[100000];
    scanf("%d",&t);
    for(int i = 1; i <= t;i++){
        scanf("%d",&n);
        scanf("%s",&path);
        char east[100000] = "", south[100000] = "";
        for(int j = 0; j < n - 1; j++){
            strcat(east,"E");
            strcat(south,"S");
        }
        char temp1[100000] = "",temp2[100000]="";
        strcat(temp1,east);
        strcat(temp1,south);
        strcat(temp2,south);
        strcat(temp2,east);
        if(path == temp1){
            printf("Case #%d: %s\n",i,temp2);
        }else if(path == temp2){
            printf("Case #%d: %s\n",i,temp1);
        }else{
            printf("Case #%d: %s\n",i,temp1);
        }
    }
    return 0;
}