#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    int i,x,num,number,t;
    scanf("%d",&t);
    for(i = 0;i<t;i++){
        scanf("%d",&num);
        number = num;
        sprintf(arr,"%d",num);
        for(int j = 0;j<strlen(arr);j++){
            if(arr[j]=='4'){
                arr[j]='3';
            }
        }
        sscanf(arr,"%d",&x);
        printf("Case #1: %d %d\n",x,number-x);
    }
}