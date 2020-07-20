#include<stdio.h>
#include<string.h>
int main(){
    int t,num,i;
    char arr[1050];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&num);
        scanf("%[^\n]c", arr);
        for(int j = 0;j<strlen(arr);j++){
            if(arr[j]=='E'){
                arr[j]='S';
            }
            else{
                arr[j] == 'E';
            }
        }
        for(int j = 0;j<strlen(arr);j++){
            printf("Case #%d:%d",i+1,arr[j]);
        }
    }
}