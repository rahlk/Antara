#include<stdio.h>
#include<string.h>
int main(){
    int t,i,j;
    scanf("%d", &t);
    for(i=0;i<t;i++){
        char str[50000];
        char out[50000];
        int size;
        scanf("%d", &size);
        scanf("%s",str);
        int len= strlen(str);
        for(j=0;j<len;j++){
            if(str[j]=='S'){
                out[j]= 'E';
                
            }
            if(str[j]== 'E'){
                out[j]= 'S';
            }
            
        }
        printf("Case #%d: %s\n",i+1,out);
        
    }
}