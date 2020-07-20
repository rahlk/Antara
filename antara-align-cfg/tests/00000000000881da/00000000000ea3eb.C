#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    
    for(int a=1;a<=t;a++){
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
        printf("Case #%d: %s\n",a,arr);
    }
    
    return 0;
}