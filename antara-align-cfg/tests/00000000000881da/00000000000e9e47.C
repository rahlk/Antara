#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    
    while(t--){
        int size;
        scanf("%d",&size);
        char arr[100] = {0};
        scanf("%s",arr);
        int i = 0;
        while(arr[i]!='\0'){
            if(arr[i]=='S')arr[i]='E';
            else arr[i] = 'S';
            i++;
        }
        printf("%s\n",arr);
    }
    
    return 0;
}