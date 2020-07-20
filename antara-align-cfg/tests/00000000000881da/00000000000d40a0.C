#include<stdio.h>
#include<string.h>
int main(){
    int t,num,i;
    char arr[75000];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&num);
        scanf(" %s", arr);
        for(int j = 0;j<strlen(arr);j++){
            if(arr[j]=='E'){
                arr[j]='S';
            }
            else{
                arr[j] = 'E';
            }
        }
        printf("Case #%d: %s",i+1,arr);
    }
}