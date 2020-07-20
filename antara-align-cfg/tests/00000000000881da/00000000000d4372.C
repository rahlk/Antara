#include<stdio.h>
#include<string.h>
int main(){
    int t,num,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&num);
        char arr[2*num-2]
        scanf(" %s", arr);
        for(int j = 0;j<strlen(arr);j++){
            if(arr[j]=='E'){
                printf("S");
            }
            else{
                printf("E");
            }
        }
    }
}